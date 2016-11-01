#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1/FingerEventHandler<FingerEvent>
struct FingerEventHandler_t80;
// System.Object
struct Object_t;
// FingerEvent
struct FingerEvent_t10;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void FingerEventDetector`1/FingerEventHandler<FingerEvent>::.ctor(System.Object,System.IntPtr)
// FingerEventDetector`1/FingerEventHandler<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_FingerEventDetector_1_FingerEv_5MethodDeclarations.h"
#define FingerEventHandler__ctor_m59347(__this, ___object, ___method, method) (void)FingerEventHandler__ctor_m58743_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void FingerEventDetector`1/FingerEventHandler<FingerEvent>::Invoke(T)
#define FingerEventHandler_Invoke_m4252(__this, ___eventData, method) (void)FingerEventHandler_Invoke_m58744_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___eventData, method)
// System.IAsyncResult FingerEventDetector`1/FingerEventHandler<FingerEvent>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define FingerEventHandler_BeginInvoke_m59348(__this, ___eventData, ___callback, ___object, method) (Object_t *)FingerEventHandler_BeginInvoke_m58746_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___eventData, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void FingerEventDetector`1/FingerEventHandler<FingerEvent>::EndInvoke(System.IAsyncResult)
#define FingerEventHandler_EndInvoke_m59349(__this, ___result, method) (void)FingerEventHandler_EndInvoke_m58748_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___result, method)
