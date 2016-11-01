#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PVPData/RankDataItem>
struct Predicate_1_t19628;
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

// System.Void System.Predicate`1<PVPData/RankDataItem>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m143078 (Predicate_1_t19628 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/RankDataItem>::Invoke(T)
 bool Predicate_1_Invoke_m143079 (Predicate_1_t19628 * __this, RankDataItem_t4927  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PVPData/RankDataItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m143080 (Predicate_1_t19628 * __this, RankDataItem_t4927  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PVPData/RankDataItem>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m143081 (Predicate_1_t19628 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
