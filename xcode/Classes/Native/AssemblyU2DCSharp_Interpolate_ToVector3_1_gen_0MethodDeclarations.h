#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Interpolate/ToVector3`1<UnityEngine.Vector3>
struct ToVector3_1_t5878;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Interpolate/ToVector3`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
 void ToVector3_1__ctor_m41661 (ToVector3_1_t5878 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate/ToVector3`1<UnityEngine.Vector3>::Invoke(T)
 Vector3_t121  ToVector3_1_Invoke_m160190 (ToVector3_1_t5878 * __this, Vector3_t121  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Interpolate/ToVector3`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * ToVector3_1_BeginInvoke_m160191 (ToVector3_1_t5878 * __this, Vector3_t121  ___v, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate/ToVector3`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
 Vector3_t121  ToVector3_1_EndInvoke_m160192 (ToVector3_1_t5878 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
