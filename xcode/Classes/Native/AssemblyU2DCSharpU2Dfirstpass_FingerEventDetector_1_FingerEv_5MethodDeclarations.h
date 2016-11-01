#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1/FingerEventHandler<System.Object>
struct FingerEventHandler_t8709;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::.ctor(System.Object,System.IntPtr)
 void FingerEventHandler__ctor_m58743_gshared (FingerEventHandler_t8709 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define FingerEventHandler__ctor_m58743(__this, ___object, ___method, method) (void)FingerEventHandler__ctor_m58743_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::Invoke(T)
 void FingerEventHandler_Invoke_m58744_gshared (FingerEventHandler_t8709 * __this, Object_t * ___eventData, MethodInfo* method);
#define FingerEventHandler_Invoke_m58744(__this, ___eventData, method) (void)FingerEventHandler_Invoke_m58744_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___eventData, method)
// System.IAsyncResult FingerEventDetector`1/FingerEventHandler<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * FingerEventHandler_BeginInvoke_m58746_gshared (FingerEventHandler_t8709 * __this, Object_t * ___eventData, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define FingerEventHandler_BeginInvoke_m58746(__this, ___eventData, ___callback, ___object, method) (Object_t *)FingerEventHandler_BeginInvoke_m58746_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___eventData, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void FingerEventDetector`1/FingerEventHandler<System.Object>::EndInvoke(System.IAsyncResult)
 void FingerEventHandler_EndInvoke_m58748_gshared (FingerEventHandler_t8709 * __this, Object_t * ___result, MethodInfo* method);
#define FingerEventHandler_EndInvoke_m58748(__this, ___result, method) (void)FingerEventHandler_EndInvoke_m58748_gshared((FingerEventHandler_t8709 *)__this, (Object_t *)___result, method)
