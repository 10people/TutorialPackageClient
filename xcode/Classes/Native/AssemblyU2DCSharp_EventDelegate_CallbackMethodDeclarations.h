#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EventDelegate/Callback
struct Callback_t5349;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
 void Callback__ctor_m37821 (Callback_t5349 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
 void Callback_Invoke_m37822 (Callback_t5349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * Callback_BeginInvoke_m37823 (Callback_t5349 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
 void Callback_EndInvoke_m37824 (Callback_t5349 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
