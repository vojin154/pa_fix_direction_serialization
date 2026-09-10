#include "function_hooks.hpp"

#include "console.hpp"
#include "hooks.hpp"


// Thank GOG for this humongous signature :)
struct {
	static constexpr const char* prisonDir{ "\x41\xB8\x03\x00\x00\x00\x48\x8D\x55\x00\x48\x8B\xCE\xE8\x00\x00\x00\xFF\x48\x8B\xD8\xB9\x01\x00\x00\x00\xE8\x00\x00\x12\x00\x48\x89\x43\x10\x0F\xB6\x4E\x40" };
	static constexpr const char* staffDir{ "\x41\xB8\x03\x00\x00\x00\x48\x8D\x55\x00\x48\x8B\xCE\xE8\x00\x00\x00\xFF\x48\x8B\xD8\xB9\x01\x00\x00\x00\xE8\x00\x00\x12\x00\x48\x89\x43\x10\x0F\xB6\x4E\x41" };
	static constexpr const char* mask{ "xxxxxxxxx?xxxx???xxxxx????x??x?xxxxxxxx" };
} signatures;


void setDir(uintptr_t address) {
	unsigned char dir[6]{
		0x41, // MOV
		0xB8  // R8D
	};

	g_hooks.setLittleEndian(dir, 1);
	g_hooks.setBytes(reinterpret_cast<void*>(address), dir, sizeof(dir));
}


bool hooked{ false };

void hookFunctions(LPCSTR moduleName) {
	if (hooked) {
		LOG_WARN("Functions have already been hooked, meaning this ran more than it should.");
		return;
	}


	const uintptr_t prisonDir{ g_hooks.signatureScan(signatures.prisonDir, signatures.mask, moduleName) };
	if (!prisonDir) {
		LOG_ERROR("Failed to get the address of PrisonDir");
		return;
	}

	const uintptr_t staffDir{ g_hooks.signatureScan(signatures.staffDir, signatures.mask, moduleName) };
	if (!staffDir) {
		LOG_ERROR("Failed to get the address of StaffDir");
		return;
	}


	setDir(prisonDir);
	setDir(staffDir);


	hooked = true;

	LOG_SUCCESS("HOOKED FUNCTIONS!");
}