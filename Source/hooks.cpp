#include "hooks.h"

//IMPROVE LATER!
//https://www.unknowncheats.me/forum/programming-for-beginners/503632-readprocessmemory-read-multilevel-pointers.html

/*
    TODO:
        Turn into a static library, so I don't have to keep including the whole thing
*/

bool Hooks::init() {
    if (this->initialized) {
        LOG_WARN("[HOOKS] Trying to initialize hooks more than once!");
        return false;
    }

    SYSTEM_INFO system_info;
    GetSystemInfo(&system_info);

    this->minimumAddress = reinterpret_cast<uintptr_t>(system_info.lpMinimumApplicationAddress);
    if (!this->minimumAddress) {
        LOG_ERROR("[HOOKS] Failed to get minimum address!!");
        return false;
    }

    this->maximumAddress = reinterpret_cast<uintptr_t>(system_info.lpMaximumApplicationAddress);
    if (!this->maximumAddress) {
        LOG_ERROR("[HOOKS] Failed to get maximum address!!");
        return false;
    }

    if (this->minimumAddress >= this->maximumAddress) {
        LOG_ERROR("[HOOKS] Minimum address is bigger, than it should be!!");
        return false;
    }

    if (MH_Initialize() != MH_OK) {
        LOG_ERROR("[HOOKS] Failed to initialize MinHook!");
        return false;
    }

    LOG_SUCCESS("[HOOKS] HOOKS INITIALIZED!");

    return this->initialized = true;
}

bool Hooks::hooksInitialized(const std::string& caller) {
    if (!this->initialized) {
        std::string err = std::format("[HOOKS] {} is trying to use hooks before it's initialized!", caller);
        LOG_ERROR(err.c_str());
        return false;
    }

    return true;
}

bool Hooks::addressInRange(uintptr_t address) {
    if (!isInitialized) return false;

    return (address != 0 && address > this->minimumAddress && address < this->maximumAddress);
}

//https://www.youtube.com/watch?v=hlioPJ_uB7M
uintptr_t Hooks::readAddress(uintptr_t pointer, std::vector<unsigned int> offsets) {
    if (!isInitialized) return NULL;

    uintptr_t address = pointer;
    for (unsigned int i = 0; i < offsets.size(); ++i) {
        address = *(uintptr_t*)address;

        if (!address) {
            return NULL; //To prevent crashing when address ends up being invalid
        }

        address += offsets[i];

        // Make sure we don't go beyond the limit and crash
        if (!this->addressInRange((uintptr_t)address)) {
            LOG_WARN("[HOOKS] Address is not in range!");
            return NULL;
        }
    }
    return address;
}

void* Hooks::functionAddress(uintptr_t pointer) {
    if (!isInitialized) return nullptr;

    return (void*)this->readAddress(pointer, {});
}

/*
    Examples:
        FOR FUTURE ME: since sigmaker is broken, use:
        Cheat Engine -> Memory View -> Tools -> Auto Assemble -> Template -> AOB Injection -> Current Address -> And under aobscan(INJECT, OUR PATTERN HERE)

        pattern - (CODE STYLE) "\x48\x85\xc9\x74\x00\xf3\x0f\x2c\x71"
        mask - (Has to match pattern! "x" where there's a number/letter and "?" where there's x00) "xxxx?xxxx"
        mod_name - (Most likely going to be name of the .exe it's used on) "sdhdship.exe"
*/

uintptr_t Hooks::signatureScan(const char* pattern, const char* mask, LPCSTR mod_name) {
    if (!isInitialized) return NULL;

    static MODULEINFO mod_info;
    uintptr_t mod = (uintptr_t)GetModuleHandleA(mod_name);

    if (!mod) {
        LOG_ERROR("[HOOKS] Couldn't get module handle!");
        return NULL;
    }

    GetModuleInformation(GetCurrentProcess(), reinterpret_cast<HMODULE>(mod), &mod_info, sizeof(MODULEINFO));

    uintptr_t range_end = mod + mod_info.SizeOfImage;

    return this->getAddressFromSignature(pattern, mask, mod, range_end);
}

// Why we keeping both signatureScan and this?
// This is like a scanner, when we know where approximately the address region could directly be
// The signatureScan is for when we don't know, so we scan the whole program for the signature (yes unefficient, but barely makes a difference these days)
uintptr_t Hooks::getAddressFromSignature(const char* pattern, const char* mask, uintptr_t begin, uintptr_t end)
{
    if (!isInitialized) return NULL;

    size_t patternLength = strlen(mask);
    const unsigned char* unsigned_pattern = reinterpret_cast<const unsigned char*>(pattern);
    const unsigned char* base = reinterpret_cast<const unsigned char*>(begin);

    size_t mod_size = (end - begin);

    for (uintptr_t i = 0; i + patternLength <= mod_size; ++i)
    {
        bool found = true;
        for (size_t j = 0; j < patternLength; ++j)
        {
            if (mask[j] != '?' && unsigned_pattern[j] != base[i + j])
            {
                found = false;
                break;
            }
        }
        if (found)
            return begin + i;
    }
    return NULL;
}

/*
TODO: SAVE FUNCTIONS BASED OFF NAME FOR EASIER ACCESS
      MAKE target_address use this->readAddress(address, {}));
      FOR NOW ADD BASE ADDRESS IN THE ADDRESS PARAM!!

    [param 1] address - Address of the function to hook (relative to base address)

    [param 2] hook - The function to run instead of the original (use with & infront)

    [param 3] orig - A pointer to the original function (use with & infront)

    (OPTIONAL) [param 4] enable - Enable the hook on creation

    [return] target_address - Pointer for MH_EnableHook/MH_RemoveHook
*/
LPVOID Hooks::hookFunction(uintptr_t address, LPVOID hook, LPVOID* orig, BOOL enable) {
    if (!isInitialized) return nullptr;

    if (!this->addressInRange((uintptr_t)address)) {
        return nullptr;
    }

    LPVOID* target_address = reinterpret_cast<LPVOID*>(address); //reinterpret_cast<LPVOID*>(this->readAddress(address, {}));

    if (MH_CreateHook(target_address, hook, orig) != MH_OK) {
        LOG_ERROR("[HOOKS] Failed to create hook!");
        return nullptr;
    }

    if (enable && MH_EnableHook(target_address) != MH_OK) {
        LOG_ERROR("[HOOKS] Failed to enable hook!");
        return nullptr;
    }

    return target_address;
}

// https://www.unknowncheats.me/forum/c-and-c-/39238-tutorial-nop-function.html
void Hooks::nop(void* address, int bytes) {
    if (!isInitialized) return;

    if (!this->addressInRange((uintptr_t)address)) {
        return;
    }

    DWORD d, ds;
    VirtualProtect(address, bytes, PAGE_EXECUTE_READWRITE, &d);
    memset(address, NOP, bytes);
    VirtualProtect(address, bytes, d, &ds);
}

void Hooks::setLittleEndian(unsigned char array[], int32_t value) {
    int index = 0;
    for (index; (int)array[index] != 0; index++) {} // Get starting index
    memcpy(&array[index], &value, sizeof(value)); // To get bytes in little endian format/order
}

/*
    TODO:
        For some reason the bytes are read from end to start, instead of start to end
        Fix that somehow, so I don't have to adjust manually
*/

//size = sizeof(bytes)
void Hooks::setBytes(void* address, unsigned char bytes[], size_t size) {
    if (!isInitialized) return;

    if (!this->addressInRange((uintptr_t)address) || size == 0) {
        return;
    }

    DWORD d, ds;
    VirtualProtect(address, size, PAGE_EXECUTE_READWRITE, &d);
    memcpy(address, bytes, size);
    VirtualProtect(address, size, d, &ds);
}

// We love long names :3
uintptr_t* Hooks::getVFTableFunctionAddressByIndex(void* instance, size_t index) {
    void** vftable = *(void***)instance;
    void* func_address = vftable[index];

    return (uintptr_t*)func_address;
}

/*
    Unsure, but seems to have an issue, where if it's called in this function, it works fine,
    But when it's actually passed and called else-where, it seems to yield strange return results?
    Despite being a correct address and all
*/
template <typename ret, typename ... args>
auto Hooks::getVFTableFunction(void* instance, size_t index) {
    void** vftable = *(void***)instance;
    void* func_address = vftable[index];

    typedef ret(__fastcall* FuncType)(void*, args...);
    FuncType func = (FuncType)func_address;

    return func;
}
