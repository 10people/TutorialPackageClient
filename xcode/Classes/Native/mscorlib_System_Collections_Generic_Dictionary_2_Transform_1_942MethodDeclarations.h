#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,UnityEngine.GameObject>
struct Transform_1_t20010;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m145750 (Transform_1_t20010 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,UnityEngine.GameObject>::Invoke(TKey,TValue)
 GameObject_t9 * Transform_1_Invoke_m145751 (Transform_1_t20010 * __this, int32_t ___key, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,UnityEngine.GameObject>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m145752 (Transform_1_t20010 * __this, int32_t ___key, GameObject_t9 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GameObject,UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
 GameObject_t9 * Transform_1_EndInvoke_m145753 (Transform_1_t20010 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
