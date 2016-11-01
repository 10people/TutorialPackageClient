#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<GoldMoneyShopItem>
struct Comparison_1_t18917;
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

// System.Void System.Comparison`1<GoldMoneyShopItem>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m138855 (Comparison_1_t18917 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GoldMoneyShopItem>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m138856 (Comparison_1_t18917 * __this, GoldMoneyShopItem_t1887  ___x, GoldMoneyShopItem_t1887  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<GoldMoneyShopItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m138857 (Comparison_1_t18917 * __this, GoldMoneyShopItem_t1887  ___x, GoldMoneyShopItem_t1887  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GoldMoneyShopItem>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m138858 (Comparison_1_t18917 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
