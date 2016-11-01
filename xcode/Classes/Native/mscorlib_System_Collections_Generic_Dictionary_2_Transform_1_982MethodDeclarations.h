#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color,UnityEngine.Color>
struct Transform_1_t20734;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m151091 (Transform_1_t20734 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color,UnityEngine.Color>::Invoke(TKey,TValue)
 Color_t939  Transform_1_Invoke_m151092 (Transform_1_t20734 * __this, String_t* ___key, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color,UnityEngine.Color>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m151093 (Transform_1_t20734 * __this, String_t* ___key, Color_t939  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Color,UnityEngine.Color>::EndInvoke(System.IAsyncResult)
 Color_t939  Transform_1_EndInvoke_m151094 (Transform_1_t20734 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
