#pragma once
#include <windows.h>
#include <memory.h>
#include <memory>
#include <memoryapi.h>
#include <string>
#include <sstream>
#include <format>
#include <iostream>
using namespace std;

class Main
{
	private:
	public:
		inline static const char* executable = "Prison Architect64.exe";
		void initialize();
		void uninitialize();
		void update();
		HINSTANCE getHandle();
		uintptr_t getBaseAddress();
		DWORD getPid();
};