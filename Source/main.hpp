#ifndef __MAIN_HEADER__
#define __MAIN_HEADER__

#include <Windows.h>

class Main {
	public:
		inline static constexpr const char* executable{ "Prison Architect64.exe" };

		void Initialize();
		void Uninitialize();
		void Update();

		HINSTANCE GetHandle();
		uintptr_t GetBaseAddress();
		DWORD GetPid();
};


#endif