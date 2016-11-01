#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PVPData/RankDataItem>
struct Comparison_1_t19630;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PVPData/RankDataItem
#include "AssemblyU2DCSharp_PVPData_RankDataItem.h"

// System.Void System.Comparison`1<PVPData/RankDataItem>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m143088 (Comparison_1_t19630 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/RankDataItem>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m143089 (Comparison_1_t19630 * __this, RankDataItem_t4927  ___x, RankDataItem_t4927  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PVPData/RankDataItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m143090 (Comparison_1_t19630 * __this, RankDataItem_t4927  ___x, RankDataItem_t4927  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/RankDataItem>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m143091 (Comparison_1_t19630 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
