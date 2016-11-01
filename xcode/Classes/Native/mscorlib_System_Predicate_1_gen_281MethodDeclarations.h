#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<HuaShanPVPData/WorldBossTeamInfo>
struct Predicate_1_t20119;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// HuaShanPVPData/WorldBossTeamInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_WorldBossTeamInfo.h"

// System.Void System.Predicate`1<HuaShanPVPData/WorldBossTeamInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m146656 (Predicate_1_t20119 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<HuaShanPVPData/WorldBossTeamInfo>::Invoke(T)
 bool Predicate_1_Invoke_m146657 (Predicate_1_t20119 * __this, WorldBossTeamInfo_t1950  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<HuaShanPVPData/WorldBossTeamInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m146658 (Predicate_1_t20119 * __this, WorldBossTeamInfo_t1950  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<HuaShanPVPData/WorldBossTeamInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m146659 (Predicate_1_t20119 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
