#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>
struct Transform_1_t17942;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m133042 (Transform_1_t17942 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5635  Transform_1_Invoke_m133043 (Transform_1_t17942 * __this, String_t* ___key, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m133044 (Transform_1_t17942 * __this, String_t* ___key, GameObject_t9 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GameObject>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5635  Transform_1_EndInvoke_m133045 (Transform_1_t17942 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
