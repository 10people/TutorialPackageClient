#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GoldMoneyShopItem>
struct Predicate_1_t18915;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GoldMoneyShopItem
#include "AssemblyU2DCSharp_GoldMoneyShopItem.h"

// System.Void System.Predicate`1<GoldMoneyShopItem>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m138845 (Predicate_1_t18915 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GoldMoneyShopItem>::Invoke(T)
 bool Predicate_1_Invoke_m138846 (Predicate_1_t18915 * __this, GoldMoneyShopItem_t1887  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<GoldMoneyShopItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m138847 (Predicate_1_t18915 * __this, GoldMoneyShopItem_t1887  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GoldMoneyShopItem>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m138848 (Predicate_1_t18915 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
