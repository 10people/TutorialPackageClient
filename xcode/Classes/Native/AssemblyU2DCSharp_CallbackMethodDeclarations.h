#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Callback
struct Callback_t2196;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Callback::.ctor(System.Object,System.IntPtr)
 void Callback__ctor_m38623 (Callback_t2196 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback::Invoke()
 void Callback_Invoke_m38624 (Callback_t2196 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Callback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Callback_BeginInvoke_m38625 (Callback_t2196 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback::EndInvoke(System.IAsyncResult)
 void Callback_EndInvoke_m38626 (Callback_t2196 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
