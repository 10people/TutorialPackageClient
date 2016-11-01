#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>>
struct Transform_1_t16405;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// ExporterFunc
struct ExporterFunc_t1083;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_234.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m122487 (Transform_1_t16405 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>>::Invoke(TKey,TValue)
 KeyValuePair_2_t16291  Transform_1_Invoke_m122488 (Transform_1_t16405 * __this, Type_t * ___key, ExporterFunc_t1083 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m122489 (Transform_1_t16405 * __this, Type_t * ___key, ExporterFunc_t1083 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,ExporterFunc>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t16291  Transform_1_EndInvoke_m122490 (Transform_1_t16405 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
