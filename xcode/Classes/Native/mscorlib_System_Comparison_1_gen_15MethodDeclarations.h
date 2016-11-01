#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t8619;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m58196_gshared (Comparison_1_t8619 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define Comparison_1__ctor_m58196(__this, ___object, ___method, method) (void)Comparison_1__ctor_m58196_gshared((Comparison_1_t8619 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m58197_gshared (Comparison_1_t8619 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m58197(__this, ___x, ___y, method) (int32_t)Comparison_1_Invoke_m58197_gshared((Comparison_1_t8619 *)__this, (Object_t *)___x, (Object_t *)___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m58198_gshared (Comparison_1_t8619 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m58198(__this, ___x, ___y, ___callback, ___object, method) (Object_t *)Comparison_1_BeginInvoke_m58198_gshared((Comparison_1_t8619 *)__this, (Object_t *)___x, (Object_t *)___y, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m58199_gshared (Comparison_1_t8619 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m58199(__this, ___result, method) (int32_t)Comparison_1_EndInvoke_m58199_gshared((Comparison_1_t8619 *)__this, (Object_t *)___result, method)
