#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>>
struct Transform_1_t18865;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RechargeData/GoodInfo
struct GoodInfo_t4503;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m138503 (Transform_1_t18865 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5816  Transform_1_Invoke_m138504 (Transform_1_t18865 * __this, String_t* ___key, GoodInfo_t4503 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m138505 (Transform_1_t18865 * __this, String_t* ___key, GoodInfo_t4503 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RechargeData/GoodInfo,System.Collections.Generic.KeyValuePair`2<System.String,RechargeData/GoodInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5816  Transform_1_EndInvoke_m138506 (Transform_1_t18865 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
