#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>>
struct Transform_1_t16466;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_239.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m123071 (Transform_1_t16466 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t16305  Transform_1_Invoke_m123072 (Transform_1_t16466 * __this, Type_t * ___key, MethodInfo_t1087 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m123073 (Transform_1_t16466 * __this, Type_t * ___key, MethodInfo_t1087 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t16305  Transform_1_EndInvoke_m123074 (Transform_1_t16466 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
