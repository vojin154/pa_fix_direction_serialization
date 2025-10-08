#pragma once
#include "console.h"
#include "hooks.h"
#include "types.h"

// Thanks GOG for this humongous signature :)
// Also, yes I did copy paste the WHOLE THING just to add for prisoners 0x40 and 0x41 for staff, but does it matter if it's really only just 2 lines?
const char* prison_dir_sig = "\x41\xB8\x03\x00\x00\x00\x48\x8D\x55\x00\x48\x8B\xCE\xE8\x00\x00\x00\xFF\x48\x8B\xD8\xB9\x01\x00\x00\x00\xE8\x00\x00\x12\x00\x48\x89\x43\x10\x0F\xB6\x4E\x40";
const char* staff_dir_sig = "\x41\xB8\x03\x00\x00\x00\x48\x8D\x55\x00\x48\x8B\xCE\xE8\x00\x00\x00\xFF\x48\x8B\xD8\xB9\x01\x00\x00\x00\xE8\x00\x00\x12\x00\x48\x89\x43\x10\x0F\xB6\x4E\x41";
const char* mask = "xxxxxxxxx?xxxx???xxxxx????x??x?xxxxxxxx";

uintptr_t prison_dir_address;
uintptr_t staff_dir_address;

unsigned char dir[6];
void setEndian() {
	dir[0] = 0x41; // MOV
	dir[1] = 0xB8; // R8D

	hooks.setLittleEndian(dir, 1);
}

void setDir(uintptr_t address) {
	hooks.setBytes((void*)(address), dir, sizeof(dir));
}

void addressSignatureScan(LPCSTR module_name) {
	prison_dir_address = hooks.signatureScan(prison_dir_sig, mask, module_name);
	if (!prison_dir_address) {
		LOG_ERROR("Failed to get the address of PrisonDir");
		return;
	}

	staff_dir_address = hooks.signatureScan(staff_dir_sig, mask, module_name);
	if (!staff_dir_address) {
		LOG_ERROR("Failed to get the address of StaffDir");
		return;
	}
}

bool hooked = false;

void hookFunctions(uintptr_t baseAddress) {
	if (hooked) {
		LOG_WARN("Functions have already been hooked, meaning this ran more than it should.");
		return;
	}

	if (!prison_dir_address || !staff_dir_address) {
		return;
	}

	setEndian();

	setDir(prison_dir_address);
	setDir(staff_dir_address);

	hooked = true;

	LOG_SUCCESS("HOOKED FUNCTIONS!");
}