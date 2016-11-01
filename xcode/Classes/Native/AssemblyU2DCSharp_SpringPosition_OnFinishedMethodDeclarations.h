#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPosition/OnFinished
struct OnFinished_t5378;
// System.Object
struct Object_t;
// SpringPosition
struct SpringPosition_t5377;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SpringPosition/OnFinished::.ctor(System.Object,System.IntPtr)
 void OnFinished__ctor_m38114 (OnFinished_t5378 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::Invoke(SpringPosition)
 void OnFinished_Invoke_m38115 (OnFinished_t5378 * __this, SpringPosition_t5377 * ___spring, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SpringPosition/OnFinished::BeginInvoke(SpringPosition,System.AsyncCallback,System.Object)
 Object_t * OnFinished_BeginInvoke_m38116 (OnFinished_t5378 * __this, SpringPosition_t5377 * ___spring, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition/OnFinished::EndInvoke(System.IAsyncResult)
 void OnFinished_EndInvoke_m38117 (OnFinished_t5378 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
