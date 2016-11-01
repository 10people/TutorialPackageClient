#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t5988;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t23196;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t7493;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m43607(__this, method) (void)UnityEvent_1__ctor_m168358_gshared((UnityEvent_1_t23197 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m168359(__this, ___call, method) (void)UnityEvent_1_AddListener_m168360_gshared((UnityEvent_1_t23197 *)__this, (UnityAction_1_t8593 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m168361(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m168362_gshared((UnityEvent_1_t23197 *)__this, (UnityAction_1_t8593 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m43611(__this, ___name, ___targetObj, method) (MethodInfo_t1087 *)UnityEvent_1_FindMethod_Impl_m168363_gshared((UnityEvent_1_t23197 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m43612(__this, ___target, ___theFunction, method) (BaseInvokableCall_t7493 *)UnityEvent_1_GetDelegate_m168364_gshared((UnityEvent_1_t23197 *)__this, (Object_t *)___target, (MethodInfo_t1087 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m43613(__this/* static, unused */, ___action, method) (BaseInvokableCall_t7493 *)UnityEvent_1_GetDelegate_m168365_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t8593 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m43618(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m168366_gshared((UnityEvent_1_t23197 *)__this, (Object_t *)___arg0, method)
