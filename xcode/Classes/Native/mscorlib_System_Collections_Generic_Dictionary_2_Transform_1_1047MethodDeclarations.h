#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>
struct Transform_1_t21497;
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m157064 (Transform_1_t21497 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t1066  Transform_1_Invoke_m157065 (Transform_1_t21497 * __this, String_t* ___key, ShoppingCart_t4955 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m157066 (Transform_1_t21497 * __this, String_t* ___key, ShoppingCart_t4955 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Games.YuanBaoShopData.ShoppingCart,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t1066  Transform_1_EndInvoke_m157067 (Transform_1_t21497 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
