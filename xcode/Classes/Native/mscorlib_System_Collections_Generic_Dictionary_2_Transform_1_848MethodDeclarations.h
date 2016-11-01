#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>>
struct Transform_1_t17323;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// Games.AwardActivity.DaySignInItem
#include "AssemblyU2DCSharp_Games_AwardActivity_DaySignInItem.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m129013 (Transform_1_t17323 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5548  Transform_1_Invoke_m129014 (Transform_1_t17323 * __this, int32_t ___key, DaySignInItem_t1379  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m129015 (Transform_1_t17323 * __this, int32_t ___key, DaySignInItem_t1379  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.DaySignInItem,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.DaySignInItem>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5548  Transform_1_EndInvoke_m129016 (Transform_1_t17323 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
