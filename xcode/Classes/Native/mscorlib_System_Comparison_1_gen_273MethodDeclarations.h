#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<BePowerData/BePowerUpData>
struct Comparison_1_t19341;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// BePowerData/BePowerUpData
#include "AssemblyU2DCSharp_BePowerData_BePowerUpData.h"

// System.Void System.Comparison`1<BePowerData/BePowerUpData>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m141172 (Comparison_1_t19341 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<BePowerData/BePowerUpData>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m141173 (Comparison_1_t19341 * __this, BePowerUpData_t4846  ___x, BePowerUpData_t4846  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<BePowerData/BePowerUpData>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m141174 (Comparison_1_t19341 * __this, BePowerUpData_t4846  ___x, BePowerUpData_t4846  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<BePowerData/BePowerUpData>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m141175 (Comparison_1_t19341 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
