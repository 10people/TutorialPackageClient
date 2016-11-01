#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GuildShopItem>
struct Predicate_1_t17657;
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

// System.Void System.Predicate`1<GuildShopItem>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m131156 (Predicate_1_t17657 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GuildShopItem>::Invoke(T)
 bool Predicate_1_Invoke_m131157 (Predicate_1_t17657 * __this, GuildShopItem_t4744  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<GuildShopItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m131158 (Predicate_1_t17657 * __this, GuildShopItem_t4744  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GuildShopItem>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m131159 (Predicate_1_t17657 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
