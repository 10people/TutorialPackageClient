#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,Games.AwardActivity.ActivityRewardData>
struct Transform_1_t19448;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,Games.AwardActivity.ActivityRewardData>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m141722 (Transform_1_t19448 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,Games.AwardActivity.ActivityRewardData>::Invoke(TKey,TValue)
 ActivityRewardData_t2067  Transform_1_Invoke_m141723 (Transform_1_t19448 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,Games.AwardActivity.ActivityRewardData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m141724 (Transform_1_t19448 * __this, int32_t ___key, ActivityRewardData_t2067  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.ActivityRewardData,Games.AwardActivity.ActivityRewardData>::EndInvoke(System.IAsyncResult)
 ActivityRewardData_t2067  Transform_1_EndInvoke_m141725 (Transform_1_t19448 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
