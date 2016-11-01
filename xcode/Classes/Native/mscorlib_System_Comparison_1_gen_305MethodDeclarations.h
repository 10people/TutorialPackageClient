#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PushNotification/SPushNotificationInfo>
struct Comparison_1_t20876;
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

// System.Void System.Comparison`1<PushNotification/SPushNotificationInfo>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m152185 (Comparison_1_t20876 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PushNotification/SPushNotificationInfo>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m152186 (Comparison_1_t20876 * __this, SPushNotificationInfo_t4505  ___x, SPushNotificationInfo_t4505  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<PushNotification/SPushNotificationInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m152187 (Comparison_1_t20876 * __this, SPushNotificationInfo_t4505  ___x, SPushNotificationInfo_t4505  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<PushNotification/SPushNotificationInfo>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m152188 (Comparison_1_t20876 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
