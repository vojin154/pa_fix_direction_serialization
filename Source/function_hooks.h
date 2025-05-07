#pragma once
#include "console.h"
#include "hooks.h"
#include "types.h"

static Hooks _hooks;

uintptr_t prison_dir_address = (uintptr_t)0x1407B1846;
uintptr_t staff_dir_address = (uintptr_t)0x1407B18B9;

unsigned char dir[6];
void setEndian() {
	dir[0] = 0x41; // MOV
	dir[1] = 0xB8; // R8D

	_hooks.setLittleEndian(dir, 1);
}

void setDir(uintptr_t address) {
	_hooks.setBytes((void*)(address), dir, sizeof(dir));
}

bool hooked = false;

void hookFunctions(uintptr_t baseAddress) {
	if (hooked) {
		LOG_WARN("Functions have already been hooked, meaning this ran more than it should.");
		return;
	}

	setEndian();

	setDir(prison_dir_address);
	setDir(staff_dir_address);

	hooked = true;

	LOG("HOOKED FUNCTIONS!");
}