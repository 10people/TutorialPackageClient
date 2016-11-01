#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PVPData/PvPRankListItemInfo>
struct Predicate_1_t19817;
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

// System.Void System.Predicate`1<PVPData/PvPRankListItemInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m144494 (Predicate_1_t19817 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/PvPRankListItemInfo>::Invoke(T)
 bool Predicate_1_Invoke_m144495 (Predicate_1_t19817 * __this, PvPRankListItemInfo_t1917  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PVPData/PvPRankListItemInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m144496 (Predicate_1_t19817 * __this, PvPRankListItemInfo_t1917  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/PvPRankListItemInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m144497 (Predicate_1_t19817 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
