#ifndef __CONSOLE_HEADER__
#define __CONSOLE_HEADER__
#define localtime_r(time, out) localtime_s(out, time)

// TAKEN FROM SUPERBLT

// Credit: Christopher Oicles
// https://stackoverflow.com/questions/16500726/open-write-to-console-from-a-c-dll
// Stack overflow post

#include <windows.h>
#include <iostream>

class CConsole
{
	bool m_OwnConsole;
public:
	CConsole();
	~CConsole();
	void openConsole();
	void log(const char* message, int prefix);
};

#define LOG_FUNC(msg, prefix, ...) do { \
	unsigned int color = 0; \
	for (auto colour_i : {__VA_ARGS__}) { \
		color |= colour_i; \
	} \
	if (color > 0x0000) \
	{ \
		HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE); \
		SetConsoleTextAttribute(hStdout, color); \
	} \
	CConsole console; \
	console.log(msg, prefix); \
} while (false)

#define LOG(msg) LOG_FUNC(msg, 0, FOREGROUND_BLUE, FOREGROUND_GREEN, FOREGROUND_INTENSITY)
#define LOG_SUCCESS(msg) LOG_FUNC(msg, 0, FOREGROUND_GREEN, FOREGROUND_INTENSITY)
#define LOG_WARN(msg) LOG_FUNC(msg, 1, FOREGROUND_RED, FOREGROUND_GREEN, FOREGROUND_INTENSITY)
#define LOG_ERROR(msg) LOG_FUNC(msg, 2, FOREGROUND_RED, FOREGROUND_INTENSITY)

#endif
