#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t5979;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t5985;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5992;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
 void BaseInputModule__ctor_m42559 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
 EventSystem_t5982 * BaseInputModule_get_eventSystem_m42560 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
 void BaseInputModule_OnEnable_m42561 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
 void BaseInputModule_OnDisable_m42562 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 RaycastResult_t5986  BaseInputModule_FindFirstRaycast_m42563 (Object_t * __this/* static, unused */, List_1_t5985 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m42564 (Object_t * __this/* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m42565 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t9 * BaseInputModule_FindCommonRoot_m42566 (Object_t * __this/* static, unused */, GameObject_t9 * ___g1, GameObject_t9 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
 void BaseInputModule_HandlePointerExitAndEnter_m42567 (BaseInputModule_t5979 * __this, PointerEventData_t5984 * ___currentPointerData, GameObject_t9 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
 AxisEventData_t5992 * BaseInputModule_GetAxisEventData_m42568 (BaseInputModule_t5979 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
 BaseEventData_t5980 * BaseInputModule_GetBaseEventData_m42569 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
 bool BaseInputModule_IsPointerOverGameObject_m42570 (BaseInputModule_t5979 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
 bool BaseInputModule_ShouldActivateModule_m42571 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
 void BaseInputModule_DeactivateModule_m42572 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
 void BaseInputModule_ActivateModule_m42573 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
 void BaseInputModule_UpdateModule_m42574 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
 bool BaseInputModule_IsModuleSupported_m42575 (BaseInputModule_t5979 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
