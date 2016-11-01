#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,Games.FlyWing.FlyWingData>
struct Transform_1_t19489;
// System.Object
struct Object_t;
// Games.FlyWing.FlyWingData
struct FlyWingData_t4729;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,Games.FlyWing.FlyWingData>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m142033 (Transform_1_t19489 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,Games.FlyWing.FlyWingData>::Invoke(TKey,TValue)
 FlyWingData_t4729 * Transform_1_Invoke_m142034 (Transform_1_t19489 * __this, int32_t ___key, FlyWingData_t4729 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,Games.FlyWing.FlyWingData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m142035 (Transform_1_t19489 * __this, int32_t ___key, FlyWingData_t4729 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.FlyWing.FlyWingData,Games.FlyWing.FlyWingData>::EndInvoke(System.IAsyncResult)
 FlyWingData_t4729 * Transform_1_EndInvoke_m142036 (Transform_1_t19489 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
