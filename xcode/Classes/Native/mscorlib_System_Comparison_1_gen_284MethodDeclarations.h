#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PVPData/PvPRankListItemInfo>
struct Comparison_1_t19819;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PVPData/PvPRankListItemInfo
#include "AssemblyU2DCSharp_PVPData_PvPRankListItemInfo.h"

// System.Void System.Comparison`1<PVPData/PvPRankListItemInfo>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m144504 (Comparison_1_t19819 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/PvPRankListItemInfo>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m144505 (Comparison_1_t19819 * __this, PvPRankListItemInfo_t1917  ___x, PvPRankListItemInfo_t1917  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PVPData/PvPRankListItemInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m144506 (Comparison_1_t19819 * __this, PvPRankListItemInfo_t1917  ___x, PvPRankListItemInfo_t1917  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PVPData/PvPRankListItemInfo>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m144507 (Comparison_1_t19819 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
