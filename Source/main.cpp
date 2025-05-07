#include "main.h"
#include "console.h"
#include "hooks.h"
#include "function_hooks.h"

static CConsole console;
static Hooks hooks;

HINSTANCE Main::getHandle() {
	return GetModuleHandleA(NULL);
}

uintptr_t Main::getBaseAddress() {
	return (uintptr_t)this->getHandle();
}

DWORD Main::getPid() {
	return GetCurrentProcessId();
}

void Main::initialize() {
	console.openConsole();

	LOG("CONSOLE LOADED!");

	if (!hooks.init()) {
		LOG_ERROR("Failed to initialize Hooks!");
		return;
	}
	else {
		LOG("HOOKS INITIALIZED!");
	}

	if (MH_Initialize() != MH_OK) {
		LOG_ERROR("Failed to initialize MinHook!");
	}
	else
	{
		LOG("MINHOOK INITIALIZED!");

		hookFunctions(this->getBaseAddress());
	}
}

void Main::uninitialize() {
	MH_DisableHook(MH_ALL_HOOKS);
	MH_Uninitialize();
}

// Disabled
void Main::update() {
	/*if (GetAsyncKeyState(VK_F5) & 1)
	{
		LOG("Pressed F5!");
	}*/
}