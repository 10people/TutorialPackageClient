#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<TeamPlatformWindow/TeamPlatformplayerInfo>
struct Predicate_1_t20077;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// TeamPlatformWindow/TeamPlatformplayerInfo
#include "AssemblyU2DCSharp_TeamPlatformWindow_TeamPlatformplayerInfo.h"

// System.Void System.Predicate`1<TeamPlatformWindow/TeamPlatformplayerInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m146322 (Predicate_1_t20077 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<TeamPlatformWindow/TeamPlatformplayerInfo>::Invoke(T)
 bool Predicate_1_Invoke_m146323 (Predicate_1_t20077 * __this, TeamPlatformplayerInfo_t2077  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<TeamPlatformWindow/TeamPlatformplayerInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m146324 (Predicate_1_t20077 * __this, TeamPlatformplayerInfo_t2077  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<TeamPlatformWindow/TeamPlatformplayerInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m146325 (Predicate_1_t20077 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
