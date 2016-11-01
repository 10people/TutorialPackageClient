#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,RestaurantConfigData,System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>>
struct Transform_1_t19932;
// System.Object
struct Object_t;
// System.String
struct String_t;
// RestaurantConfigData
struct RestaurantConfigData_t4960;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_254.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,RestaurantConfigData,System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m145266 (Transform_1_t19932 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RestaurantConfigData,System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>>::Invoke(TKey,TValue)
 KeyValuePair_2_t19923  Transform_1_Invoke_m145267 (Transform_1_t19932 * __this, String_t* ___key, RestaurantConfigData_t4960 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,RestaurantConfigData,System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m145268 (Transform_1_t19932 * __this, String_t* ___key, RestaurantConfigData_t4960 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,RestaurantConfigData,System.Collections.Generic.KeyValuePair`2<System.String,RestaurantConfigData>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t19923  Transform_1_EndInvoke_m145269 (Transform_1_t19932 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
