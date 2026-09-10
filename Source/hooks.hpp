#ifndef __HOOKS_HEADER__
#define __HOOKS_HEADER__

#include <Windows.h>
#include <vector>
#include <string>

#include <MinHook.h>

/*
	DUMBASS SINCE YOU KEEP FORGETTING HOW TO UPDATE THE MINHOOK LIBRARIES.
	GO TO MINHOOK GITHUB -> COPY URL -> GIT CLONE -> INSIDE THE FOLDER -> BUILD -> VERSION -> SOLUTION -> AND BUILD FOR WHATEVER ARCHITECTURE OR CONFIGURATION YOU NEED
	(RELEASE | DEBUG | x86 | x64) - Dynamic .DLL or Static .LIB
*/

#if _WIN64
	#pragma comment(lib, "libMinHook.x64.lib")
#else
	#pragma comment(lib, "libMinHook.x86.lib")
#endif

namespace HookLib {

	constexpr unsigned char NOP{ 0x90 };

	class Hooks {
	private:
		inline static uintptr_t m_minimumAddress{ 0 };
		inline static uintptr_t m_maximumAddress{ 0 };
		inline static bool m_initialized{ false };

	public:
		bool init();
		bool hooksInitialized(const std::string& caller);
#define isInitialized (this->hooksInitialized(__func__))
		bool addressInRange(uintptr_t address = 0);
		uintptr_t readAddress(uintptr_t pointer, const std::vector<unsigned int>& offsets);
		void* functionAddress(uintptr_t pointer);
		uintptr_t signatureScan(const char* pattern, const char* mask, const char* module_name);
		uintptr_t getAddressFromSignature(const char* pattern, const char* mask, uintptr_t begin = 0, uintptr_t size = 0);
		LPVOID hookFunction(uintptr_t address, LPVOID hook, LPVOID* orig, BOOL enable = false);
		void nop(void* address, int bytes);
		void setLittleEndian(unsigned char array[], int32_t value);
		void setBytes(void* address, unsigned char bytes[], size_t size);
		void* getVFTableFunctionAddressByIndex(void* instance, size_t index);

		/*
			Unsure, but seems to have an issue, where if it's called in this function, it works fine,
			But when it's actually passed and called else-where, it seems to yield strange return results?
			Despite being a correct address and all
		*/
		template <typename ret, typename ... args>
		auto getVFTableFunction(void* instance, size_t index) {
			using FuncType = ret(__thiscall*)(void*, args...); // __thiscall is required on x86 and gets ignored on x64
			FuncType func{ reinterpret_cast<FuncType>(this->getVFTableFunctionAddressByIndex(instance, index)) };

			return func;
		}
	};

}

static HookLib::Hooks g_hooks{};

#endif