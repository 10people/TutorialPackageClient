#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Games.ImpactModle.ClientImpactInfo>
struct Comparison_1_t18322;
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

// System.Void System.Comparison`1<Games.ImpactModle.ClientImpactInfo>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m135176 (Comparison_1_t18322 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ImpactModle.ClientImpactInfo>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m135177 (Comparison_1_t18322 * __this, ClientImpactInfo_t4749  ___x, ClientImpactInfo_t4749  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Games.ImpactModle.ClientImpactInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m135178 (Comparison_1_t18322 * __this, ClientImpactInfo_t4749  ___x, ClientImpactInfo_t4749  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.ImpactModle.ClientImpactInfo>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m135179 (Comparison_1_t18322 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
