#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GuildWarPushMessageInfo>
struct Predicate_1_t17701;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GuildWarPushMessageInfo
#include "AssemblyU2DCSharp_GuildWarPushMessageInfo.h"

// System.Void System.Predicate`1<GuildWarPushMessageInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m131426 (Predicate_1_t17701 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GuildWarPushMessageInfo>::Invoke(T)
 bool Predicate_1_Invoke_m131427 (Predicate_1_t17701 * __this, GuildWarPushMessageInfo_t1486  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<GuildWarPushMessageInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m131428 (Predicate_1_t17701 * __this, GuildWarPushMessageInfo_t1486  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GuildWarPushMessageInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m131429 (Predicate_1_t17701 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
