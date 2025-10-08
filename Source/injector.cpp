#include <Windows.h>

#pragma region Proxy
struct opengl32_dll {
	HMODULE dll;
	FARPROC Original_GlmfBeginGlsBlock;
	FARPROC Original_GlmfCloseMetaFile;
	FARPROC Original_GlmfEndGlsBlock;
	FARPROC Original_GlmfEndPlayback;
	FARPROC Original_GlmfInitPlayback;
	FARPROC Original_GlmfPlayGlsRecord;
	FARPROC Original_glAccum;
	FARPROC Original_glAlphaFunc;
	FARPROC Original_glAreTexturesResident;
	FARPROC Original_glArrayElement;
	FARPROC Original_glBegin;
	FARPROC Original_glBindTexture;
	FARPROC Original_glBitmap;
	FARPROC Original_glBlendFunc;
	FARPROC Original_glCallList;
	FARPROC Original_glCallLists;
	FARPROC Original_glClear;
	FARPROC Original_glClearAccum;
	FARPROC Original_glClearColor;
	FARPROC Original_glClearDepth;
	FARPROC Original_glClearIndex;
	FARPROC Original_glClearStencil;
	FARPROC Original_glClipPlane;
	FARPROC Original_glColor3b;
	FARPROC Original_glColor3bv;
	FARPROC Original_glColor3d;
	FARPROC Original_glColor3dv;
	FARPROC Original_glColor3f;
	FARPROC Original_glColor3fv;
	FARPROC Original_glColor3i;
	FARPROC Original_glColor3iv;
	FARPROC Original_glColor3s;
	FARPROC Original_glColor3sv;
	FARPROC Original_glColor3ub;
	FARPROC Original_glColor3ubv;
	FARPROC Original_glColor3ui;
	FARPROC Original_glColor3uiv;
	FARPROC Original_glColor3us;
	FARPROC Original_glColor3usv;
	FARPROC Original_glColor4b;
	FARPROC Original_glColor4bv;
	FARPROC Original_glColor4d;
	FARPROC Original_glColor4dv;
	FARPROC Original_glColor4f;
	FARPROC Original_glColor4fv;
	FARPROC Original_glColor4i;
	FARPROC Original_glColor4iv;
	FARPROC Original_glColor4s;
	FARPROC Original_glColor4sv;
	FARPROC Original_glColor4ub;
	FARPROC Original_glColor4ubv;
	FARPROC Original_glColor4ui;
	FARPROC Original_glColor4uiv;
	FARPROC Original_glColor4us;
	FARPROC Original_glColor4usv;
	FARPROC Original_glColorMask;
	FARPROC Original_glColorMaterial;
	FARPROC Original_glColorPointer;
	FARPROC Original_glCopyPixels;
	FARPROC Original_glCopyTexImage1D;
	FARPROC Original_glCopyTexImage2D;
	FARPROC Original_glCopyTexSubImage1D;
	FARPROC Original_glCopyTexSubImage2D;
	FARPROC Original_glCullFace;
	FARPROC Original_glDebugEntry;
	FARPROC Original_glDeleteLists;
	FARPROC Original_glDeleteTextures;
	FARPROC Original_glDepthFunc;
	FARPROC Original_glDepthMask;
	FARPROC Original_glDepthRange;
	FARPROC Original_glDisable;
	FARPROC Original_glDisableClientState;
	FARPROC Original_glDrawArrays;
	FARPROC Original_glDrawBuffer;
	FARPROC Original_glDrawElements;
	FARPROC Original_glDrawPixels;
	FARPROC Original_glEdgeFlag;
	FARPROC Original_glEdgeFlagPointer;
	FARPROC Original_glEdgeFlagv;
	FARPROC Original_glEnable;
	FARPROC Original_glEnableClientState;
	FARPROC Original_glEnd;
	FARPROC Original_glEndList;
	FARPROC Original_glEvalCoord1d;
	FARPROC Original_glEvalCoord1dv;
	FARPROC Original_glEvalCoord1f;
	FARPROC Original_glEvalCoord1fv;
	FARPROC Original_glEvalCoord2d;
	FARPROC Original_glEvalCoord2dv;
	FARPROC Original_glEvalCoord2f;
	FARPROC Original_glEvalCoord2fv;
	FARPROC Original_glEvalMesh1;
	FARPROC Original_glEvalMesh2;
	FARPROC Original_glEvalPoint1;
	FARPROC Original_glEvalPoint2;
	FARPROC Original_glFeedbackBuffer;
	FARPROC Original_glFinish;
	FARPROC Original_glFlush;
	FARPROC Original_glFogf;
	FARPROC Original_glFogfv;
	FARPROC Original_glFogi;
	FARPROC Original_glFogiv;
	FARPROC Original_glFrontFace;
	FARPROC Original_glFrustum;
	FARPROC Original_glGenLists;
	FARPROC Original_glGenTextures;
	FARPROC Original_glGetBooleanv;
	FARPROC Original_glGetClipPlane;
	FARPROC Original_glGetDoublev;
	FARPROC Original_glGetError;
	FARPROC Original_glGetFloatv;
	FARPROC Original_glGetIntegerv;
	FARPROC Original_glGetLightfv;
	FARPROC Original_glGetLightiv;
	FARPROC Original_glGetMapdv;
	FARPROC Original_glGetMapfv;
	FARPROC Original_glGetMapiv;
	FARPROC Original_glGetMaterialfv;
	FARPROC Original_glGetMaterialiv;
	FARPROC Original_glGetPixelMapfv;
	FARPROC Original_glGetPixelMapuiv;
	FARPROC Original_glGetPixelMapusv;
	FARPROC Original_glGetPointerv;
	FARPROC Original_glGetPolygonStipple;
	FARPROC Original_glGetString;
	FARPROC Original_glGetTexEnvfv;
	FARPROC Original_glGetTexEnviv;
	FARPROC Original_glGetTexGendv;
	FARPROC Original_glGetTexGenfv;
	FARPROC Original_glGetTexGeniv;
	FARPROC Original_glGetTexImage;
	FARPROC Original_glGetTexLevelParameterfv;
	FARPROC Original_glGetTexLevelParameteriv;
	FARPROC Original_glGetTexParameterfv;
	FARPROC Original_glGetTexParameteriv;
	FARPROC Original_glHint;
	FARPROC Original_glIndexMask;
	FARPROC Original_glIndexPointer;
	FARPROC Original_glIndexd;
	FARPROC Original_glIndexdv;
	FARPROC Original_glIndexf;
	FARPROC Original_glIndexfv;
	FARPROC Original_glIndexi;
	FARPROC Original_glIndexiv;
	FARPROC Original_glIndexs;
	FARPROC Original_glIndexsv;
	FARPROC Original_glIndexub;
	FARPROC Original_glIndexubv;
	FARPROC Original_glInitNames;
	FARPROC Original_glInterleavedArrays;
	FARPROC Original_glIsEnabled;
	FARPROC Original_glIsList;
	FARPROC Original_glIsTexture;
	FARPROC Original_glLightModelf;
	FARPROC Original_glLightModelfv;
	FARPROC Original_glLightModeli;
	FARPROC Original_glLightModeliv;
	FARPROC Original_glLightf;
	FARPROC Original_glLightfv;
	FARPROC Original_glLighti;
	FARPROC Original_glLightiv;
	FARPROC Original_glLineStipple;
	FARPROC Original_glLineWidth;
	FARPROC Original_glListBase;
	FARPROC Original_glLoadIdentity;
	FARPROC Original_glLoadMatrixd;
	FARPROC Original_glLoadMatrixf;
	FARPROC Original_glLoadName;
	FARPROC Original_glLogicOp;
	FARPROC Original_glMap1d;
	FARPROC Original_glMap1f;
	FARPROC Original_glMap2d;
	FARPROC Original_glMap2f;
	FARPROC Original_glMapGrid1d;
	FARPROC Original_glMapGrid1f;
	FARPROC Original_glMapGrid2d;
	FARPROC Original_glMapGrid2f;
	FARPROC Original_glMaterialf;
	FARPROC Original_glMaterialfv;
	FARPROC Original_glMateriali;
	FARPROC Original_glMaterialiv;
	FARPROC Original_glMatrixMode;
	FARPROC Original_glMultMatrixd;
	FARPROC Original_glMultMatrixf;
	FARPROC Original_glNewList;
	FARPROC Original_glNormal3b;
	FARPROC Original_glNormal3bv;
	FARPROC Original_glNormal3d;
	FARPROC Original_glNormal3dv;
	FARPROC Original_glNormal3f;
	FARPROC Original_glNormal3fv;
	FARPROC Original_glNormal3i;
	FARPROC Original_glNormal3iv;
	FARPROC Original_glNormal3s;
	FARPROC Original_glNormal3sv;
	FARPROC Original_glNormalPointer;
	FARPROC Original_glOrtho;
	FARPROC Original_glPassThrough;
	FARPROC Original_glPixelMapfv;
	FARPROC Original_glPixelMapuiv;
	FARPROC Original_glPixelMapusv;
	FARPROC Original_glPixelStoref;
	FARPROC Original_glPixelStorei;
	FARPROC Original_glPixelTransferf;
	FARPROC Original_glPixelTransferi;
	FARPROC Original_glPixelZoom;
	FARPROC Original_glPointSize;
	FARPROC Original_glPolygonMode;
	FARPROC Original_glPolygonOffset;
	FARPROC Original_glPolygonStipple;
	FARPROC Original_glPopAttrib;
	FARPROC Original_glPopClientAttrib;
	FARPROC Original_glPopMatrix;
	FARPROC Original_glPopName;
	FARPROC Original_glPrioritizeTextures;
	FARPROC Original_glPushAttrib;
	FARPROC Original_glPushClientAttrib;
	FARPROC Original_glPushMatrix;
	FARPROC Original_glPushName;
	FARPROC Original_glRasterPos2d;
	FARPROC Original_glRasterPos2dv;
	FARPROC Original_glRasterPos2f;
	FARPROC Original_glRasterPos2fv;
	FARPROC Original_glRasterPos2i;
	FARPROC Original_glRasterPos2iv;
	FARPROC Original_glRasterPos2s;
	FARPROC Original_glRasterPos2sv;
	FARPROC Original_glRasterPos3d;
	FARPROC Original_glRasterPos3dv;
	FARPROC Original_glRasterPos3f;
	FARPROC Original_glRasterPos3fv;
	FARPROC Original_glRasterPos3i;
	FARPROC Original_glRasterPos3iv;
	FARPROC Original_glRasterPos3s;
	FARPROC Original_glRasterPos3sv;
	FARPROC Original_glRasterPos4d;
	FARPROC Original_glRasterPos4dv;
	FARPROC Original_glRasterPos4f;
	FARPROC Original_glRasterPos4fv;
	FARPROC Original_glRasterPos4i;
	FARPROC Original_glRasterPos4iv;
	FARPROC Original_glRasterPos4s;
	FARPROC Original_glRasterPos4sv;
	FARPROC Original_glReadBuffer;
	FARPROC Original_glReadPixels;
	FARPROC Original_glRectd;
	FARPROC Original_glRectdv;
	FARPROC Original_glRectf;
	FARPROC Original_glRectfv;
	FARPROC Original_glRecti;
	FARPROC Original_glRectiv;
	FARPROC Original_glRects;
	FARPROC Original_glRectsv;
	FARPROC Original_glRenderMode;
	FARPROC Original_glRotated;
	FARPROC Original_glRotatef;
	FARPROC Original_glScaled;
	FARPROC Original_glScalef;
	FARPROC Original_glScissor;
	FARPROC Original_glSelectBuffer;
	FARPROC Original_glShadeModel;
	FARPROC Original_glStencilFunc;
	FARPROC Original_glStencilMask;
	FARPROC Original_glStencilOp;
	FARPROC Original_glTexCoord1d;
	FARPROC Original_glTexCoord1dv;
	FARPROC Original_glTexCoord1f;
	FARPROC Original_glTexCoord1fv;
	FARPROC Original_glTexCoord1i;
	FARPROC Original_glTexCoord1iv;
	FARPROC Original_glTexCoord1s;
	FARPROC Original_glTexCoord1sv;
	FARPROC Original_glTexCoord2d;
	FARPROC Original_glTexCoord2dv;
	FARPROC Original_glTexCoord2f;
	FARPROC Original_glTexCoord2fv;
	FARPROC Original_glTexCoord2i;
	FARPROC Original_glTexCoord2iv;
	FARPROC Original_glTexCoord2s;
	FARPROC Original_glTexCoord2sv;
	FARPROC Original_glTexCoord3d;
	FARPROC Original_glTexCoord3dv;
	FARPROC Original_glTexCoord3f;
	FARPROC Original_glTexCoord3fv;
	FARPROC Original_glTexCoord3i;
	FARPROC Original_glTexCoord3iv;
	FARPROC Original_glTexCoord3s;
	FARPROC Original_glTexCoord3sv;
	FARPROC Original_glTexCoord4d;
	FARPROC Original_glTexCoord4dv;
	FARPROC Original_glTexCoord4f;
	FARPROC Original_glTexCoord4fv;
	FARPROC Original_glTexCoord4i;
	FARPROC Original_glTexCoord4iv;
	FARPROC Original_glTexCoord4s;
	FARPROC Original_glTexCoord4sv;
	FARPROC Original_glTexCoordPointer;
	FARPROC Original_glTexEnvf;
	FARPROC Original_glTexEnvfv;
	FARPROC Original_glTexEnvi;
	FARPROC Original_glTexEnviv;
	FARPROC Original_glTexGend;
	FARPROC Original_glTexGendv;
	FARPROC Original_glTexGenf;
	FARPROC Original_glTexGenfv;
	FARPROC Original_glTexGeni;
	FARPROC Original_glTexGeniv;
	FARPROC Original_glTexImage1D;
	FARPROC Original_glTexImage2D;
	FARPROC Original_glTexParameterf;
	FARPROC Original_glTexParameterfv;
	FARPROC Original_glTexParameteri;
	FARPROC Original_glTexParameteriv;
	FARPROC Original_glTexSubImage1D;
	FARPROC Original_glTexSubImage2D;
	FARPROC Original_glTranslated;
	FARPROC Original_glTranslatef;
	FARPROC Original_glVertex2d;
	FARPROC Original_glVertex2dv;
	FARPROC Original_glVertex2f;
	FARPROC Original_glVertex2fv;
	FARPROC Original_glVertex2i;
	FARPROC Original_glVertex2iv;
	FARPROC Original_glVertex2s;
	FARPROC Original_glVertex2sv;
	FARPROC Original_glVertex3d;
	FARPROC Original_glVertex3dv;
	FARPROC Original_glVertex3f;
	FARPROC Original_glVertex3fv;
	FARPROC Original_glVertex3i;
	FARPROC Original_glVertex3iv;
	FARPROC Original_glVertex3s;
	FARPROC Original_glVertex3sv;
	FARPROC Original_glVertex4d;
	FARPROC Original_glVertex4dv;
	FARPROC Original_glVertex4f;
	FARPROC Original_glVertex4fv;
	FARPROC Original_glVertex4i;
	FARPROC Original_glVertex4iv;
	FARPROC Original_glVertex4s;
	FARPROC Original_glVertex4sv;
	FARPROC Original_glVertexPointer;
	FARPROC Original_glViewport;
	FARPROC Original_wglChoosePixelFormat;
	FARPROC Original_wglCopyContext;
	FARPROC Original_wglCreateContext;
	FARPROC Original_wglCreateLayerContext;
	FARPROC Original_wglDeleteContext;
	FARPROC Original_wglDescribeLayerPlane;
	FARPROC Original_wglDescribePixelFormat;
	FARPROC Original_wglGetCurrentContext;
	FARPROC Original_wglGetCurrentDC;
	FARPROC Original_wglGetDefaultProcAddress;
	FARPROC Original_wglGetLayerPaletteEntries;
	FARPROC Original_wglGetPixelFormat;
	FARPROC Original_wglGetProcAddress;
	FARPROC Original_wglMakeCurrent;
	FARPROC Original_wglRealizeLayerPalette;
	FARPROC Original_wglSetLayerPaletteEntries;
	FARPROC Original_wglSetPixelFormat;
	FARPROC Original_wglShareLists;
	FARPROC Original_wglSwapBuffers;
	FARPROC Original_wglSwapLayerBuffers;
	FARPROC Original_wglSwapMultipleBuffers;
	FARPROC Original_wglUseFontBitmapsA;
	FARPROC Original_wglUseFontBitmapsW;
	FARPROC Original_wglUseFontOutlinesA;
	FARPROC Original_wglUseFontOutlinesW;
} opengl32;

extern "C" {
	FARPROC PA = 0;
	int RunASM();

	void Fake_GlmfBeginGlsBlock() { PA = opengl32.Original_GlmfBeginGlsBlock; RunASM(); }
	void Fake_GlmfCloseMetaFile() { PA = opengl32.Original_GlmfCloseMetaFile; RunASM(); }
	void Fake_GlmfEndGlsBlock() { PA = opengl32.Original_GlmfEndGlsBlock; RunASM(); }
	void Fake_GlmfEndPlayback() { PA = opengl32.Original_GlmfEndPlayback; RunASM(); }
	void Fake_GlmfInitPlayback() { PA = opengl32.Original_GlmfInitPlayback; RunASM(); }
	void Fake_GlmfPlayGlsRecord() { PA = opengl32.Original_GlmfPlayGlsRecord; RunASM(); }
	void Fake_glAccum() { PA = opengl32.Original_glAccum; RunASM(); }
	void Fake_glAlphaFunc() { PA = opengl32.Original_glAlphaFunc; RunASM(); }
	void Fake_glAreTexturesResident() { PA = opengl32.Original_glAreTexturesResident; RunASM(); }
	void Fake_glArrayElement() { PA = opengl32.Original_glArrayElement; RunASM(); }
	void Fake_glBegin() { PA = opengl32.Original_glBegin; RunASM(); }
	void Fake_glBindTexture() { PA = opengl32.Original_glBindTexture; RunASM(); }
	void Fake_glBitmap() { PA = opengl32.Original_glBitmap; RunASM(); }
	void Fake_glBlendFunc() { PA = opengl32.Original_glBlendFunc; RunASM(); }
	void Fake_glCallList() { PA = opengl32.Original_glCallList; RunASM(); }
	void Fake_glCallLists() { PA = opengl32.Original_glCallLists; RunASM(); }
	void Fake_glClear() { PA = opengl32.Original_glClear; RunASM(); }
	void Fake_glClearAccum() { PA = opengl32.Original_glClearAccum; RunASM(); }
	void Fake_glClearColor() { PA = opengl32.Original_glClearColor; RunASM(); }
	void Fake_glClearDepth() { PA = opengl32.Original_glClearDepth; RunASM(); }
	void Fake_glClearIndex() { PA = opengl32.Original_glClearIndex; RunASM(); }
	void Fake_glClearStencil() { PA = opengl32.Original_glClearStencil; RunASM(); }
	void Fake_glClipPlane() { PA = opengl32.Original_glClipPlane; RunASM(); }
	void Fake_glColor3b() { PA = opengl32.Original_glColor3b; RunASM(); }
	void Fake_glColor3bv() { PA = opengl32.Original_glColor3bv; RunASM(); }
	void Fake_glColor3d() { PA = opengl32.Original_glColor3d; RunASM(); }
	void Fake_glColor3dv() { PA = opengl32.Original_glColor3dv; RunASM(); }
	void Fake_glColor3f() { PA = opengl32.Original_glColor3f; RunASM(); }
	void Fake_glColor3fv() { PA = opengl32.Original_glColor3fv; RunASM(); }
	void Fake_glColor3i() { PA = opengl32.Original_glColor3i; RunASM(); }
	void Fake_glColor3iv() { PA = opengl32.Original_glColor3iv; RunASM(); }
	void Fake_glColor3s() { PA = opengl32.Original_glColor3s; RunASM(); }
	void Fake_glColor3sv() { PA = opengl32.Original_glColor3sv; RunASM(); }
	void Fake_glColor3ub() { PA = opengl32.Original_glColor3ub; RunASM(); }
	void Fake_glColor3ubv() { PA = opengl32.Original_glColor3ubv; RunASM(); }
	void Fake_glColor3ui() { PA = opengl32.Original_glColor3ui; RunASM(); }
	void Fake_glColor3uiv() { PA = opengl32.Original_glColor3uiv; RunASM(); }
	void Fake_glColor3us() { PA = opengl32.Original_glColor3us; RunASM(); }
	void Fake_glColor3usv() { PA = opengl32.Original_glColor3usv; RunASM(); }
	void Fake_glColor4b() { PA = opengl32.Original_glColor4b; RunASM(); }
	void Fake_glColor4bv() { PA = opengl32.Original_glColor4bv; RunASM(); }
	void Fake_glColor4d() { PA = opengl32.Original_glColor4d; RunASM(); }
	void Fake_glColor4dv() { PA = opengl32.Original_glColor4dv; RunASM(); }
	void Fake_glColor4f() { PA = opengl32.Original_glColor4f; RunASM(); }
	void Fake_glColor4fv() { PA = opengl32.Original_glColor4fv; RunASM(); }
	void Fake_glColor4i() { PA = opengl32.Original_glColor4i; RunASM(); }
	void Fake_glColor4iv() { PA = opengl32.Original_glColor4iv; RunASM(); }
	void Fake_glColor4s() { PA = opengl32.Original_glColor4s; RunASM(); }
	void Fake_glColor4sv() { PA = opengl32.Original_glColor4sv; RunASM(); }
	void Fake_glColor4ub() { PA = opengl32.Original_glColor4ub; RunASM(); }
	void Fake_glColor4ubv() { PA = opengl32.Original_glColor4ubv; RunASM(); }
	void Fake_glColor4ui() { PA = opengl32.Original_glColor4ui; RunASM(); }
	void Fake_glColor4uiv() { PA = opengl32.Original_glColor4uiv; RunASM(); }
	void Fake_glColor4us() { PA = opengl32.Original_glColor4us; RunASM(); }
	void Fake_glColor4usv() { PA = opengl32.Original_glColor4usv; RunASM(); }
	void Fake_glColorMask() { PA = opengl32.Original_glColorMask; RunASM(); }
	void Fake_glColorMaterial() { PA = opengl32.Original_glColorMaterial; RunASM(); }
	void Fake_glColorPointer() { PA = opengl32.Original_glColorPointer; RunASM(); }
	void Fake_glCopyPixels() { PA = opengl32.Original_glCopyPixels; RunASM(); }
	void Fake_glCopyTexImage1D() { PA = opengl32.Original_glCopyTexImage1D; RunASM(); }
	void Fake_glCopyTexImage2D() { PA = opengl32.Original_glCopyTexImage2D; RunASM(); }
	void Fake_glCopyTexSubImage1D() { PA = opengl32.Original_glCopyTexSubImage1D; RunASM(); }
	void Fake_glCopyTexSubImage2D() { PA = opengl32.Original_glCopyTexSubImage2D; RunASM(); }
	void Fake_glCullFace() { PA = opengl32.Original_glCullFace; RunASM(); }
	void Fake_glDebugEntry() { PA = opengl32.Original_glDebugEntry; RunASM(); }
	void Fake_glDeleteLists() { PA = opengl32.Original_glDeleteLists; RunASM(); }
	void Fake_glDeleteTextures() { PA = opengl32.Original_glDeleteTextures; RunASM(); }
	void Fake_glDepthFunc() { PA = opengl32.Original_glDepthFunc; RunASM(); }
	void Fake_glDepthMask() { PA = opengl32.Original_glDepthMask; RunASM(); }
	void Fake_glDepthRange() { PA = opengl32.Original_glDepthRange; RunASM(); }
	void Fake_glDisable() { PA = opengl32.Original_glDisable; RunASM(); }
	void Fake_glDisableClientState() { PA = opengl32.Original_glDisableClientState; RunASM(); }
	void Fake_glDrawArrays() { PA = opengl32.Original_glDrawArrays; RunASM(); }
	void Fake_glDrawBuffer() { PA = opengl32.Original_glDrawBuffer; RunASM(); }
	void Fake_glDrawElements() { PA = opengl32.Original_glDrawElements; RunASM(); }
	void Fake_glDrawPixels() { PA = opengl32.Original_glDrawPixels; RunASM(); }
	void Fake_glEdgeFlag() { PA = opengl32.Original_glEdgeFlag; RunASM(); }
	void Fake_glEdgeFlagPointer() { PA = opengl32.Original_glEdgeFlagPointer; RunASM(); }
	void Fake_glEdgeFlagv() { PA = opengl32.Original_glEdgeFlagv; RunASM(); }
	void Fake_glEnable() { PA = opengl32.Original_glEnable; RunASM(); }
	void Fake_glEnableClientState() { PA = opengl32.Original_glEnableClientState; RunASM(); }
	void Fake_glEnd() { PA = opengl32.Original_glEnd; RunASM(); }
	void Fake_glEndList() { PA = opengl32.Original_glEndList; RunASM(); }
	void Fake_glEvalCoord1d() { PA = opengl32.Original_glEvalCoord1d; RunASM(); }
	void Fake_glEvalCoord1dv() { PA = opengl32.Original_glEvalCoord1dv; RunASM(); }
	void Fake_glEvalCoord1f() { PA = opengl32.Original_glEvalCoord1f; RunASM(); }
	void Fake_glEvalCoord1fv() { PA = opengl32.Original_glEvalCoord1fv; RunASM(); }
	void Fake_glEvalCoord2d() { PA = opengl32.Original_glEvalCoord2d; RunASM(); }
	void Fake_glEvalCoord2dv() { PA = opengl32.Original_glEvalCoord2dv; RunASM(); }
	void Fake_glEvalCoord2f() { PA = opengl32.Original_glEvalCoord2f; RunASM(); }
	void Fake_glEvalCoord2fv() { PA = opengl32.Original_glEvalCoord2fv; RunASM(); }
	void Fake_glEvalMesh1() { PA = opengl32.Original_glEvalMesh1; RunASM(); }
	void Fake_glEvalMesh2() { PA = opengl32.Original_glEvalMesh2; RunASM(); }
	void Fake_glEvalPoint1() { PA = opengl32.Original_glEvalPoint1; RunASM(); }
	void Fake_glEvalPoint2() { PA = opengl32.Original_glEvalPoint2; RunASM(); }
	void Fake_glFeedbackBuffer() { PA = opengl32.Original_glFeedbackBuffer; RunASM(); }
	void Fake_glFinish() { PA = opengl32.Original_glFinish; RunASM(); }
	void Fake_glFlush() { PA = opengl32.Original_glFlush; RunASM(); }
	void Fake_glFogf() { PA = opengl32.Original_glFogf; RunASM(); }
	void Fake_glFogfv() { PA = opengl32.Original_glFogfv; RunASM(); }
	void Fake_glFogi() { PA = opengl32.Original_glFogi; RunASM(); }
	void Fake_glFogiv() { PA = opengl32.Original_glFogiv; RunASM(); }
	void Fake_glFrontFace() { PA = opengl32.Original_glFrontFace; RunASM(); }
	void Fake_glFrustum() { PA = opengl32.Original_glFrustum; RunASM(); }
	void Fake_glGenLists() { PA = opengl32.Original_glGenLists; RunASM(); }
	void Fake_glGenTextures() { PA = opengl32.Original_glGenTextures; RunASM(); }
	void Fake_glGetBooleanv() { PA = opengl32.Original_glGetBooleanv; RunASM(); }
	void Fake_glGetClipPlane() { PA = opengl32.Original_glGetClipPlane; RunASM(); }
	void Fake_glGetDoublev() { PA = opengl32.Original_glGetDoublev; RunASM(); }
	void Fake_glGetError() { PA = opengl32.Original_glGetError; RunASM(); }
	void Fake_glGetFloatv() { PA = opengl32.Original_glGetFloatv; RunASM(); }
	void Fake_glGetIntegerv() { PA = opengl32.Original_glGetIntegerv; RunASM(); }
	void Fake_glGetLightfv() { PA = opengl32.Original_glGetLightfv; RunASM(); }
	void Fake_glGetLightiv() { PA = opengl32.Original_glGetLightiv; RunASM(); }
	void Fake_glGetMapdv() { PA = opengl32.Original_glGetMapdv; RunASM(); }
	void Fake_glGetMapfv() { PA = opengl32.Original_glGetMapfv; RunASM(); }
	void Fake_glGetMapiv() { PA = opengl32.Original_glGetMapiv; RunASM(); }
	void Fake_glGetMaterialfv() { PA = opengl32.Original_glGetMaterialfv; RunASM(); }
	void Fake_glGetMaterialiv() { PA = opengl32.Original_glGetMaterialiv; RunASM(); }
	void Fake_glGetPixelMapfv() { PA = opengl32.Original_glGetPixelMapfv; RunASM(); }
	void Fake_glGetPixelMapuiv() { PA = opengl32.Original_glGetPixelMapuiv; RunASM(); }
	void Fake_glGetPixelMapusv() { PA = opengl32.Original_glGetPixelMapusv; RunASM(); }
	void Fake_glGetPointerv() { PA = opengl32.Original_glGetPointerv; RunASM(); }
	void Fake_glGetPolygonStipple() { PA = opengl32.Original_glGetPolygonStipple; RunASM(); }
	void Fake_glGetString() { PA = opengl32.Original_glGetString; RunASM(); }
	void Fake_glGetTexEnvfv() { PA = opengl32.Original_glGetTexEnvfv; RunASM(); }
	void Fake_glGetTexEnviv() { PA = opengl32.Original_glGetTexEnviv; RunASM(); }
	void Fake_glGetTexGendv() { PA = opengl32.Original_glGetTexGendv; RunASM(); }
	void Fake_glGetTexGenfv() { PA = opengl32.Original_glGetTexGenfv; RunASM(); }
	void Fake_glGetTexGeniv() { PA = opengl32.Original_glGetTexGeniv; RunASM(); }
	void Fake_glGetTexImage() { PA = opengl32.Original_glGetTexImage; RunASM(); }
	void Fake_glGetTexLevelParameterfv() { PA = opengl32.Original_glGetTexLevelParameterfv; RunASM(); }
	void Fake_glGetTexLevelParameteriv() { PA = opengl32.Original_glGetTexLevelParameteriv; RunASM(); }
	void Fake_glGetTexParameterfv() { PA = opengl32.Original_glGetTexParameterfv; RunASM(); }
	void Fake_glGetTexParameteriv() { PA = opengl32.Original_glGetTexParameteriv; RunASM(); }
	void Fake_glHint() { PA = opengl32.Original_glHint; RunASM(); }
	void Fake_glIndexMask() { PA = opengl32.Original_glIndexMask; RunASM(); }
	void Fake_glIndexPointer() { PA = opengl32.Original_glIndexPointer; RunASM(); }
	void Fake_glIndexd() { PA = opengl32.Original_glIndexd; RunASM(); }
	void Fake_glIndexdv() { PA = opengl32.Original_glIndexdv; RunASM(); }
	void Fake_glIndexf() { PA = opengl32.Original_glIndexf; RunASM(); }
	void Fake_glIndexfv() { PA = opengl32.Original_glIndexfv; RunASM(); }
	void Fake_glIndexi() { PA = opengl32.Original_glIndexi; RunASM(); }
	void Fake_glIndexiv() { PA = opengl32.Original_glIndexiv; RunASM(); }
	void Fake_glIndexs() { PA = opengl32.Original_glIndexs; RunASM(); }
	void Fake_glIndexsv() { PA = opengl32.Original_glIndexsv; RunASM(); }
	void Fake_glIndexub() { PA = opengl32.Original_glIndexub; RunASM(); }
	void Fake_glIndexubv() { PA = opengl32.Original_glIndexubv; RunASM(); }
	void Fake_glInitNames() { PA = opengl32.Original_glInitNames; RunASM(); }
	void Fake_glInterleavedArrays() { PA = opengl32.Original_glInterleavedArrays; RunASM(); }
	void Fake_glIsEnabled() { PA = opengl32.Original_glIsEnabled; RunASM(); }
	void Fake_glIsList() { PA = opengl32.Original_glIsList; RunASM(); }
	void Fake_glIsTexture() { PA = opengl32.Original_glIsTexture; RunASM(); }
	void Fake_glLightModelf() { PA = opengl32.Original_glLightModelf; RunASM(); }
	void Fake_glLightModelfv() { PA = opengl32.Original_glLightModelfv; RunASM(); }
	void Fake_glLightModeli() { PA = opengl32.Original_glLightModeli; RunASM(); }
	void Fake_glLightModeliv() { PA = opengl32.Original_glLightModeliv; RunASM(); }
	void Fake_glLightf() { PA = opengl32.Original_glLightf; RunASM(); }
	void Fake_glLightfv() { PA = opengl32.Original_glLightfv; RunASM(); }
	void Fake_glLighti() { PA = opengl32.Original_glLighti; RunASM(); }
	void Fake_glLightiv() { PA = opengl32.Original_glLightiv; RunASM(); }
	void Fake_glLineStipple() { PA = opengl32.Original_glLineStipple; RunASM(); }
	void Fake_glLineWidth() { PA = opengl32.Original_glLineWidth; RunASM(); }
	void Fake_glListBase() { PA = opengl32.Original_glListBase; RunASM(); }
	void Fake_glLoadIdentity() { PA = opengl32.Original_glLoadIdentity; RunASM(); }
	void Fake_glLoadMatrixd() { PA = opengl32.Original_glLoadMatrixd; RunASM(); }
	void Fake_glLoadMatrixf() { PA = opengl32.Original_glLoadMatrixf; RunASM(); }
	void Fake_glLoadName() { PA = opengl32.Original_glLoadName; RunASM(); }
	void Fake_glLogicOp() { PA = opengl32.Original_glLogicOp; RunASM(); }
	void Fake_glMap1d() { PA = opengl32.Original_glMap1d; RunASM(); }
	void Fake_glMap1f() { PA = opengl32.Original_glMap1f; RunASM(); }
	void Fake_glMap2d() { PA = opengl32.Original_glMap2d; RunASM(); }
	void Fake_glMap2f() { PA = opengl32.Original_glMap2f; RunASM(); }
	void Fake_glMapGrid1d() { PA = opengl32.Original_glMapGrid1d; RunASM(); }
	void Fake_glMapGrid1f() { PA = opengl32.Original_glMapGrid1f; RunASM(); }
	void Fake_glMapGrid2d() { PA = opengl32.Original_glMapGrid2d; RunASM(); }
	void Fake_glMapGrid2f() { PA = opengl32.Original_glMapGrid2f; RunASM(); }
	void Fake_glMaterialf() { PA = opengl32.Original_glMaterialf; RunASM(); }
	void Fake_glMaterialfv() { PA = opengl32.Original_glMaterialfv; RunASM(); }
	void Fake_glMateriali() { PA = opengl32.Original_glMateriali; RunASM(); }
	void Fake_glMaterialiv() { PA = opengl32.Original_glMaterialiv; RunASM(); }
	void Fake_glMatrixMode() { PA = opengl32.Original_glMatrixMode; RunASM(); }
	void Fake_glMultMatrixd() { PA = opengl32.Original_glMultMatrixd; RunASM(); }
	void Fake_glMultMatrixf() { PA = opengl32.Original_glMultMatrixf; RunASM(); }
	void Fake_glNewList() { PA = opengl32.Original_glNewList; RunASM(); }
	void Fake_glNormal3b() { PA = opengl32.Original_glNormal3b; RunASM(); }
	void Fake_glNormal3bv() { PA = opengl32.Original_glNormal3bv; RunASM(); }
	void Fake_glNormal3d() { PA = opengl32.Original_glNormal3d; RunASM(); }
	void Fake_glNormal3dv() { PA = opengl32.Original_glNormal3dv; RunASM(); }
	void Fake_glNormal3f() { PA = opengl32.Original_glNormal3f; RunASM(); }
	void Fake_glNormal3fv() { PA = opengl32.Original_glNormal3fv; RunASM(); }
	void Fake_glNormal3i() { PA = opengl32.Original_glNormal3i; RunASM(); }
	void Fake_glNormal3iv() { PA = opengl32.Original_glNormal3iv; RunASM(); }
	void Fake_glNormal3s() { PA = opengl32.Original_glNormal3s; RunASM(); }
	void Fake_glNormal3sv() { PA = opengl32.Original_glNormal3sv; RunASM(); }
	void Fake_glNormalPointer() { PA = opengl32.Original_glNormalPointer; RunASM(); }
	void Fake_glOrtho() { PA = opengl32.Original_glOrtho; RunASM(); }
	void Fake_glPassThrough() { PA = opengl32.Original_glPassThrough; RunASM(); }
	void Fake_glPixelMapfv() { PA = opengl32.Original_glPixelMapfv; RunASM(); }
	void Fake_glPixelMapuiv() { PA = opengl32.Original_glPixelMapuiv; RunASM(); }
	void Fake_glPixelMapusv() { PA = opengl32.Original_glPixelMapusv; RunASM(); }
	void Fake_glPixelStoref() { PA = opengl32.Original_glPixelStoref; RunASM(); }
	void Fake_glPixelStorei() { PA = opengl32.Original_glPixelStorei; RunASM(); }
	void Fake_glPixelTransferf() { PA = opengl32.Original_glPixelTransferf; RunASM(); }
	void Fake_glPixelTransferi() { PA = opengl32.Original_glPixelTransferi; RunASM(); }
	void Fake_glPixelZoom() { PA = opengl32.Original_glPixelZoom; RunASM(); }
	void Fake_glPointSize() { PA = opengl32.Original_glPointSize; RunASM(); }
	void Fake_glPolygonMode() { PA = opengl32.Original_glPolygonMode; RunASM(); }
	void Fake_glPolygonOffset() { PA = opengl32.Original_glPolygonOffset; RunASM(); }
	void Fake_glPolygonStipple() { PA = opengl32.Original_glPolygonStipple; RunASM(); }
	void Fake_glPopAttrib() { PA = opengl32.Original_glPopAttrib; RunASM(); }
	void Fake_glPopClientAttrib() { PA = opengl32.Original_glPopClientAttrib; RunASM(); }
	void Fake_glPopMatrix() { PA = opengl32.Original_glPopMatrix; RunASM(); }
	void Fake_glPopName() { PA = opengl32.Original_glPopName; RunASM(); }
	void Fake_glPrioritizeTextures() { PA = opengl32.Original_glPrioritizeTextures; RunASM(); }
	void Fake_glPushAttrib() { PA = opengl32.Original_glPushAttrib; RunASM(); }
	void Fake_glPushClientAttrib() { PA = opengl32.Original_glPushClientAttrib; RunASM(); }
	void Fake_glPushMatrix() { PA = opengl32.Original_glPushMatrix; RunASM(); }
	void Fake_glPushName() { PA = opengl32.Original_glPushName; RunASM(); }
	void Fake_glRasterPos2d() { PA = opengl32.Original_glRasterPos2d; RunASM(); }
	void Fake_glRasterPos2dv() { PA = opengl32.Original_glRasterPos2dv; RunASM(); }
	void Fake_glRasterPos2f() { PA = opengl32.Original_glRasterPos2f; RunASM(); }
	void Fake_glRasterPos2fv() { PA = opengl32.Original_glRasterPos2fv; RunASM(); }
	void Fake_glRasterPos2i() { PA = opengl32.Original_glRasterPos2i; RunASM(); }
	void Fake_glRasterPos2iv() { PA = opengl32.Original_glRasterPos2iv; RunASM(); }
	void Fake_glRasterPos2s() { PA = opengl32.Original_glRasterPos2s; RunASM(); }
	void Fake_glRasterPos2sv() { PA = opengl32.Original_glRasterPos2sv; RunASM(); }
	void Fake_glRasterPos3d() { PA = opengl32.Original_glRasterPos3d; RunASM(); }
	void Fake_glRasterPos3dv() { PA = opengl32.Original_glRasterPos3dv; RunASM(); }
	void Fake_glRasterPos3f() { PA = opengl32.Original_glRasterPos3f; RunASM(); }
	void Fake_glRasterPos3fv() { PA = opengl32.Original_glRasterPos3fv; RunASM(); }
	void Fake_glRasterPos3i() { PA = opengl32.Original_glRasterPos3i; RunASM(); }
	void Fake_glRasterPos3iv() { PA = opengl32.Original_glRasterPos3iv; RunASM(); }
	void Fake_glRasterPos3s() { PA = opengl32.Original_glRasterPos3s; RunASM(); }
	void Fake_glRasterPos3sv() { PA = opengl32.Original_glRasterPos3sv; RunASM(); }
	void Fake_glRasterPos4d() { PA = opengl32.Original_glRasterPos4d; RunASM(); }
	void Fake_glRasterPos4dv() { PA = opengl32.Original_glRasterPos4dv; RunASM(); }
	void Fake_glRasterPos4f() { PA = opengl32.Original_glRasterPos4f; RunASM(); }
	void Fake_glRasterPos4fv() { PA = opengl32.Original_glRasterPos4fv; RunASM(); }
	void Fake_glRasterPos4i() { PA = opengl32.Original_glRasterPos4i; RunASM(); }
	void Fake_glRasterPos4iv() { PA = opengl32.Original_glRasterPos4iv; RunASM(); }
	void Fake_glRasterPos4s() { PA = opengl32.Original_glRasterPos4s; RunASM(); }
	void Fake_glRasterPos4sv() { PA = opengl32.Original_glRasterPos4sv; RunASM(); }
	void Fake_glReadBuffer() { PA = opengl32.Original_glReadBuffer; RunASM(); }
	void Fake_glReadPixels() { PA = opengl32.Original_glReadPixels; RunASM(); }
	void Fake_glRectd() { PA = opengl32.Original_glRectd; RunASM(); }
	void Fake_glRectdv() { PA = opengl32.Original_glRectdv; RunASM(); }
	void Fake_glRectf() { PA = opengl32.Original_glRectf; RunASM(); }
	void Fake_glRectfv() { PA = opengl32.Original_glRectfv; RunASM(); }
	void Fake_glRecti() { PA = opengl32.Original_glRecti; RunASM(); }
	void Fake_glRectiv() { PA = opengl32.Original_glRectiv; RunASM(); }
	void Fake_glRects() { PA = opengl32.Original_glRects; RunASM(); }
	void Fake_glRectsv() { PA = opengl32.Original_glRectsv; RunASM(); }
	void Fake_glRenderMode() { PA = opengl32.Original_glRenderMode; RunASM(); }
	void Fake_glRotated() { PA = opengl32.Original_glRotated; RunASM(); }
	void Fake_glRotatef() { PA = opengl32.Original_glRotatef; RunASM(); }
	void Fake_glScaled() { PA = opengl32.Original_glScaled; RunASM(); }
	void Fake_glScalef() { PA = opengl32.Original_glScalef; RunASM(); }
	void Fake_glScissor() { PA = opengl32.Original_glScissor; RunASM(); }
	void Fake_glSelectBuffer() { PA = opengl32.Original_glSelectBuffer; RunASM(); }
	void Fake_glShadeModel() { PA = opengl32.Original_glShadeModel; RunASM(); }
	void Fake_glStencilFunc() { PA = opengl32.Original_glStencilFunc; RunASM(); }
	void Fake_glStencilMask() { PA = opengl32.Original_glStencilMask; RunASM(); }
	void Fake_glStencilOp() { PA = opengl32.Original_glStencilOp; RunASM(); }
	void Fake_glTexCoord1d() { PA = opengl32.Original_glTexCoord1d; RunASM(); }
	void Fake_glTexCoord1dv() { PA = opengl32.Original_glTexCoord1dv; RunASM(); }
	void Fake_glTexCoord1f() { PA = opengl32.Original_glTexCoord1f; RunASM(); }
	void Fake_glTexCoord1fv() { PA = opengl32.Original_glTexCoord1fv; RunASM(); }
	void Fake_glTexCoord1i() { PA = opengl32.Original_glTexCoord1i; RunASM(); }
	void Fake_glTexCoord1iv() { PA = opengl32.Original_glTexCoord1iv; RunASM(); }
	void Fake_glTexCoord1s() { PA = opengl32.Original_glTexCoord1s; RunASM(); }
	void Fake_glTexCoord1sv() { PA = opengl32.Original_glTexCoord1sv; RunASM(); }
	void Fake_glTexCoord2d() { PA = opengl32.Original_glTexCoord2d; RunASM(); }
	void Fake_glTexCoord2dv() { PA = opengl32.Original_glTexCoord2dv; RunASM(); }
	void Fake_glTexCoord2f() { PA = opengl32.Original_glTexCoord2f; RunASM(); }
	void Fake_glTexCoord2fv() { PA = opengl32.Original_glTexCoord2fv; RunASM(); }
	void Fake_glTexCoord2i() { PA = opengl32.Original_glTexCoord2i; RunASM(); }
	void Fake_glTexCoord2iv() { PA = opengl32.Original_glTexCoord2iv; RunASM(); }
	void Fake_glTexCoord2s() { PA = opengl32.Original_glTexCoord2s; RunASM(); }
	void Fake_glTexCoord2sv() { PA = opengl32.Original_glTexCoord2sv; RunASM(); }
	void Fake_glTexCoord3d() { PA = opengl32.Original_glTexCoord3d; RunASM(); }
	void Fake_glTexCoord3dv() { PA = opengl32.Original_glTexCoord3dv; RunASM(); }
	void Fake_glTexCoord3f() { PA = opengl32.Original_glTexCoord3f; RunASM(); }
	void Fake_glTexCoord3fv() { PA = opengl32.Original_glTexCoord3fv; RunASM(); }
	void Fake_glTexCoord3i() { PA = opengl32.Original_glTexCoord3i; RunASM(); }
	void Fake_glTexCoord3iv() { PA = opengl32.Original_glTexCoord3iv; RunASM(); }
	void Fake_glTexCoord3s() { PA = opengl32.Original_glTexCoord3s; RunASM(); }
	void Fake_glTexCoord3sv() { PA = opengl32.Original_glTexCoord3sv; RunASM(); }
	void Fake_glTexCoord4d() { PA = opengl32.Original_glTexCoord4d; RunASM(); }
	void Fake_glTexCoord4dv() { PA = opengl32.Original_glTexCoord4dv; RunASM(); }
	void Fake_glTexCoord4f() { PA = opengl32.Original_glTexCoord4f; RunASM(); }
	void Fake_glTexCoord4fv() { PA = opengl32.Original_glTexCoord4fv; RunASM(); }
	void Fake_glTexCoord4i() { PA = opengl32.Original_glTexCoord4i; RunASM(); }
	void Fake_glTexCoord4iv() { PA = opengl32.Original_glTexCoord4iv; RunASM(); }
	void Fake_glTexCoord4s() { PA = opengl32.Original_glTexCoord4s; RunASM(); }
	void Fake_glTexCoord4sv() { PA = opengl32.Original_glTexCoord4sv; RunASM(); }
	void Fake_glTexCoordPointer() { PA = opengl32.Original_glTexCoordPointer; RunASM(); }
	void Fake_glTexEnvf() { PA = opengl32.Original_glTexEnvf; RunASM(); }
	void Fake_glTexEnvfv() { PA = opengl32.Original_glTexEnvfv; RunASM(); }
	void Fake_glTexEnvi() { PA = opengl32.Original_glTexEnvi; RunASM(); }
	void Fake_glTexEnviv() { PA = opengl32.Original_glTexEnviv; RunASM(); }
	void Fake_glTexGend() { PA = opengl32.Original_glTexGend; RunASM(); }
	void Fake_glTexGendv() { PA = opengl32.Original_glTexGendv; RunASM(); }
	void Fake_glTexGenf() { PA = opengl32.Original_glTexGenf; RunASM(); }
	void Fake_glTexGenfv() { PA = opengl32.Original_glTexGenfv; RunASM(); }
	void Fake_glTexGeni() { PA = opengl32.Original_glTexGeni; RunASM(); }
	void Fake_glTexGeniv() { PA = opengl32.Original_glTexGeniv; RunASM(); }
	void Fake_glTexImage1D() { PA = opengl32.Original_glTexImage1D; RunASM(); }
	void Fake_glTexImage2D() { PA = opengl32.Original_glTexImage2D; RunASM(); }
	void Fake_glTexParameterf() { PA = opengl32.Original_glTexParameterf; RunASM(); }
	void Fake_glTexParameterfv() { PA = opengl32.Original_glTexParameterfv; RunASM(); }
	void Fake_glTexParameteri() { PA = opengl32.Original_glTexParameteri; RunASM(); }
	void Fake_glTexParameteriv() { PA = opengl32.Original_glTexParameteriv; RunASM(); }
	void Fake_glTexSubImage1D() { PA = opengl32.Original_glTexSubImage1D; RunASM(); }
	void Fake_glTexSubImage2D() { PA = opengl32.Original_glTexSubImage2D; RunASM(); }
	void Fake_glTranslated() { PA = opengl32.Original_glTranslated; RunASM(); }
	void Fake_glTranslatef() { PA = opengl32.Original_glTranslatef; RunASM(); }
	void Fake_glVertex2d() { PA = opengl32.Original_glVertex2d; RunASM(); }
	void Fake_glVertex2dv() { PA = opengl32.Original_glVertex2dv; RunASM(); }
	void Fake_glVertex2f() { PA = opengl32.Original_glVertex2f; RunASM(); }
	void Fake_glVertex2fv() { PA = opengl32.Original_glVertex2fv; RunASM(); }
	void Fake_glVertex2i() { PA = opengl32.Original_glVertex2i; RunASM(); }
	void Fake_glVertex2iv() { PA = opengl32.Original_glVertex2iv; RunASM(); }
	void Fake_glVertex2s() { PA = opengl32.Original_glVertex2s; RunASM(); }
	void Fake_glVertex2sv() { PA = opengl32.Original_glVertex2sv; RunASM(); }
	void Fake_glVertex3d() { PA = opengl32.Original_glVertex3d; RunASM(); }
	void Fake_glVertex3dv() { PA = opengl32.Original_glVertex3dv; RunASM(); }
	void Fake_glVertex3f() { PA = opengl32.Original_glVertex3f; RunASM(); }
	void Fake_glVertex3fv() { PA = opengl32.Original_glVertex3fv; RunASM(); }
	void Fake_glVertex3i() { PA = opengl32.Original_glVertex3i; RunASM(); }
	void Fake_glVertex3iv() { PA = opengl32.Original_glVertex3iv; RunASM(); }
	void Fake_glVertex3s() { PA = opengl32.Original_glVertex3s; RunASM(); }
	void Fake_glVertex3sv() { PA = opengl32.Original_glVertex3sv; RunASM(); }
	void Fake_glVertex4d() { PA = opengl32.Original_glVertex4d; RunASM(); }
	void Fake_glVertex4dv() { PA = opengl32.Original_glVertex4dv; RunASM(); }
	void Fake_glVertex4f() { PA = opengl32.Original_glVertex4f; RunASM(); }
	void Fake_glVertex4fv() { PA = opengl32.Original_glVertex4fv; RunASM(); }
	void Fake_glVertex4i() { PA = opengl32.Original_glVertex4i; RunASM(); }
	void Fake_glVertex4iv() { PA = opengl32.Original_glVertex4iv; RunASM(); }
	void Fake_glVertex4s() { PA = opengl32.Original_glVertex4s; RunASM(); }
	void Fake_glVertex4sv() { PA = opengl32.Original_glVertex4sv; RunASM(); }
	void Fake_glVertexPointer() { PA = opengl32.Original_glVertexPointer; RunASM(); }
	void Fake_glViewport() { PA = opengl32.Original_glViewport; RunASM(); }
	void Fake_wglChoosePixelFormat() { PA = opengl32.Original_wglChoosePixelFormat; RunASM(); }
	void Fake_wglCopyContext() { PA = opengl32.Original_wglCopyContext; RunASM(); }
	void Fake_wglCreateContext() { PA = opengl32.Original_wglCreateContext; RunASM(); }
	void Fake_wglCreateLayerContext() { PA = opengl32.Original_wglCreateLayerContext; RunASM(); }
	void Fake_wglDeleteContext() { PA = opengl32.Original_wglDeleteContext; RunASM(); }
	void Fake_wglDescribeLayerPlane() { PA = opengl32.Original_wglDescribeLayerPlane; RunASM(); }
	void Fake_wglDescribePixelFormat() { PA = opengl32.Original_wglDescribePixelFormat; RunASM(); }
	void Fake_wglGetCurrentContext() { PA = opengl32.Original_wglGetCurrentContext; RunASM(); }
	void Fake_wglGetCurrentDC() { PA = opengl32.Original_wglGetCurrentDC; RunASM(); }
	void Fake_wglGetDefaultProcAddress() { PA = opengl32.Original_wglGetDefaultProcAddress; RunASM(); }
	void Fake_wglGetLayerPaletteEntries() { PA = opengl32.Original_wglGetLayerPaletteEntries; RunASM(); }
	void Fake_wglGetPixelFormat() { PA = opengl32.Original_wglGetPixelFormat; RunASM(); }
	void Fake_wglGetProcAddress() { PA = opengl32.Original_wglGetProcAddress; RunASM(); }
	void Fake_wglMakeCurrent() { PA = opengl32.Original_wglMakeCurrent; RunASM(); }
	void Fake_wglRealizeLayerPalette() { PA = opengl32.Original_wglRealizeLayerPalette; RunASM(); }
	void Fake_wglSetLayerPaletteEntries() { PA = opengl32.Original_wglSetLayerPaletteEntries; RunASM(); }
	void Fake_wglSetPixelFormat() { PA = opengl32.Original_wglSetPixelFormat; RunASM(); }
	void Fake_wglShareLists() { PA = opengl32.Original_wglShareLists; RunASM(); }
	void Fake_wglSwapBuffers() { PA = opengl32.Original_wglSwapBuffers; RunASM(); }
	void Fake_wglSwapLayerBuffers() { PA = opengl32.Original_wglSwapLayerBuffers; RunASM(); }
	void Fake_wglSwapMultipleBuffers() { PA = opengl32.Original_wglSwapMultipleBuffers; RunASM(); }
	void Fake_wglUseFontBitmapsA() { PA = opengl32.Original_wglUseFontBitmapsA; RunASM(); }
	void Fake_wglUseFontBitmapsW() { PA = opengl32.Original_wglUseFontBitmapsW; RunASM(); }
	void Fake_wglUseFontOutlinesA() { PA = opengl32.Original_wglUseFontOutlinesA; RunASM(); }
	void Fake_wglUseFontOutlinesW() { PA = opengl32.Original_wglUseFontOutlinesW; RunASM(); }
}

void setupFunctions() {
	opengl32.Original_GlmfBeginGlsBlock = GetProcAddress(opengl32.dll, "GlmfBeginGlsBlock");
	opengl32.Original_GlmfCloseMetaFile = GetProcAddress(opengl32.dll, "GlmfCloseMetaFile");
	opengl32.Original_GlmfEndGlsBlock = GetProcAddress(opengl32.dll, "GlmfEndGlsBlock");
	opengl32.Original_GlmfEndPlayback = GetProcAddress(opengl32.dll, "GlmfEndPlayback");
	opengl32.Original_GlmfInitPlayback = GetProcAddress(opengl32.dll, "GlmfInitPlayback");
	opengl32.Original_GlmfPlayGlsRecord = GetProcAddress(opengl32.dll, "GlmfPlayGlsRecord");
	opengl32.Original_glAccum = GetProcAddress(opengl32.dll, "glAccum");
	opengl32.Original_glAlphaFunc = GetProcAddress(opengl32.dll, "glAlphaFunc");
	opengl32.Original_glAreTexturesResident = GetProcAddress(opengl32.dll, "glAreTexturesResident");
	opengl32.Original_glArrayElement = GetProcAddress(opengl32.dll, "glArrayElement");
	opengl32.Original_glBegin = GetProcAddress(opengl32.dll, "glBegin");
	opengl32.Original_glBindTexture = GetProcAddress(opengl32.dll, "glBindTexture");
	opengl32.Original_glBitmap = GetProcAddress(opengl32.dll, "glBitmap");
	opengl32.Original_glBlendFunc = GetProcAddress(opengl32.dll, "glBlendFunc");
	opengl32.Original_glCallList = GetProcAddress(opengl32.dll, "glCallList");
	opengl32.Original_glCallLists = GetProcAddress(opengl32.dll, "glCallLists");
	opengl32.Original_glClear = GetProcAddress(opengl32.dll, "glClear");
	opengl32.Original_glClearAccum = GetProcAddress(opengl32.dll, "glClearAccum");
	opengl32.Original_glClearColor = GetProcAddress(opengl32.dll, "glClearColor");
	opengl32.Original_glClearDepth = GetProcAddress(opengl32.dll, "glClearDepth");
	opengl32.Original_glClearIndex = GetProcAddress(opengl32.dll, "glClearIndex");
	opengl32.Original_glClearStencil = GetProcAddress(opengl32.dll, "glClearStencil");
	opengl32.Original_glClipPlane = GetProcAddress(opengl32.dll, "glClipPlane");
	opengl32.Original_glColor3b = GetProcAddress(opengl32.dll, "glColor3b");
	opengl32.Original_glColor3bv = GetProcAddress(opengl32.dll, "glColor3bv");
	opengl32.Original_glColor3d = GetProcAddress(opengl32.dll, "glColor3d");
	opengl32.Original_glColor3dv = GetProcAddress(opengl32.dll, "glColor3dv");
	opengl32.Original_glColor3f = GetProcAddress(opengl32.dll, "glColor3f");
	opengl32.Original_glColor3fv = GetProcAddress(opengl32.dll, "glColor3fv");
	opengl32.Original_glColor3i = GetProcAddress(opengl32.dll, "glColor3i");
	opengl32.Original_glColor3iv = GetProcAddress(opengl32.dll, "glColor3iv");
	opengl32.Original_glColor3s = GetProcAddress(opengl32.dll, "glColor3s");
	opengl32.Original_glColor3sv = GetProcAddress(opengl32.dll, "glColor3sv");
	opengl32.Original_glColor3ub = GetProcAddress(opengl32.dll, "glColor3ub");
	opengl32.Original_glColor3ubv = GetProcAddress(opengl32.dll, "glColor3ubv");
	opengl32.Original_glColor3ui = GetProcAddress(opengl32.dll, "glColor3ui");
	opengl32.Original_glColor3uiv = GetProcAddress(opengl32.dll, "glColor3uiv");
	opengl32.Original_glColor3us = GetProcAddress(opengl32.dll, "glColor3us");
	opengl32.Original_glColor3usv = GetProcAddress(opengl32.dll, "glColor3usv");
	opengl32.Original_glColor4b = GetProcAddress(opengl32.dll, "glColor4b");
	opengl32.Original_glColor4bv = GetProcAddress(opengl32.dll, "glColor4bv");
	opengl32.Original_glColor4d = GetProcAddress(opengl32.dll, "glColor4d");
	opengl32.Original_glColor4dv = GetProcAddress(opengl32.dll, "glColor4dv");
	opengl32.Original_glColor4f = GetProcAddress(opengl32.dll, "glColor4f");
	opengl32.Original_glColor4fv = GetProcAddress(opengl32.dll, "glColor4fv");
	opengl32.Original_glColor4i = GetProcAddress(opengl32.dll, "glColor4i");
	opengl32.Original_glColor4iv = GetProcAddress(opengl32.dll, "glColor4iv");
	opengl32.Original_glColor4s = GetProcAddress(opengl32.dll, "glColor4s");
	opengl32.Original_glColor4sv = GetProcAddress(opengl32.dll, "glColor4sv");
	opengl32.Original_glColor4ub = GetProcAddress(opengl32.dll, "glColor4ub");
	opengl32.Original_glColor4ubv = GetProcAddress(opengl32.dll, "glColor4ubv");
	opengl32.Original_glColor4ui = GetProcAddress(opengl32.dll, "glColor4ui");
	opengl32.Original_glColor4uiv = GetProcAddress(opengl32.dll, "glColor4uiv");
	opengl32.Original_glColor4us = GetProcAddress(opengl32.dll, "glColor4us");
	opengl32.Original_glColor4usv = GetProcAddress(opengl32.dll, "glColor4usv");
	opengl32.Original_glColorMask = GetProcAddress(opengl32.dll, "glColorMask");
	opengl32.Original_glColorMaterial = GetProcAddress(opengl32.dll, "glColorMaterial");
	opengl32.Original_glColorPointer = GetProcAddress(opengl32.dll, "glColorPointer");
	opengl32.Original_glCopyPixels = GetProcAddress(opengl32.dll, "glCopyPixels");
	opengl32.Original_glCopyTexImage1D = GetProcAddress(opengl32.dll, "glCopyTexImage1D");
	opengl32.Original_glCopyTexImage2D = GetProcAddress(opengl32.dll, "glCopyTexImage2D");
	opengl32.Original_glCopyTexSubImage1D = GetProcAddress(opengl32.dll, "glCopyTexSubImage1D");
	opengl32.Original_glCopyTexSubImage2D = GetProcAddress(opengl32.dll, "glCopyTexSubImage2D");
	opengl32.Original_glCullFace = GetProcAddress(opengl32.dll, "glCullFace");
	opengl32.Original_glDebugEntry = GetProcAddress(opengl32.dll, "glDebugEntry");
	opengl32.Original_glDeleteLists = GetProcAddress(opengl32.dll, "glDeleteLists");
	opengl32.Original_glDeleteTextures = GetProcAddress(opengl32.dll, "glDeleteTextures");
	opengl32.Original_glDepthFunc = GetProcAddress(opengl32.dll, "glDepthFunc");
	opengl32.Original_glDepthMask = GetProcAddress(opengl32.dll, "glDepthMask");
	opengl32.Original_glDepthRange = GetProcAddress(opengl32.dll, "glDepthRange");
	opengl32.Original_glDisable = GetProcAddress(opengl32.dll, "glDisable");
	opengl32.Original_glDisableClientState = GetProcAddress(opengl32.dll, "glDisableClientState");
	opengl32.Original_glDrawArrays = GetProcAddress(opengl32.dll, "glDrawArrays");
	opengl32.Original_glDrawBuffer = GetProcAddress(opengl32.dll, "glDrawBuffer");
	opengl32.Original_glDrawElements = GetProcAddress(opengl32.dll, "glDrawElements");
	opengl32.Original_glDrawPixels = GetProcAddress(opengl32.dll, "glDrawPixels");
	opengl32.Original_glEdgeFlag = GetProcAddress(opengl32.dll, "glEdgeFlag");
	opengl32.Original_glEdgeFlagPointer = GetProcAddress(opengl32.dll, "glEdgeFlagPointer");
	opengl32.Original_glEdgeFlagv = GetProcAddress(opengl32.dll, "glEdgeFlagv");
	opengl32.Original_glEnable = GetProcAddress(opengl32.dll, "glEnable");
	opengl32.Original_glEnableClientState = GetProcAddress(opengl32.dll, "glEnableClientState");
	opengl32.Original_glEnd = GetProcAddress(opengl32.dll, "glEnd");
	opengl32.Original_glEndList = GetProcAddress(opengl32.dll, "glEndList");
	opengl32.Original_glEvalCoord1d = GetProcAddress(opengl32.dll, "glEvalCoord1d");
	opengl32.Original_glEvalCoord1dv = GetProcAddress(opengl32.dll, "glEvalCoord1dv");
	opengl32.Original_glEvalCoord1f = GetProcAddress(opengl32.dll, "glEvalCoord1f");
	opengl32.Original_glEvalCoord1fv = GetProcAddress(opengl32.dll, "glEvalCoord1fv");
	opengl32.Original_glEvalCoord2d = GetProcAddress(opengl32.dll, "glEvalCoord2d");
	opengl32.Original_glEvalCoord2dv = GetProcAddress(opengl32.dll, "glEvalCoord2dv");
	opengl32.Original_glEvalCoord2f = GetProcAddress(opengl32.dll, "glEvalCoord2f");
	opengl32.Original_glEvalCoord2fv = GetProcAddress(opengl32.dll, "glEvalCoord2fv");
	opengl32.Original_glEvalMesh1 = GetProcAddress(opengl32.dll, "glEvalMesh1");
	opengl32.Original_glEvalMesh2 = GetProcAddress(opengl32.dll, "glEvalMesh2");
	opengl32.Original_glEvalPoint1 = GetProcAddress(opengl32.dll, "glEvalPoint1");
	opengl32.Original_glEvalPoint2 = GetProcAddress(opengl32.dll, "glEvalPoint2");
	opengl32.Original_glFeedbackBuffer = GetProcAddress(opengl32.dll, "glFeedbackBuffer");
	opengl32.Original_glFinish = GetProcAddress(opengl32.dll, "glFinish");
	opengl32.Original_glFlush = GetProcAddress(opengl32.dll, "glFlush");
	opengl32.Original_glFogf = GetProcAddress(opengl32.dll, "glFogf");
	opengl32.Original_glFogfv = GetProcAddress(opengl32.dll, "glFogfv");
	opengl32.Original_glFogi = GetProcAddress(opengl32.dll, "glFogi");
	opengl32.Original_glFogiv = GetProcAddress(opengl32.dll, "glFogiv");
	opengl32.Original_glFrontFace = GetProcAddress(opengl32.dll, "glFrontFace");
	opengl32.Original_glFrustum = GetProcAddress(opengl32.dll, "glFrustum");
	opengl32.Original_glGenLists = GetProcAddress(opengl32.dll, "glGenLists");
	opengl32.Original_glGenTextures = GetProcAddress(opengl32.dll, "glGenTextures");
	opengl32.Original_glGetBooleanv = GetProcAddress(opengl32.dll, "glGetBooleanv");
	opengl32.Original_glGetClipPlane = GetProcAddress(opengl32.dll, "glGetClipPlane");
	opengl32.Original_glGetDoublev = GetProcAddress(opengl32.dll, "glGetDoublev");
	opengl32.Original_glGetError = GetProcAddress(opengl32.dll, "glGetError");
	opengl32.Original_glGetFloatv = GetProcAddress(opengl32.dll, "glGetFloatv");
	opengl32.Original_glGetIntegerv = GetProcAddress(opengl32.dll, "glGetIntegerv");
	opengl32.Original_glGetLightfv = GetProcAddress(opengl32.dll, "glGetLightfv");
	opengl32.Original_glGetLightiv = GetProcAddress(opengl32.dll, "glGetLightiv");
	opengl32.Original_glGetMapdv = GetProcAddress(opengl32.dll, "glGetMapdv");
	opengl32.Original_glGetMapfv = GetProcAddress(opengl32.dll, "glGetMapfv");
	opengl32.Original_glGetMapiv = GetProcAddress(opengl32.dll, "glGetMapiv");
	opengl32.Original_glGetMaterialfv = GetProcAddress(opengl32.dll, "glGetMaterialfv");
	opengl32.Original_glGetMaterialiv = GetProcAddress(opengl32.dll, "glGetMaterialiv");
	opengl32.Original_glGetPixelMapfv = GetProcAddress(opengl32.dll, "glGetPixelMapfv");
	opengl32.Original_glGetPixelMapuiv = GetProcAddress(opengl32.dll, "glGetPixelMapuiv");
	opengl32.Original_glGetPixelMapusv = GetProcAddress(opengl32.dll, "glGetPixelMapusv");
	opengl32.Original_glGetPointerv = GetProcAddress(opengl32.dll, "glGetPointerv");
	opengl32.Original_glGetPolygonStipple = GetProcAddress(opengl32.dll, "glGetPolygonStipple");
	opengl32.Original_glGetString = GetProcAddress(opengl32.dll, "glGetString");
	opengl32.Original_glGetTexEnvfv = GetProcAddress(opengl32.dll, "glGetTexEnvfv");
	opengl32.Original_glGetTexEnviv = GetProcAddress(opengl32.dll, "glGetTexEnviv");
	opengl32.Original_glGetTexGendv = GetProcAddress(opengl32.dll, "glGetTexGendv");
	opengl32.Original_glGetTexGenfv = GetProcAddress(opengl32.dll, "glGetTexGenfv");
	opengl32.Original_glGetTexGeniv = GetProcAddress(opengl32.dll, "glGetTexGeniv");
	opengl32.Original_glGetTexImage = GetProcAddress(opengl32.dll, "glGetTexImage");
	opengl32.Original_glGetTexLevelParameterfv = GetProcAddress(opengl32.dll, "glGetTexLevelParameterfv");
	opengl32.Original_glGetTexLevelParameteriv = GetProcAddress(opengl32.dll, "glGetTexLevelParameteriv");
	opengl32.Original_glGetTexParameterfv = GetProcAddress(opengl32.dll, "glGetTexParameterfv");
	opengl32.Original_glGetTexParameteriv = GetProcAddress(opengl32.dll, "glGetTexParameteriv");
	opengl32.Original_glHint = GetProcAddress(opengl32.dll, "glHint");
	opengl32.Original_glIndexMask = GetProcAddress(opengl32.dll, "glIndexMask");
	opengl32.Original_glIndexPointer = GetProcAddress(opengl32.dll, "glIndexPointer");
	opengl32.Original_glIndexd = GetProcAddress(opengl32.dll, "glIndexd");
	opengl32.Original_glIndexdv = GetProcAddress(opengl32.dll, "glIndexdv");
	opengl32.Original_glIndexf = GetProcAddress(opengl32.dll, "glIndexf");
	opengl32.Original_glIndexfv = GetProcAddress(opengl32.dll, "glIndexfv");
	opengl32.Original_glIndexi = GetProcAddress(opengl32.dll, "glIndexi");
	opengl32.Original_glIndexiv = GetProcAddress(opengl32.dll, "glIndexiv");
	opengl32.Original_glIndexs = GetProcAddress(opengl32.dll, "glIndexs");
	opengl32.Original_glIndexsv = GetProcAddress(opengl32.dll, "glIndexsv");
	opengl32.Original_glIndexub = GetProcAddress(opengl32.dll, "glIndexub");
	opengl32.Original_glIndexubv = GetProcAddress(opengl32.dll, "glIndexubv");
	opengl32.Original_glInitNames = GetProcAddress(opengl32.dll, "glInitNames");
	opengl32.Original_glInterleavedArrays = GetProcAddress(opengl32.dll, "glInterleavedArrays");
	opengl32.Original_glIsEnabled = GetProcAddress(opengl32.dll, "glIsEnabled");
	opengl32.Original_glIsList = GetProcAddress(opengl32.dll, "glIsList");
	opengl32.Original_glIsTexture = GetProcAddress(opengl32.dll, "glIsTexture");
	opengl32.Original_glLightModelf = GetProcAddress(opengl32.dll, "glLightModelf");
	opengl32.Original_glLightModelfv = GetProcAddress(opengl32.dll, "glLightModelfv");
	opengl32.Original_glLightModeli = GetProcAddress(opengl32.dll, "glLightModeli");
	opengl32.Original_glLightModeliv = GetProcAddress(opengl32.dll, "glLightModeliv");
	opengl32.Original_glLightf = GetProcAddress(opengl32.dll, "glLightf");
	opengl32.Original_glLightfv = GetProcAddress(opengl32.dll, "glLightfv");
	opengl32.Original_glLighti = GetProcAddress(opengl32.dll, "glLighti");
	opengl32.Original_glLightiv = GetProcAddress(opengl32.dll, "glLightiv");
	opengl32.Original_glLineStipple = GetProcAddress(opengl32.dll, "glLineStipple");
	opengl32.Original_glLineWidth = GetProcAddress(opengl32.dll, "glLineWidth");
	opengl32.Original_glListBase = GetProcAddress(opengl32.dll, "glListBase");
	opengl32.Original_glLoadIdentity = GetProcAddress(opengl32.dll, "glLoadIdentity");
	opengl32.Original_glLoadMatrixd = GetProcAddress(opengl32.dll, "glLoadMatrixd");
	opengl32.Original_glLoadMatrixf = GetProcAddress(opengl32.dll, "glLoadMatrixf");
	opengl32.Original_glLoadName = GetProcAddress(opengl32.dll, "glLoadName");
	opengl32.Original_glLogicOp = GetProcAddress(opengl32.dll, "glLogicOp");
	opengl32.Original_glMap1d = GetProcAddress(opengl32.dll, "glMap1d");
	opengl32.Original_glMap1f = GetProcAddress(opengl32.dll, "glMap1f");
	opengl32.Original_glMap2d = GetProcAddress(opengl32.dll, "glMap2d");
	opengl32.Original_glMap2f = GetProcAddress(opengl32.dll, "glMap2f");
	opengl32.Original_glMapGrid1d = GetProcAddress(opengl32.dll, "glMapGrid1d");
	opengl32.Original_glMapGrid1f = GetProcAddress(opengl32.dll, "glMapGrid1f");
	opengl32.Original_glMapGrid2d = GetProcAddress(opengl32.dll, "glMapGrid2d");
	opengl32.Original_glMapGrid2f = GetProcAddress(opengl32.dll, "glMapGrid2f");
	opengl32.Original_glMaterialf = GetProcAddress(opengl32.dll, "glMaterialf");
	opengl32.Original_glMaterialfv = GetProcAddress(opengl32.dll, "glMaterialfv");
	opengl32.Original_glMateriali = GetProcAddress(opengl32.dll, "glMateriali");
	opengl32.Original_glMaterialiv = GetProcAddress(opengl32.dll, "glMaterialiv");
	opengl32.Original_glMatrixMode = GetProcAddress(opengl32.dll, "glMatrixMode");
	opengl32.Original_glMultMatrixd = GetProcAddress(opengl32.dll, "glMultMatrixd");
	opengl32.Original_glMultMatrixf = GetProcAddress(opengl32.dll, "glMultMatrixf");
	opengl32.Original_glNewList = GetProcAddress(opengl32.dll, "glNewList");
	opengl32.Original_glNormal3b = GetProcAddress(opengl32.dll, "glNormal3b");
	opengl32.Original_glNormal3bv = GetProcAddress(opengl32.dll, "glNormal3bv");
	opengl32.Original_glNormal3d = GetProcAddress(opengl32.dll, "glNormal3d");
	opengl32.Original_glNormal3dv = GetProcAddress(opengl32.dll, "glNormal3dv");
	opengl32.Original_glNormal3f = GetProcAddress(opengl32.dll, "glNormal3f");
	opengl32.Original_glNormal3fv = GetProcAddress(opengl32.dll, "glNormal3fv");
	opengl32.Original_glNormal3i = GetProcAddress(opengl32.dll, "glNormal3i");
	opengl32.Original_glNormal3iv = GetProcAddress(opengl32.dll, "glNormal3iv");
	opengl32.Original_glNormal3s = GetProcAddress(opengl32.dll, "glNormal3s");
	opengl32.Original_glNormal3sv = GetProcAddress(opengl32.dll, "glNormal3sv");
	opengl32.Original_glNormalPointer = GetProcAddress(opengl32.dll, "glNormalPointer");
	opengl32.Original_glOrtho = GetProcAddress(opengl32.dll, "glOrtho");
	opengl32.Original_glPassThrough = GetProcAddress(opengl32.dll, "glPassThrough");
	opengl32.Original_glPixelMapfv = GetProcAddress(opengl32.dll, "glPixelMapfv");
	opengl32.Original_glPixelMapuiv = GetProcAddress(opengl32.dll, "glPixelMapuiv");
	opengl32.Original_glPixelMapusv = GetProcAddress(opengl32.dll, "glPixelMapusv");
	opengl32.Original_glPixelStoref = GetProcAddress(opengl32.dll, "glPixelStoref");
	opengl32.Original_glPixelStorei = GetProcAddress(opengl32.dll, "glPixelStorei");
	opengl32.Original_glPixelTransferf = GetProcAddress(opengl32.dll, "glPixelTransferf");
	opengl32.Original_glPixelTransferi = GetProcAddress(opengl32.dll, "glPixelTransferi");
	opengl32.Original_glPixelZoom = GetProcAddress(opengl32.dll, "glPixelZoom");
	opengl32.Original_glPointSize = GetProcAddress(opengl32.dll, "glPointSize");
	opengl32.Original_glPolygonMode = GetProcAddress(opengl32.dll, "glPolygonMode");
	opengl32.Original_glPolygonOffset = GetProcAddress(opengl32.dll, "glPolygonOffset");
	opengl32.Original_glPolygonStipple = GetProcAddress(opengl32.dll, "glPolygonStipple");
	opengl32.Original_glPopAttrib = GetProcAddress(opengl32.dll, "glPopAttrib");
	opengl32.Original_glPopClientAttrib = GetProcAddress(opengl32.dll, "glPopClientAttrib");
	opengl32.Original_glPopMatrix = GetProcAddress(opengl32.dll, "glPopMatrix");
	opengl32.Original_glPopName = GetProcAddress(opengl32.dll, "glPopName");
	opengl32.Original_glPrioritizeTextures = GetProcAddress(opengl32.dll, "glPrioritizeTextures");
	opengl32.Original_glPushAttrib = GetProcAddress(opengl32.dll, "glPushAttrib");
	opengl32.Original_glPushClientAttrib = GetProcAddress(opengl32.dll, "glPushClientAttrib");
	opengl32.Original_glPushMatrix = GetProcAddress(opengl32.dll, "glPushMatrix");
	opengl32.Original_glPushName = GetProcAddress(opengl32.dll, "glPushName");
	opengl32.Original_glRasterPos2d = GetProcAddress(opengl32.dll, "glRasterPos2d");
	opengl32.Original_glRasterPos2dv = GetProcAddress(opengl32.dll, "glRasterPos2dv");
	opengl32.Original_glRasterPos2f = GetProcAddress(opengl32.dll, "glRasterPos2f");
	opengl32.Original_glRasterPos2fv = GetProcAddress(opengl32.dll, "glRasterPos2fv");
	opengl32.Original_glRasterPos2i = GetProcAddress(opengl32.dll, "glRasterPos2i");
	opengl32.Original_glRasterPos2iv = GetProcAddress(opengl32.dll, "glRasterPos2iv");
	opengl32.Original_glRasterPos2s = GetProcAddress(opengl32.dll, "glRasterPos2s");
	opengl32.Original_glRasterPos2sv = GetProcAddress(opengl32.dll, "glRasterPos2sv");
	opengl32.Original_glRasterPos3d = GetProcAddress(opengl32.dll, "glRasterPos3d");
	opengl32.Original_glRasterPos3dv = GetProcAddress(opengl32.dll, "glRasterPos3dv");
	opengl32.Original_glRasterPos3f = GetProcAddress(opengl32.dll, "glRasterPos3f");
	opengl32.Original_glRasterPos3fv = GetProcAddress(opengl32.dll, "glRasterPos3fv");
	opengl32.Original_glRasterPos3i = GetProcAddress(opengl32.dll, "glRasterPos3i");
	opengl32.Original_glRasterPos3iv = GetProcAddress(opengl32.dll, "glRasterPos3iv");
	opengl32.Original_glRasterPos3s = GetProcAddress(opengl32.dll, "glRasterPos3s");
	opengl32.Original_glRasterPos3sv = GetProcAddress(opengl32.dll, "glRasterPos3sv");
	opengl32.Original_glRasterPos4d = GetProcAddress(opengl32.dll, "glRasterPos4d");
	opengl32.Original_glRasterPos4dv = GetProcAddress(opengl32.dll, "glRasterPos4dv");
	opengl32.Original_glRasterPos4f = GetProcAddress(opengl32.dll, "glRasterPos4f");
	opengl32.Original_glRasterPos4fv = GetProcAddress(opengl32.dll, "glRasterPos4fv");
	opengl32.Original_glRasterPos4i = GetProcAddress(opengl32.dll, "glRasterPos4i");
	opengl32.Original_glRasterPos4iv = GetProcAddress(opengl32.dll, "glRasterPos4iv");
	opengl32.Original_glRasterPos4s = GetProcAddress(opengl32.dll, "glRasterPos4s");
	opengl32.Original_glRasterPos4sv = GetProcAddress(opengl32.dll, "glRasterPos4sv");
	opengl32.Original_glReadBuffer = GetProcAddress(opengl32.dll, "glReadBuffer");
	opengl32.Original_glReadPixels = GetProcAddress(opengl32.dll, "glReadPixels");
	opengl32.Original_glRectd = GetProcAddress(opengl32.dll, "glRectd");
	opengl32.Original_glRectdv = GetProcAddress(opengl32.dll, "glRectdv");
	opengl32.Original_glRectf = GetProcAddress(opengl32.dll, "glRectf");
	opengl32.Original_glRectfv = GetProcAddress(opengl32.dll, "glRectfv");
	opengl32.Original_glRecti = GetProcAddress(opengl32.dll, "glRecti");
	opengl32.Original_glRectiv = GetProcAddress(opengl32.dll, "glRectiv");
	opengl32.Original_glRects = GetProcAddress(opengl32.dll, "glRects");
	opengl32.Original_glRectsv = GetProcAddress(opengl32.dll, "glRectsv");
	opengl32.Original_glRenderMode = GetProcAddress(opengl32.dll, "glRenderMode");
	opengl32.Original_glRotated = GetProcAddress(opengl32.dll, "glRotated");
	opengl32.Original_glRotatef = GetProcAddress(opengl32.dll, "glRotatef");
	opengl32.Original_glScaled = GetProcAddress(opengl32.dll, "glScaled");
	opengl32.Original_glScalef = GetProcAddress(opengl32.dll, "glScalef");
	opengl32.Original_glScissor = GetProcAddress(opengl32.dll, "glScissor");
	opengl32.Original_glSelectBuffer = GetProcAddress(opengl32.dll, "glSelectBuffer");
	opengl32.Original_glShadeModel = GetProcAddress(opengl32.dll, "glShadeModel");
	opengl32.Original_glStencilFunc = GetProcAddress(opengl32.dll, "glStencilFunc");
	opengl32.Original_glStencilMask = GetProcAddress(opengl32.dll, "glStencilMask");
	opengl32.Original_glStencilOp = GetProcAddress(opengl32.dll, "glStencilOp");
	opengl32.Original_glTexCoord1d = GetProcAddress(opengl32.dll, "glTexCoord1d");
	opengl32.Original_glTexCoord1dv = GetProcAddress(opengl32.dll, "glTexCoord1dv");
	opengl32.Original_glTexCoord1f = GetProcAddress(opengl32.dll, "glTexCoord1f");
	opengl32.Original_glTexCoord1fv = GetProcAddress(opengl32.dll, "glTexCoord1fv");
	opengl32.Original_glTexCoord1i = GetProcAddress(opengl32.dll, "glTexCoord1i");
	opengl32.Original_glTexCoord1iv = GetProcAddress(opengl32.dll, "glTexCoord1iv");
	opengl32.Original_glTexCoord1s = GetProcAddress(opengl32.dll, "glTexCoord1s");
	opengl32.Original_glTexCoord1sv = GetProcAddress(opengl32.dll, "glTexCoord1sv");
	opengl32.Original_glTexCoord2d = GetProcAddress(opengl32.dll, "glTexCoord2d");
	opengl32.Original_glTexCoord2dv = GetProcAddress(opengl32.dll, "glTexCoord2dv");
	opengl32.Original_glTexCoord2f = GetProcAddress(opengl32.dll, "glTexCoord2f");
	opengl32.Original_glTexCoord2fv = GetProcAddress(opengl32.dll, "glTexCoord2fv");
	opengl32.Original_glTexCoord2i = GetProcAddress(opengl32.dll, "glTexCoord2i");
	opengl32.Original_glTexCoord2iv = GetProcAddress(opengl32.dll, "glTexCoord2iv");
	opengl32.Original_glTexCoord2s = GetProcAddress(opengl32.dll, "glTexCoord2s");
	opengl32.Original_glTexCoord2sv = GetProcAddress(opengl32.dll, "glTexCoord2sv");
	opengl32.Original_glTexCoord3d = GetProcAddress(opengl32.dll, "glTexCoord3d");
	opengl32.Original_glTexCoord3dv = GetProcAddress(opengl32.dll, "glTexCoord3dv");
	opengl32.Original_glTexCoord3f = GetProcAddress(opengl32.dll, "glTexCoord3f");
	opengl32.Original_glTexCoord3fv = GetProcAddress(opengl32.dll, "glTexCoord3fv");
	opengl32.Original_glTexCoord3i = GetProcAddress(opengl32.dll, "glTexCoord3i");
	opengl32.Original_glTexCoord3iv = GetProcAddress(opengl32.dll, "glTexCoord3iv");
	opengl32.Original_glTexCoord3s = GetProcAddress(opengl32.dll, "glTexCoord3s");
	opengl32.Original_glTexCoord3sv = GetProcAddress(opengl32.dll, "glTexCoord3sv");
	opengl32.Original_glTexCoord4d = GetProcAddress(opengl32.dll, "glTexCoord4d");
	opengl32.Original_glTexCoord4dv = GetProcAddress(opengl32.dll, "glTexCoord4dv");
	opengl32.Original_glTexCoord4f = GetProcAddress(opengl32.dll, "glTexCoord4f");
	opengl32.Original_glTexCoord4fv = GetProcAddress(opengl32.dll, "glTexCoord4fv");
	opengl32.Original_glTexCoord4i = GetProcAddress(opengl32.dll, "glTexCoord4i");
	opengl32.Original_glTexCoord4iv = GetProcAddress(opengl32.dll, "glTexCoord4iv");
	opengl32.Original_glTexCoord4s = GetProcAddress(opengl32.dll, "glTexCoord4s");
	opengl32.Original_glTexCoord4sv = GetProcAddress(opengl32.dll, "glTexCoord4sv");
	opengl32.Original_glTexCoordPointer = GetProcAddress(opengl32.dll, "glTexCoordPointer");
	opengl32.Original_glTexEnvf = GetProcAddress(opengl32.dll, "glTexEnvf");
	opengl32.Original_glTexEnvfv = GetProcAddress(opengl32.dll, "glTexEnvfv");
	opengl32.Original_glTexEnvi = GetProcAddress(opengl32.dll, "glTexEnvi");
	opengl32.Original_glTexEnviv = GetProcAddress(opengl32.dll, "glTexEnviv");
	opengl32.Original_glTexGend = GetProcAddress(opengl32.dll, "glTexGend");
	opengl32.Original_glTexGendv = GetProcAddress(opengl32.dll, "glTexGendv");
	opengl32.Original_glTexGenf = GetProcAddress(opengl32.dll, "glTexGenf");
	opengl32.Original_glTexGenfv = GetProcAddress(opengl32.dll, "glTexGenfv");
	opengl32.Original_glTexGeni = GetProcAddress(opengl32.dll, "glTexGeni");
	opengl32.Original_glTexGeniv = GetProcAddress(opengl32.dll, "glTexGeniv");
	opengl32.Original_glTexImage1D = GetProcAddress(opengl32.dll, "glTexImage1D");
	opengl32.Original_glTexImage2D = GetProcAddress(opengl32.dll, "glTexImage2D");
	opengl32.Original_glTexParameterf = GetProcAddress(opengl32.dll, "glTexParameterf");
	opengl32.Original_glTexParameterfv = GetProcAddress(opengl32.dll, "glTexParameterfv");
	opengl32.Original_glTexParameteri = GetProcAddress(opengl32.dll, "glTexParameteri");
	opengl32.Original_glTexParameteriv = GetProcAddress(opengl32.dll, "glTexParameteriv");
	opengl32.Original_glTexSubImage1D = GetProcAddress(opengl32.dll, "glTexSubImage1D");
	opengl32.Original_glTexSubImage2D = GetProcAddress(opengl32.dll, "glTexSubImage2D");
	opengl32.Original_glTranslated = GetProcAddress(opengl32.dll, "glTranslated");
	opengl32.Original_glTranslatef = GetProcAddress(opengl32.dll, "glTranslatef");
	opengl32.Original_glVertex2d = GetProcAddress(opengl32.dll, "glVertex2d");
	opengl32.Original_glVertex2dv = GetProcAddress(opengl32.dll, "glVertex2dv");
	opengl32.Original_glVertex2f = GetProcAddress(opengl32.dll, "glVertex2f");
	opengl32.Original_glVertex2fv = GetProcAddress(opengl32.dll, "glVertex2fv");
	opengl32.Original_glVertex2i = GetProcAddress(opengl32.dll, "glVertex2i");
	opengl32.Original_glVertex2iv = GetProcAddress(opengl32.dll, "glVertex2iv");
	opengl32.Original_glVertex2s = GetProcAddress(opengl32.dll, "glVertex2s");
	opengl32.Original_glVertex2sv = GetProcAddress(opengl32.dll, "glVertex2sv");
	opengl32.Original_glVertex3d = GetProcAddress(opengl32.dll, "glVertex3d");
	opengl32.Original_glVertex3dv = GetProcAddress(opengl32.dll, "glVertex3dv");
	opengl32.Original_glVertex3f = GetProcAddress(opengl32.dll, "glVertex3f");
	opengl32.Original_glVertex3fv = GetProcAddress(opengl32.dll, "glVertex3fv");
	opengl32.Original_glVertex3i = GetProcAddress(opengl32.dll, "glVertex3i");
	opengl32.Original_glVertex3iv = GetProcAddress(opengl32.dll, "glVertex3iv");
	opengl32.Original_glVertex3s = GetProcAddress(opengl32.dll, "glVertex3s");
	opengl32.Original_glVertex3sv = GetProcAddress(opengl32.dll, "glVertex3sv");
	opengl32.Original_glVertex4d = GetProcAddress(opengl32.dll, "glVertex4d");
	opengl32.Original_glVertex4dv = GetProcAddress(opengl32.dll, "glVertex4dv");
	opengl32.Original_glVertex4f = GetProcAddress(opengl32.dll, "glVertex4f");
	opengl32.Original_glVertex4fv = GetProcAddress(opengl32.dll, "glVertex4fv");
	opengl32.Original_glVertex4i = GetProcAddress(opengl32.dll, "glVertex4i");
	opengl32.Original_glVertex4iv = GetProcAddress(opengl32.dll, "glVertex4iv");
	opengl32.Original_glVertex4s = GetProcAddress(opengl32.dll, "glVertex4s");
	opengl32.Original_glVertex4sv = GetProcAddress(opengl32.dll, "glVertex4sv");
	opengl32.Original_glVertexPointer = GetProcAddress(opengl32.dll, "glVertexPointer");
	opengl32.Original_glViewport = GetProcAddress(opengl32.dll, "glViewport");
	opengl32.Original_wglChoosePixelFormat = GetProcAddress(opengl32.dll, "wglChoosePixelFormat");
	opengl32.Original_wglCopyContext = GetProcAddress(opengl32.dll, "wglCopyContext");
	opengl32.Original_wglCreateContext = GetProcAddress(opengl32.dll, "wglCreateContext");
	opengl32.Original_wglCreateLayerContext = GetProcAddress(opengl32.dll, "wglCreateLayerContext");
	opengl32.Original_wglDeleteContext = GetProcAddress(opengl32.dll, "wglDeleteContext");
	opengl32.Original_wglDescribeLayerPlane = GetProcAddress(opengl32.dll, "wglDescribeLayerPlane");
	opengl32.Original_wglDescribePixelFormat = GetProcAddress(opengl32.dll, "wglDescribePixelFormat");
	opengl32.Original_wglGetCurrentContext = GetProcAddress(opengl32.dll, "wglGetCurrentContext");
	opengl32.Original_wglGetCurrentDC = GetProcAddress(opengl32.dll, "wglGetCurrentDC");
	opengl32.Original_wglGetDefaultProcAddress = GetProcAddress(opengl32.dll, "wglGetDefaultProcAddress");
	opengl32.Original_wglGetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglGetLayerPaletteEntries");
	opengl32.Original_wglGetPixelFormat = GetProcAddress(opengl32.dll, "wglGetPixelFormat");
	opengl32.Original_wglGetProcAddress = GetProcAddress(opengl32.dll, "wglGetProcAddress");
	opengl32.Original_wglMakeCurrent = GetProcAddress(opengl32.dll, "wglMakeCurrent");
	opengl32.Original_wglRealizeLayerPalette = GetProcAddress(opengl32.dll, "wglRealizeLayerPalette");
	opengl32.Original_wglSetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglSetLayerPaletteEntries");
	opengl32.Original_wglSetPixelFormat = GetProcAddress(opengl32.dll, "wglSetPixelFormat");
	opengl32.Original_wglShareLists = GetProcAddress(opengl32.dll, "wglShareLists");
	opengl32.Original_wglSwapBuffers = GetProcAddress(opengl32.dll, "wglSwapBuffers");
	opengl32.Original_wglSwapLayerBuffers = GetProcAddress(opengl32.dll, "wglSwapLayerBuffers");
	opengl32.Original_wglSwapMultipleBuffers = GetProcAddress(opengl32.dll, "wglSwapMultipleBuffers");
	opengl32.Original_wglUseFontBitmapsA = GetProcAddress(opengl32.dll, "wglUseFontBitmapsA");
	opengl32.Original_wglUseFontBitmapsW = GetProcAddress(opengl32.dll, "wglUseFontBitmapsW");
	opengl32.Original_wglUseFontOutlinesA = GetProcAddress(opengl32.dll, "wglUseFontOutlinesA");
	opengl32.Original_wglUseFontOutlinesW = GetProcAddress(opengl32.dll, "wglUseFontOutlinesW");
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
	FreeLibrary(opengl32.dll);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH: {
		DisableThreadLibraryCalls(hModule);

		char path[MAX_PATH];
		GetSystemDirectoryA(path, sizeof(path));

		strcat_s(path, "\\opengl32.dll");

		opengl32.dll = LoadLibrary(path);
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