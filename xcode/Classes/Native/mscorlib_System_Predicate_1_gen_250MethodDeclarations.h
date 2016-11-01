#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Games.ImpactModle.ClientImpactInfo>
struct Predicate_1_t18320;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.ImpactModle.ClientImpactInfo
#include "AssemblyU2DCSharp_Games_ImpactModle_ClientImpactInfo.h"

// System.Void System.Predicate`1<Games.ImpactModle.ClientImpactInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m135166 (Predicate_1_t18320 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ImpactModle.ClientImpactInfo>::Invoke(T)
 bool Predicate_1_Invoke_m135167 (Predicate_1_t18320 * __this, ClientImpactInfo_t4749  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Games.ImpactModle.ClientImpactInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m135168 (Predicate_1_t18320 * __this, ClientImpactInfo_t4749  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.ImpactModle.ClientImpactInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m135169 (Predicate_1_t18320 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
