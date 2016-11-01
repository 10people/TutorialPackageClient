#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Interpolate/Function
struct Function_t5116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Interpolate/Function::.ctor(System.Object,System.IntPtr)
 void Function__ctor_m36437 (Function_t5116 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate/Function::Invoke(System.Single,System.Single,System.Single,System.Single)
 float Function_Invoke_m36438 (Function_t5116 * __this, float ___a, float ___b, float ___c, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Interpolate/Function::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
 Object_t * Function_BeginInvoke_m36439 (Function_t5116 * __this, float ___a, float ___b, float ___c, float ___d, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate/Function::EndInvoke(System.IAsyncResult)
 float Function_EndInvoke_m36440 (Function_t5116 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
