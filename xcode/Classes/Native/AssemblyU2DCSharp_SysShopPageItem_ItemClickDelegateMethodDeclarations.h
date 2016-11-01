#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SysShopPageItem/ItemClickDelegate
struct ItemClickDelegate_t1946;
// System.Object
struct Object_t;
// SysShopPageItem
struct SysShopPageItem_t1846;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SysShopPageItem/ItemClickDelegate::.ctor(System.Object,System.IntPtr)
 void ItemClickDelegate__ctor_m12680 (ItemClickDelegate_t1946 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem/ItemClickDelegate::Invoke(SysShopPageItem)
 void ItemClickDelegate_Invoke_m12681 (ItemClickDelegate_t1946 * __this, SysShopPageItem_t1846 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult SysShopPageItem/ItemClickDelegate::BeginInvoke(SysShopPageItem,System.AsyncCallback,System.Object)
 Object_t * ItemClickDelegate_BeginInvoke_m12682 (ItemClickDelegate_t1946 * __this, SysShopPageItem_t1846 * ___item, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopPageItem/ItemClickDelegate::EndInvoke(System.IAsyncResult)
 void ItemClickDelegate_EndInvoke_m12683 (ItemClickDelegate_t1946 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
