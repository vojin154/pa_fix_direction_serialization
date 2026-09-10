#include <Windows.h>

#pragma region Proxy

#define EXPORTED_FUNCS(FUNC)				\
	FUNC(GlmfBeginGlsBlock)					\
	FUNC(GlmfCloseMetaFile)					\
	FUNC(GlmfEndGlsBlock)					\
	FUNC(GlmfEndPlayback)					\
	FUNC(GlmfInitPlayback)					\
	FUNC(GlmfPlayGlsRecord)					\
	FUNC(glAccum)							\
	FUNC(glAlphaFunc)						\
	FUNC(glAreTexturesResident)				\
	FUNC(glArrayElement)					\
	FUNC(glBegin)							\
	FUNC(glBindTexture)						\
	FUNC(glBitmap)							\
	FUNC(glBlendFunc)						\
	FUNC(glCallList)						\
	FUNC(glCallLists)						\
	FUNC(glClear)							\
	FUNC(glClearAccum)						\
	FUNC(glClearColor)						\
	FUNC(glClearDepth)						\
	FUNC(glClearIndex)						\
	FUNC(glClearStencil)					\
	FUNC(glClipPlane)						\
	FUNC(glColor3b)							\
	FUNC(glColor3bv)						\
	FUNC(glColor3d)							\
	FUNC(glColor3dv)						\
	FUNC(glColor3f)							\
	FUNC(glColor3fv)						\
	FUNC(glColor3i)							\
	FUNC(glColor3iv)						\
	FUNC(glColor3s)							\
	FUNC(glColor3sv)						\
	FUNC(glColor3ub)						\
	FUNC(glColor3ubv)						\
	FUNC(glColor3ui)						\
	FUNC(glColor3uiv)						\
	FUNC(glColor3us)						\
	FUNC(glColor3usv)						\
	FUNC(glColor4b)							\
	FUNC(glColor4bv)						\
	FUNC(glColor4d)							\
	FUNC(glColor4dv)						\
	FUNC(glColor4f)							\
	FUNC(glColor4fv)						\
	FUNC(glColor4i)							\
	FUNC(glColor4iv)						\
	FUNC(glColor4s)							\
	FUNC(glColor4sv)						\
	FUNC(glColor4ub)						\
	FUNC(glColor4ubv)						\
	FUNC(glColor4ui)						\
	FUNC(glColor4uiv)						\
	FUNC(glColor4us)						\
	FUNC(glColor4usv)						\
	FUNC(glColorMask)						\
	FUNC(glColorMaterial)					\
	FUNC(glColorPointer)					\
	FUNC(glCopyPixels)						\
	FUNC(glCopyTexImage1D)					\
	FUNC(glCopyTexImage2D)					\
	FUNC(glCopyTexSubImage1D)				\
	FUNC(glCopyTexSubImage2D)				\
	FUNC(glCullFace)						\
	FUNC(glDebugEntry)						\
	FUNC(glDeleteLists)						\
	FUNC(glDeleteTextures)					\
	FUNC(glDepthFunc)						\
	FUNC(glDepthMask)						\
	FUNC(glDepthRange)						\
	FUNC(glDisable)							\
	FUNC(glDisableClientState)				\
	FUNC(glDrawArrays)						\
	FUNC(glDrawBuffer)						\
	FUNC(glDrawElements)					\
	FUNC(glDrawPixels)						\
	FUNC(glEdgeFlag)						\
	FUNC(glEdgeFlagPointer)					\
	FUNC(glEdgeFlagv)						\
	FUNC(glEnable)							\
	FUNC(glEnableClientState)				\
	FUNC(glEnd)								\
	FUNC(glEndList)							\
	FUNC(glEvalCoord1d)						\
	FUNC(glEvalCoord1dv)					\
	FUNC(glEvalCoord1f)						\
	FUNC(glEvalCoord1fv)					\
	FUNC(glEvalCoord2d)						\
	FUNC(glEvalCoord2dv)					\
	FUNC(glEvalCoord2f)						\
	FUNC(glEvalCoord2fv)					\
	FUNC(glEvalMesh1)						\
	FUNC(glEvalMesh2)						\
	FUNC(glEvalPoint1)						\
	FUNC(glEvalPoint2)						\
	FUNC(glFeedbackBuffer)					\
	FUNC(glFinish)							\
	FUNC(glFlush)							\
	FUNC(glFogf)							\
	FUNC(glFogfv)							\
	FUNC(glFogi)							\
	FUNC(glFogiv)							\
	FUNC(glFrontFace)						\
	FUNC(glFrustum)							\
	FUNC(glGenLists)						\
	FUNC(glGenTextures)						\
	FUNC(glGetBooleanv)						\
	FUNC(glGetClipPlane)					\
	FUNC(glGetDoublev)						\
	FUNC(glGetError)						\
	FUNC(glGetFloatv)						\
	FUNC(glGetIntegerv)						\
	FUNC(glGetLightfv)						\
	FUNC(glGetLightiv)						\
	FUNC(glGetMapdv)						\
	FUNC(glGetMapfv)						\
	FUNC(glGetMapiv)						\
	FUNC(glGetMaterialfv)					\
	FUNC(glGetMaterialiv)					\
	FUNC(glGetPixelMapfv)					\
	FUNC(glGetPixelMapuiv)					\
	FUNC(glGetPixelMapusv)					\
	FUNC(glGetPointerv)						\
	FUNC(glGetPolygonStipple)				\
	FUNC(glGetString)						\
	FUNC(glGetTexEnvfv)						\
	FUNC(glGetTexEnviv)						\
	FUNC(glGetTexGendv)						\
	FUNC(glGetTexGenfv)						\
	FUNC(glGetTexGeniv)						\
	FUNC(glGetTexImage)						\
	FUNC(glGetTexLevelParameterfv)			\
	FUNC(glGetTexLevelParameteriv)			\
	FUNC(glGetTexParameterfv)				\
	FUNC(glGetTexParameteriv)				\
	FUNC(glHint)							\
	FUNC(glIndexMask)						\
	FUNC(glIndexPointer)					\
	FUNC(glIndexd)							\
	FUNC(glIndexdv)							\
	FUNC(glIndexf)							\
	FUNC(glIndexfv)							\
	FUNC(glIndexi)							\
	FUNC(glIndexiv)							\
	FUNC(glIndexs)							\
	FUNC(glIndexsv)							\
	FUNC(glIndexub)							\
	FUNC(glIndexubv)						\
	FUNC(glInitNames)						\
	FUNC(glInterleavedArrays)				\
	FUNC(glIsEnabled)						\
	FUNC(glIsList)							\
	FUNC(glIsTexture)						\
	FUNC(glLightModelf)						\
	FUNC(glLightModelfv)					\
	FUNC(glLightModeli)						\
	FUNC(glLightModeliv)					\
	FUNC(glLightf)							\
	FUNC(glLightfv)							\
	FUNC(glLighti)							\
	FUNC(glLightiv)							\
	FUNC(glLineStipple)						\
	FUNC(glLineWidth)						\
	FUNC(glListBase)						\
	FUNC(glLoadIdentity)					\
	FUNC(glLoadMatrixd)						\
	FUNC(glLoadMatrixf)						\
	FUNC(glLoadName)						\
	FUNC(glLogicOp)							\
	FUNC(glMap1d)							\
	FUNC(glMap1f)							\
	FUNC(glMap2d)							\
	FUNC(glMap2f)							\
	FUNC(glMapGrid1d)						\
	FUNC(glMapGrid1f)						\
	FUNC(glMapGrid2d)						\
	FUNC(glMapGrid2f)						\
	FUNC(glMaterialf)						\
	FUNC(glMaterialfv)						\
	FUNC(glMateriali)						\
	FUNC(glMaterialiv)						\
	FUNC(glMatrixMode)						\
	FUNC(glMultMatrixd)						\
	FUNC(glMultMatrixf)						\
	FUNC(glNewList)							\
	FUNC(glNormal3b)						\
	FUNC(glNormal3bv)						\
	FUNC(glNormal3d)						\
	FUNC(glNormal3dv)						\
	FUNC(glNormal3f)						\
	FUNC(glNormal3fv)						\
	FUNC(glNormal3i)						\
	FUNC(glNormal3iv)						\
	FUNC(glNormal3s)						\
	FUNC(glNormal3sv)						\
	FUNC(glNormalPointer)					\
	FUNC(glOrtho)							\
	FUNC(glPassThrough)						\
	FUNC(glPixelMapfv)						\
	FUNC(glPixelMapuiv)						\
	FUNC(glPixelMapusv)						\
	FUNC(glPixelStoref)						\
	FUNC(glPixelStorei)						\
	FUNC(glPixelTransferf)					\
	FUNC(glPixelTransferi)					\
	FUNC(glPixelZoom)						\
	FUNC(glPointSize)						\
	FUNC(glPolygonMode)						\
	FUNC(glPolygonOffset)					\
	FUNC(glPolygonStipple)					\
	FUNC(glPopAttrib)						\
	FUNC(glPopClientAttrib)					\
	FUNC(glPopMatrix)						\
	FUNC(glPopName)							\
	FUNC(glPrioritizeTextures)				\
	FUNC(glPushAttrib)						\
	FUNC(glPushClientAttrib)				\
	FUNC(glPushMatrix)						\
	FUNC(glPushName)						\
	FUNC(glRasterPos2d)						\
	FUNC(glRasterPos2dv)					\
	FUNC(glRasterPos2f)						\
	FUNC(glRasterPos2fv)					\
	FUNC(glRasterPos2i)						\
	FUNC(glRasterPos2iv)					\
	FUNC(glRasterPos2s)						\
	FUNC(glRasterPos2sv)					\
	FUNC(glRasterPos3d)						\
	FUNC(glRasterPos3dv)					\
	FUNC(glRasterPos3f)						\
	FUNC(glRasterPos3fv)					\
	FUNC(glRasterPos3i)						\
	FUNC(glRasterPos3iv)					\
	FUNC(glRasterPos3s)						\
	FUNC(glRasterPos3sv)					\
	FUNC(glRasterPos4d)						\
	FUNC(glRasterPos4dv)					\
	FUNC(glRasterPos4f)						\
	FUNC(glRasterPos4fv)					\
	FUNC(glRasterPos4i)						\
	FUNC(glRasterPos4iv)					\
	FUNC(glRasterPos4s)						\
	FUNC(glRasterPos4sv)					\
	FUNC(glReadBuffer)						\
	FUNC(glReadPixels)						\
	FUNC(glRectd)							\
	FUNC(glRectdv)							\
	FUNC(glRectf)							\
	FUNC(glRectfv)							\
	FUNC(glRecti)							\
	FUNC(glRectiv)							\
	FUNC(glRects)							\
	FUNC(glRectsv)							\
	FUNC(glRenderMode)						\
	FUNC(glRotated)							\
	FUNC(glRotatef)							\
	FUNC(glScaled)							\
	FUNC(glScalef)							\
	FUNC(glScissor)							\
	FUNC(glSelectBuffer)					\
	FUNC(glShadeModel)						\
	FUNC(glStencilFunc)						\
	FUNC(glStencilMask)						\
	FUNC(glStencilOp)						\
	FUNC(glTexCoord1d)						\
	FUNC(glTexCoord1dv)						\
	FUNC(glTexCoord1f)						\
	FUNC(glTexCoord1fv)						\
	FUNC(glTexCoord1i)						\
	FUNC(glTexCoord1iv)						\
	FUNC(glTexCoord1s)						\
	FUNC(glTexCoord1sv)						\
	FUNC(glTexCoord2d)						\
	FUNC(glTexCoord2dv)						\
	FUNC(glTexCoord2f)						\
	FUNC(glTexCoord2fv)						\
	FUNC(glTexCoord2i)						\
	FUNC(glTexCoord2iv)						\
	FUNC(glTexCoord2s)						\
	FUNC(glTexCoord2sv)						\
	FUNC(glTexCoord3d)						\
	FUNC(glTexCoord3dv)						\
	FUNC(glTexCoord3f)						\
	FUNC(glTexCoord3fv)						\
	FUNC(glTexCoord3i)						\
	FUNC(glTexCoord3iv)						\
	FUNC(glTexCoord3s)						\
	FUNC(glTexCoord3sv)						\
	FUNC(glTexCoord4d)						\
	FUNC(glTexCoord4dv)						\
	FUNC(glTexCoord4f)						\
	FUNC(glTexCoord4fv)						\
	FUNC(glTexCoord4i)						\
	FUNC(glTexCoord4iv)						\
	FUNC(glTexCoord4s)						\
	FUNC(glTexCoord4sv)						\
	FUNC(glTexCoordPointer)					\
	FUNC(glTexEnvf)							\
	FUNC(glTexEnvfv)						\
	FUNC(glTexEnvi)							\
	FUNC(glTexEnviv)						\
	FUNC(glTexGend)							\
	FUNC(glTexGendv)						\
	FUNC(glTexGenf)							\
	FUNC(glTexGenfv)						\
	FUNC(glTexGeni)							\
	FUNC(glTexGeniv)						\
	FUNC(glTexImage1D)						\
	FUNC(glTexImage2D)						\
	FUNC(glTexParameterf)					\
	FUNC(glTexParameterfv)					\
	FUNC(glTexParameteri)					\
	FUNC(glTexParameteriv)					\
	FUNC(glTexSubImage1D)					\
	FUNC(glTexSubImage2D)					\
	FUNC(glTranslated)						\
	FUNC(glTranslatef)						\
	FUNC(glVertex2d)						\
	FUNC(glVertex2dv)						\
	FUNC(glVertex2f)						\
	FUNC(glVertex2fv)						\
	FUNC(glVertex2i)						\
	FUNC(glVertex2iv)						\
	FUNC(glVertex2s)						\
	FUNC(glVertex2sv)						\
	FUNC(glVertex3d)						\
	FUNC(glVertex3dv)						\
	FUNC(glVertex3f)						\
	FUNC(glVertex3fv)						\
	FUNC(glVertex3i)						\
	FUNC(glVertex3iv)						\
	FUNC(glVertex3s)						\
	FUNC(glVertex3sv)						\
	FUNC(glVertex4d)						\
	FUNC(glVertex4f)						\
	FUNC(glVertex4dv)						\
	FUNC(glVertex4fv)						\
	FUNC(glVertex4i)						\
	FUNC(glVertex4iv)						\
	FUNC(glVertex4s)						\
	FUNC(glVertex4sv)						\
	FUNC(glVertexPointer)					\
	FUNC(glViewport)						\
	FUNC(wglChoosePixelFormat)				\
	FUNC(wglCopyContext)					\
	FUNC(wglCreateContext)					\
	FUNC(wglCreateLayerContext)				\
	FUNC(wglDeleteContext)					\
	FUNC(wglDescribeLayerPlane)				\
	FUNC(wglDescribePixelFormat)			\
	FUNC(wglGetCurrentContext)				\
	FUNC(wglGetCurrentDC)					\
	FUNC(wglGetDefaultProcAddress)			\
	FUNC(wglGetLayerPaletteEntries)			\
	FUNC(wglGetPixelFormat)					\
	FUNC(wglGetProcAddress)					\
	FUNC(wglMakeCurrent)					\
	FUNC(wglRealizeLayerPalette)			\
	FUNC(wglSetLayerPaletteEntries)			\
	FUNC(wglSetPixelFormat)					\
	FUNC(wglShareLists)						\
	FUNC(wglSwapBuffers)					\
	FUNC(wglSwapLayerBuffers)				\
	FUNC(wglSwapMultipleBuffers)			\
	FUNC(wglUseFontBitmapsA)				\
	FUNC(wglUseFontBitmapsW)				\
	FUNC(wglUseFontOutlinesA)				\
	FUNC(wglUseFontOutlinesW)



struct opengl32_dll {
	HMODULE dll{};

#define STRUCT(name) FARPROC ORIGINAL_##name;
	EXPORTED_FUNCS(STRUCT)
#undef STRUCT

} opengl32;


extern "C" {
	FARPROC external_target{ 0 };
	int JumpToTarget();

#define DEF_STUB(name) \
		void EXPORT_##name() { \
			external_target = opengl32.ORIGINAL_##name; \
			JumpToTarget(); \
		};

	EXPORTED_FUNCS(DEF_STUB)
}

#pragma endregion


#include "main.hpp"
static Main mainClass{};

static void MainThread(HINSTANCE hInst) {
	mainClass.Initialize();

	// Not using, so why keep it running
	/*while (true) {
		main_class.update();
		//Sleep();?
	}*/
}

static void Uninitialize() {
	mainClass.Uninitialize();
	FreeLibrary(opengl32.dll);
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
		case DLL_PROCESS_ATTACH: {
			DisableThreadLibraryCalls(hModule);

			char path[MAX_PATH]{};
			GetSystemDirectory(path, sizeof(path));

			strcat_s(path, "\\opengl32.dll");

			opengl32.dll = LoadLibrary(path);
			if (!opengl32.dll) {
				return FALSE;
			}

	#define REGISTER(name) opengl32.ORIGINAL_##name = GetProcAddress(opengl32.dll, #name);
			EXPORTED_FUNCS(REGISTER);
	#undef REGISTER

			HANDLE thread{ CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(MainThread), hModule, 0, nullptr) };
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
	return TRUE;
}