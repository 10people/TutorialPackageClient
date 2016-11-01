#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PushNotification/SPushNotificationInfo>
struct Predicate_1_t20874;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PushNotification/SPushNotificationInfo
#include "AssemblyU2DCSharp_PushNotification_SPushNotificationInfo.h"

// System.Void System.Predicate`1<PushNotification/SPushNotificationInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m152175 (Predicate_1_t20874 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PushNotification/SPushNotificationInfo>::Invoke(T)
 bool Predicate_1_Invoke_m152176 (Predicate_1_t20874 * __this, SPushNotificationInfo_t4505  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<PushNotification/SPushNotificationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m152177 (Predicate_1_t20874 * __this, SPushNotificationInfo_t4505  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<PushNotification/SPushNotificationInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m152178 (Predicate_1_t20874 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
