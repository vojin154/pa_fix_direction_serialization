#include <Windows.h>

#pragma region Proxy
struct dxgi_dll { 
	HMODULE dll;
	FARPROC Original_ApplyCompatResolutionQuirking;
	FARPROC Original_CompatString;
	FARPROC Original_CompatValue;
	FARPROC Original_CreateDXGIFactory;
	FARPROC Original_CreateDXGIFactory1;
	FARPROC Original_CreateDXGIFactory2;
	FARPROC Original_DXGID3D10CreateDevice;
	FARPROC Original_DXGID3D10CreateLayeredDevice;
	FARPROC Original_DXGID3D10GetLayeredDeviceSize;
	FARPROC Original_DXGID3D10RegisterLayers;
	FARPROC Original_DXGIDeclareAdapterRemovalSupport;
	FARPROC Original_DXGIDumpJournal;
	FARPROC Original_DXGIGetDebugInterface1;
	FARPROC Original_DXGIReportAdapterConfiguration;
	FARPROC Original_PIXBeginCapture;
	FARPROC Original_PIXEndCapture;
	FARPROC Original_PIXGetCaptureState;
	FARPROC Original_SetAppCompatStringPointer;
	FARPROC Original_UpdateHMDEmulationStatus;
} dxgi;

extern "C" {
	FARPROC PA = 0;
	int RunASM();

	void Fake_ApplyCompatResolutionQuirking() { PA = dxgi.Original_ApplyCompatResolutionQuirking; RunASM(); }
	void Fake_CompatString() { PA = dxgi.Original_CompatString; RunASM(); }
	void Fake_CompatValue() { PA = dxgi.Original_CompatValue; RunASM(); }
	void Fake_CreateDXGIFactory() { PA = dxgi.Original_CreateDXGIFactory; RunASM(); }
	void Fake_CreateDXGIFactory1() { PA = dxgi.Original_CreateDXGIFactory1; RunASM(); }
	void Fake_CreateDXGIFactory2() { PA = dxgi.Original_CreateDXGIFactory2; RunASM(); }
	void Fake_DXGID3D10CreateDevice() { PA = dxgi.Original_DXGID3D10CreateDevice; RunASM(); }
	void Fake_DXGID3D10CreateLayeredDevice() { PA = dxgi.Original_DXGID3D10CreateLayeredDevice; RunASM(); }
	void Fake_DXGID3D10GetLayeredDeviceSize() { PA = dxgi.Original_DXGID3D10GetLayeredDeviceSize; RunASM(); }
	void Fake_DXGID3D10RegisterLayers() { PA = dxgi.Original_DXGID3D10RegisterLayers; RunASM(); }
	void Fake_DXGIDeclareAdapterRemovalSupport() { PA = dxgi.Original_DXGIDeclareAdapterRemovalSupport; RunASM(); }
	void Fake_DXGIDumpJournal() { PA = dxgi.Original_DXGIDumpJournal; RunASM(); }
	void Fake_DXGIGetDebugInterface1() { PA = dxgi.Original_DXGIGetDebugInterface1; RunASM(); }
	void Fake_DXGIReportAdapterConfiguration() { PA = dxgi.Original_DXGIReportAdapterConfiguration; RunASM(); }
	void Fake_PIXBeginCapture() { PA = dxgi.Original_PIXBeginCapture; RunASM(); }
	void Fake_PIXEndCapture() { PA = dxgi.Original_PIXEndCapture; RunASM(); }
	void Fake_PIXGetCaptureState() { PA = dxgi.Original_PIXGetCaptureState; RunASM(); }
	void Fake_SetAppCompatStringPointer() { PA = dxgi.Original_SetAppCompatStringPointer; RunASM(); }
	void Fake_UpdateHMDEmulationStatus() { PA = dxgi.Original_UpdateHMDEmulationStatus; RunASM(); }
}

void setupFunctions() {
	dxgi.Original_ApplyCompatResolutionQuirking = GetProcAddress(dxgi.dll, "ApplyCompatResolutionQuirking");
	dxgi.Original_CompatString = GetProcAddress(dxgi.dll, "CompatString");
	dxgi.Original_CompatValue = GetProcAddress(dxgi.dll, "CompatValue");
	dxgi.Original_CreateDXGIFactory = GetProcAddress(dxgi.dll, "CreateDXGIFactory");
	dxgi.Original_CreateDXGIFactory1 = GetProcAddress(dxgi.dll, "CreateDXGIFactory1");
	dxgi.Original_CreateDXGIFactory2 = GetProcAddress(dxgi.dll, "CreateDXGIFactory2");
	dxgi.Original_DXGID3D10CreateDevice = GetProcAddress(dxgi.dll, "DXGID3D10CreateDevice");
	dxgi.Original_DXGID3D10CreateLayeredDevice = GetProcAddress(dxgi.dll, "DXGID3D10CreateLayeredDevice");
	dxgi.Original_DXGID3D10GetLayeredDeviceSize = GetProcAddress(dxgi.dll, "DXGID3D10GetLayeredDeviceSize");
	dxgi.Original_DXGID3D10RegisterLayers = GetProcAddress(dxgi.dll, "DXGID3D10RegisterLayers");
	dxgi.Original_DXGIDeclareAdapterRemovalSupport = GetProcAddress(dxgi.dll, "DXGIDeclareAdapterRemovalSupport");
	dxgi.Original_DXGIDumpJournal = GetProcAddress(dxgi.dll, "DXGIDumpJournal");
	dxgi.Original_DXGIGetDebugInterface1 = GetProcAddress(dxgi.dll, "DXGIGetDebugInterface1");
	dxgi.Original_DXGIReportAdapterConfiguration = GetProcAddress(dxgi.dll, "DXGIReportAdapterConfiguration");
	dxgi.Original_PIXBeginCapture = GetProcAddress(dxgi.dll, "PIXBeginCapture");
	dxgi.Original_PIXEndCapture = GetProcAddress(dxgi.dll, "PIXEndCapture");
	dxgi.Original_PIXGetCaptureState = GetProcAddress(dxgi.dll, "PIXGetCaptureState");
	dxgi.Original_SetAppCompatStringPointer = GetProcAddress(dxgi.dll, "SetAppCompatStringPointer");
	dxgi.Original_UpdateHMDEmulationStatus = GetProcAddress(dxgi.dll, "UpdateHMDEmulationStatus");
}
#pragma endregion

#include "main.h"
static Main main_class;

void MainThread(HINSTANCE hInst) {
	main_class.initialize();

	// Not using, so why keep it running
	/*while (true) {
		main_class.update();
		//Sleep();?
	}*/
}

void Uninitialize() {
	main_class.uninitialize();
	FreeLibrary(dxgi.dll);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
		case DLL_PROCESS_ATTACH: {
			char path[MAX_PATH];
			GetSystemDirectoryA(path, sizeof(path));

			strcat_s(path, "\\dxgi.dll");

			dxgi.dll = LoadLibrary(path);
			setupFunctions();

			HANDLE thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr);

			if (thread) {
				CloseHandle(thread);
			}

			break;
		}
		case DLL_PROCESS_DETACH: {
			Uninitialize();
			break;
		}
	}
	return 1;
}
