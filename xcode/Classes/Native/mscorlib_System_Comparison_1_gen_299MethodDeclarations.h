#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt32>
struct Comparison_1_t20462;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m149184 (Comparison_1_t20462 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.UInt32>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m149185 (Comparison_1_t20462 * __this, uint32_t ___x, uint32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.UInt32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m149186 (Comparison_1_t20462 * __this, uint32_t ___x, uint32_t ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.UInt32>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m149187 (Comparison_1_t20462 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
