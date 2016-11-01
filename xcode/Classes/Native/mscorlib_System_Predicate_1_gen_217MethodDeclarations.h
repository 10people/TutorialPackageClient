#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct Predicate_1_t16279;
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

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m121618 (Predicate_1_t16279 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::Invoke(T)
 bool Predicate_1_Invoke_m121619 (Predicate_1_t16279 * __this, KeyValuePair_2_t5463  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m121620 (Predicate_1_t16279 * __this, KeyValuePair_2_t5463  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m121621 (Predicate_1_t16279 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
