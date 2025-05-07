#include "console.h"

//TAKEN FROM SUPERBLT


bool open_console = false;



namespace
{
	class outbuf : public std::streambuf
	{
	public:
		outbuf()
		{
			setp(0, 0);
		}

		virtual int_type overflow(int_type c = traits_type::eof()) override
		{
			return fputc(c, stdout) == EOF ? traits_type::eof() : c;
		}
	};

	outbuf obuf;
	std::streambuf* sb = nullptr;
}
static BOOL WINAPI MyConsoleCtrlHandler(DWORD dwCtrlEvent)
{
	return dwCtrlEvent == CTRL_C_EVENT;
}

CConsole::CConsole() : m_OwnConsole(false)
{
	if (!open_console || !AllocConsole()) return;

	SetConsoleCtrlHandler(MyConsoleCtrlHandler, TRUE);
	RemoveMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);

	FILE* tmp;
	freopen_s(&tmp, "conout$", "w", stdout);
	freopen_s(&tmp, "conout$", "w", stderr);
	freopen_s(&tmp, "CONIN$", "r", stdin);

	// Redirect std::cout to the same location as stdout, otherwise you it won't appear on the console.
	sb = std::cout.rdbuf(&obuf);

	m_OwnConsole = true;
}

CConsole::~CConsole()
{
	if (m_OwnConsole)
	{
		std::cout.rdbuf(sb);
		SetConsoleCtrlHandler(MyConsoleCtrlHandler, FALSE);
		FreeConsole();
	}
}

const CConsole* console = NULL;

void CConsole::openConsole()
{
	if (!open_console) {
		return;
	}

	if (!console)
	{
		console = new CConsole();
	}
}

std::ostream& LogTime(std::ostream& os)
{
	std::time_t currentTime = time(0);
	std::tm now;
	localtime_r(&currentTime, &now);

	char datestring[100];
	std::strftime(datestring, sizeof(datestring), "%I:%M:%S %p", &now);

	os << datestring << ' ';
	return os;
}

const char* logType[3] = {
	"Log: ",
	"Warn: ",
	"Error: "
};

void CConsole::log(const char* message, int prefix) {
	if (!console) {
		return;
	}

	std::cout << LogTime << logType[prefix] << message << std::endl;
}