#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>
struct Transform_1_t16187;
// System.Object
struct Object_t;
// UnityEngine.Camera
struct Camera_t38;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m120720 (Transform_1_t16187 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::Invoke(TKey,TValue)
 Camera_t38 * Transform_1_Invoke_m120721 (Transform_1_t16187 * __this, Camera_t38 * ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m120722 (Transform_1_t16187 * __this, Camera_t38 * ___key, bool ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Camera,System.Boolean,UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
 Camera_t38 * Transform_1_EndInvoke_m120723 (Transform_1_t16187 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
