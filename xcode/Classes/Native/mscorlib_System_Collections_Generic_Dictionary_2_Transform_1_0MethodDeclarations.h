#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t8811;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m59535_gshared (Transform_1_t8811 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define Transform_1__ctor_m59535(__this, ___object, ___method, method) (void)Transform_1__ctor_m59535_gshared((Transform_1_t8811 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
 Object_t * Transform_1_Invoke_m59536_gshared (Transform_1_t8811 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Transform_1_Invoke_m59536(__this, ___key, ___value, method) (Object_t *)Transform_1_Invoke_m59536_gshared((Transform_1_t8811 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m59537_gshared (Transform_1_t8811 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m59537(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m59537_gshared((Transform_1_t8811 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Transform_1_EndInvoke_m59538_gshared (Transform_1_t8811 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m59538(__this, ___result, method) (Object_t *)Transform_1_EndInvoke_m59538_gshared((Transform_1_t8811 *)__this, (Object_t *)___result, method)
