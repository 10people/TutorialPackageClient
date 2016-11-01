#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TBPan/PanEventHandler
struct PanEventHandler_t127;
// System.Object
struct Object_t;
// TBPan
struct TBPan_t126;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TBPan/PanEventHandler::.ctor(System.Object,System.IntPtr)
 void PanEventHandler__ctor_m388 (PanEventHandler_t127 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan/PanEventHandler::Invoke(TBPan,UnityEngine.Vector3)
 void PanEventHandler_Invoke_m389 (PanEventHandler_t127 * __this, TBPan_t126 * ___source, Vector3_t121  ___move, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TBPan/PanEventHandler::BeginInvoke(TBPan,UnityEngine.Vector3,System.AsyncCallback,System.Object)
 Object_t * PanEventHandler_BeginInvoke_m390 (PanEventHandler_t127 * __this, TBPan_t126 * ___source, Vector3_t121  ___move, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBPan/PanEventHandler::EndInvoke(System.IAsyncResult)
 void PanEventHandler_EndInvoke_m391 (PanEventHandler_t127 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
