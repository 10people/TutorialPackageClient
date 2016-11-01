#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t7501;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t7492;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t7493;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t7502;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m51652 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t982 * PersistentCall_get_target_m51653 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m51654 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m51655 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t7492 * PersistentCall_get_arguments_m51656 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m51657 (PersistentCall_t7501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t7493 * PersistentCall_GetRuntimeCall_m51658 (PersistentCall_t7501 * __this, UnityEventBase_t7502 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t7493 * PersistentCall_GetObjectCall_m51659 (Object_t * __this/* static, unused */, Object_t982 * ___target, MethodInfo_t1087 * ___method, ArgumentCache_t7492 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
