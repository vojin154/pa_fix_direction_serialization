#include "main.hpp"

#include "console.hpp"
#include "hooks.hpp"
#include "function_hooks.hpp"

static CConsole console{};


HINSTANCE Main::GetHandle() {
	return GetModuleHandle(nullptr);
}

uintptr_t Main::GetBaseAddress() {
	return reinterpret_cast<uintptr_t>(this->GetHandle());
}

DWORD Main::GetPid() {
	return GetCurrentProcessId();
}


void Main::Initialize() {
	console.openConsole();

	if (g_hooks.init()) {
		hookFunctions(this->executable);
	}
}

void Main::Uninitialize() {
	MH_DisableHook(MH_ALL_HOOKS);
	MH_Uninitialize();
}


// Disabled
void Main::Update() {
	/*if (GetAsyncKeyState(VK_F5) & 1) {
		LOG("Pressed F5!");
	}*/
}