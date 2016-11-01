#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Callback`1<System.Boolean>
struct Callback_1_t1765;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Callback`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Callback_1__ctor_m40887 (Callback_1_t1765 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback`1<System.Boolean>::Invoke(T)
 void Callback_1_Invoke_m39699 (Callback_1_t1765 * __this, bool ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Callback`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Callback_1_BeginInvoke_m137445 (Callback_1_t1765 * __this, bool ___arg1, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback`1<System.Boolean>::EndInvoke(System.IAsyncResult)
 void Callback_1_EndInvoke_m137446 (Callback_1_t1765 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
