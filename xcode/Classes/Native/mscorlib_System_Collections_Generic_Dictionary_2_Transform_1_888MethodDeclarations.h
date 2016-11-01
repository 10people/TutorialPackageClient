#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>
struct Transform_1_t18437;
// System.Object
struct Object_t;
// QianKunDaiLogic/ProductInfo
struct ProductInfo_t1678;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_247.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m135838 (Transform_1_t18437 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>::Invoke(TKey,TValue)
 KeyValuePair_2_t18427  Transform_1_Invoke_m135839 (Transform_1_t18437 * __this, int32_t ___key, ProductInfo_t1678 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m135840 (Transform_1_t18437 * __this, int32_t ___key, ProductInfo_t1678 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,QianKunDaiLogic/ProductInfo,System.Collections.Generic.KeyValuePair`2<System.Int32,QianKunDaiLogic/ProductInfo>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t18427  Transform_1_EndInvoke_m135841 (Transform_1_t18437 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
