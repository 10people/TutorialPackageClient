#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct Comparison_1_t16281;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m121628 (Comparison_1_t16281 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m121629 (Comparison_1_t16281 * __this, KeyValuePair_2_t5463  ___x, KeyValuePair_2_t5463  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m121630 (Comparison_1_t16281 * __this, KeyValuePair_2_t5463  ___x, KeyValuePair_2_t5463  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m121631 (Comparison_1_t16281 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
