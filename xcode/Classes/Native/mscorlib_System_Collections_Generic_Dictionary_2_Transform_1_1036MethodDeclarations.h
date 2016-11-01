#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>>
struct Transform_1_t21452;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_268.h"
// Games.UserCommonData.UserCommonData/CopySceneDayNumber
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData_CopySc.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m156624 (Transform_1_t21452 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21442  Transform_1_Invoke_m156625 (Transform_1_t21452 * __this, int32_t ___key, CopySceneDayNumber_t4969  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m156626 (Transform_1_t21452 * __this, int32_t ___key, CopySceneDayNumber_t4969  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21442  Transform_1_EndInvoke_m156627 (Transform_1_t21452 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
