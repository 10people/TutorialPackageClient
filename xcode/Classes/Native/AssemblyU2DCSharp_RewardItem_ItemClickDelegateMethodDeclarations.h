#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RewardItem/ItemClickDelegate
struct ItemClickDelegate_t1932;
// System.Object
struct Object_t;
// RewardItem
struct RewardItem_t1842;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void RewardItem/ItemClickDelegate::.ctor(System.Object,System.IntPtr)
 void ItemClickDelegate__ctor_m12619 (ItemClickDelegate_t1932 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardItem/ItemClickDelegate::Invoke(RewardItem)
 void ItemClickDelegate_Invoke_m12620 (ItemClickDelegate_t1932 * __this, RewardItem_t1842 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult RewardItem/ItemClickDelegate::BeginInvoke(RewardItem,System.AsyncCallback,System.Object)
 Object_t * ItemClickDelegate_BeginInvoke_m12621 (ItemClickDelegate_t1932 * __this, RewardItem_t1842 * ___item, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardItem/ItemClickDelegate::EndInvoke(System.IAsyncResult)
 void ItemClickDelegate_EndInvoke_m12622 (ItemClickDelegate_t1932 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
