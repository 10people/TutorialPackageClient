#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t23103;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void EventFunction_1__ctor_m167580_gshared (EventFunction_1_t23103 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define EventFunction_1__ctor_m167580(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m167580_gshared((EventFunction_1_t23103 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
 void EventFunction_1_Invoke_m167582_gshared (EventFunction_1_t23103 * __this, Object_t * ___handler, BaseEventData_t5980 * ___eventData, MethodInfo* method);
#define EventFunction_1_Invoke_m167582(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m167582_gshared((EventFunction_1_t23103 *)__this, (Object_t *)___handler, (BaseEventData_t5980 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
 Object_t * EventFunction_1_BeginInvoke_m167584_gshared (EventFunction_1_t23103 * __this, Object_t * ___handler, BaseEventData_t5980 * ___eventData, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define EventFunction_1_BeginInvoke_m167584(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m167584_gshared((EventFunction_1_t23103 *)__this, (Object_t *)___handler, (BaseEventData_t5980 *)___eventData, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
 void EventFunction_1_EndInvoke_m167586_gshared (EventFunction_1_t23103 * __this, Object_t * ___result, MethodInfo* method);
#define EventFunction_1_EndInvoke_m167586(__this, ___result, method) (void)EventFunction_1_EndInvoke_m167586_gshared((EventFunction_1_t23103 *)__this, (Object_t *)___result, method)
