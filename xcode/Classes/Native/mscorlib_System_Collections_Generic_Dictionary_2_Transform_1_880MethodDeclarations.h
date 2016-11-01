#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>>
struct Transform_1_t18116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_246.h"
// Games.AwardActivity.OnlineAwardLine
#include "AssemblyU2DCSharp_Games_AwardActivity_OnlineAwardLine.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m134014 (Transform_1_t18116 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>>::Invoke(TKey,TValue)
 KeyValuePair_2_t18106  Transform_1_Invoke_m134015 (Transform_1_t18116 * __this, int32_t ___key, OnlineAwardLine_t4542  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m134016 (Transform_1_t18116 * __this, int32_t ___key, OnlineAwardLine_t4542  ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Games.AwardActivity.OnlineAwardLine,System.Collections.Generic.KeyValuePair`2<System.Int32,Games.AwardActivity.OnlineAwardLine>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t18106  Transform_1_EndInvoke_m134017 (Transform_1_t18116 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
