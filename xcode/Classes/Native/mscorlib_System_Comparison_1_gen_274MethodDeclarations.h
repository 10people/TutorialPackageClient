#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<BePowerData/BePowerListItemData>
struct Comparison_1_t19357;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// BePowerData/BePowerListItemData
#include "AssemblyU2DCSharp_BePowerData_BePowerListItemData.h"

// System.Void System.Comparison`1<BePowerData/BePowerListItemData>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m141322 (Comparison_1_t19357 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<BePowerData/BePowerListItemData>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m141323 (Comparison_1_t19357 * __this, BePowerListItemData_t1863  ___x, BePowerListItemData_t1863  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<BePowerData/BePowerListItemData>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m141324 (Comparison_1_t19357 * __this, BePowerListItemData_t1863  ___x, BePowerListItemData_t1863  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<BePowerData/BePowerListItemData>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m141325 (Comparison_1_t19357 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
