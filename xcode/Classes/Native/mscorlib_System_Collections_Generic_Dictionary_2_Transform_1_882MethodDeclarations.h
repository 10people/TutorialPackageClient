#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Games.YuanBaoShopData.ShoppingList,Games.YuanBaoShopData.ShoppingList>
struct Transform_1_t18403;
// System.Object
struct Object_t;
// Games.YuanBaoShopData.ShoppingList
struct ShoppingList_t1669;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Games.YuanBaoShopData.ShoppingList,Games.YuanBaoShopData.ShoppingList>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m135627 (Transform_1_t18403 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Games.YuanBaoShopData.ShoppingList,Games.YuanBaoShopData.ShoppingList>::Invoke(TKey,TValue)
 ShoppingList_t1669 * Transform_1_Invoke_m135628 (Transform_1_t18403 * __this, uint64_t ___key, ShoppingList_t1669 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Games.YuanBaoShopData.ShoppingList,Games.YuanBaoShopData.ShoppingList>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m135629 (Transform_1_t18403 * __this, uint64_t ___key, ShoppingList_t1669 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,Games.YuanBaoShopData.ShoppingList,Games.YuanBaoShopData.ShoppingList>::EndInvoke(System.IAsyncResult)
 ShoppingList_t1669 * Transform_1_EndInvoke_m135630 (Transform_1_t18403 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
