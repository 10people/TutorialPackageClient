#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.UInt64>
struct Transform_1_t17582;
// System.Object
struct Object_t;
// Relation
struct Relation_t1442;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.UInt64>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m130629 (Transform_1_t17582 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.UInt64>::Invoke(TKey,TValue)
 uint64_t Transform_1_Invoke_m130630 (Transform_1_t17582 * __this, uint64_t ___key, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m130631 (Transform_1_t17582 * __this, uint64_t ___key, Relation_t1442 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Relation,System.UInt64>::EndInvoke(System.IAsyncResult)
 uint64_t Transform_1_EndInvoke_m130632 (Transform_1_t17582 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
