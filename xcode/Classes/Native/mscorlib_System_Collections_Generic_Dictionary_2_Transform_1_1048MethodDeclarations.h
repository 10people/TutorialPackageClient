#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>>
struct Transform_1_t21510;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Games.YuanBaoShopData.ShoppingCart
struct ShoppingCart_t4955;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_271.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m157068 (Transform_1_t21510 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>>::Invoke(TKey,TValue)
 KeyValuePair_2_t21501  Transform_1_Invoke_m157069 (Transform_1_t21510 * __this, String_t* ___key, ShoppingCart_t4955 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m157070 (Transform_1_t21510 * __this, String_t* ___key, ShoppingCart_t4955 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.Generic.KeyValuePair`2<System.String,Games.YuanBaoShopData.ShoppingCart>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t21501  Transform_1_EndInvoke_m157071 (Transform_1_t21510 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
