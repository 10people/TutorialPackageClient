#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<GuildShopItem>
struct Comparison_1_t17659;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GuildShopItem
#include "AssemblyU2DCSharp_GuildShopItem.h"

// System.Void System.Comparison`1<GuildShopItem>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m131166 (Comparison_1_t17659 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GuildShopItem>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m131167 (Comparison_1_t17659 * __this, GuildShopItem_t4744  ___x, GuildShopItem_t4744  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<GuildShopItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m131168 (Comparison_1_t17659 * __this, GuildShopItem_t4744  ___x, GuildShopItem_t4744  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GuildShopItem>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m131169 (Comparison_1_t17659 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
