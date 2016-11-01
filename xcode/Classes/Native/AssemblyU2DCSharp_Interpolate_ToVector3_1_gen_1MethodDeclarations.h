#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Interpolate/ToVector3`1<System.Object>
struct ToVector3_1_t5879;
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

// System.Void Interpolate/ToVector3`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void ToVector3_1__ctor_m160167_gshared (ToVector3_1_t5879 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define ToVector3_1__ctor_m160167(__this, ___object, ___method, method) (void)ToVector3_1__ctor_m160167_gshared((ToVector3_1_t5879 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<System.Object>::Invoke(T)
 Vector3_t121  ToVector3_1_Invoke_m160169_gshared (ToVector3_1_t5879 * __this, Object_t * ___v, MethodInfo* method);
#define ToVector3_1_Invoke_m160169(__this, ___v, method) (Vector3_t121 )ToVector3_1_Invoke_m160169_gshared((ToVector3_1_t5879 *)__this, (Object_t *)___v, method)
// System.IAsyncResult Interpolate/ToVector3`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * ToVector3_1_BeginInvoke_m160171_gshared (ToVector3_1_t5879 * __this, Object_t * ___v, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define ToVector3_1_BeginInvoke_m160171(__this, ___v, ___callback, ___object, method) (Object_t *)ToVector3_1_BeginInvoke_m160171_gshared((ToVector3_1_t5879 *)__this, (Object_t *)___v, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<System.Object>::EndInvoke(System.IAsyncResult)
 Vector3_t121  ToVector3_1_EndInvoke_m160173_gshared (ToVector3_1_t5879 * __this, Object_t * ___result, MethodInfo* method);
#define ToVector3_1_EndInvoke_m160173(__this, ___result, method) (Vector3_t121 )ToVector3_1_EndInvoke_m160173_gshared((ToVector3_1_t5879 *)__this, (Object_t *)___result, method)
