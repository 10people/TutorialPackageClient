#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Shader,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>>
struct Transform_1_t20751;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t934;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_260.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Shader,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m151243 (Transform_1_t20751 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Shader,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>>::Invoke(TKey,TValue)
 KeyValuePair_2_t20743  Transform_1_Invoke_m151244 (Transform_1_t20751 * __this, String_t* ___key, Shader_t934 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Shader,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m151245 (Transform_1_t20751 * __this, String_t* ___key, Shader_t934 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Shader,System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Shader>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t20743  Transform_1_EndInvoke_m151246 (Transform_1_t20751 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
