#pragma once

#include <Windows.h>
#include <Psapi.h>
#include <vector>
#include <format>
#include "console.h"
#include "MinHook.h"

/*
	DUMBASS SINCE YOU KEEP FORGETTING HOW TO UPDATE THEM MINHOOK LIBRARIES.
	GO TO MINHOOK GITHUB -> COPY URL -> GIT CLONE -> INSIDE THE FOLDER -> BUILD -> VERSION -> SOLUTION -> AND BUILD FOR WHATEVER ARCHITECTURE OR CONFIGURATION YOU NEED
	(RELEASE | DEBUG | x86 | x64) - Dynamic .DLL or Static .LIB
*/

#if _WIN64
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

constexpr unsigned char NOP = 0x90;

class Hooks
{
private:
	inline static uintptr_t minimumAddress = 0;
	inline static uintptr_t maximumAddress = 0;
	inline static bool initialized = false;

public:
	bool init();
	bool hooksInitialized(const std::string& caller);
#define isInitialized (this->hooksInitialized(__func__))
	bool addressInRange(uintptr_t address = 0);
	uintptr_t readAddress(uintptr_t pointer, std::vector<unsigned int> offsets);
	void* functionAddress(uintptr_t pointer);
	uintptr_t signatureScan(const char* pattern, const char* mask, LPCSTR module_name);
	uintptr_t getAddressFromSignature(const char* pattern, const char* mask, uintptr_t begin = 0, uintptr_t size = 0);
	LPVOID hookFunction(uintptr_t address, LPVOID hook, LPVOID* orig, BOOL enable = false);
	void nop(void* address, int bytes);
	void setLittleEndian(unsigned char array[], int32_t value);
	void setBytes(void* address, unsigned char bytes[], size_t size);
	uintptr_t* getVFTableFunctionAddressByIndex(void* instance, size_t index);
	template <typename ret, typename ... args>
	auto getVFTableFunction(void* instance, size_t index);
};

static Hooks hooks;