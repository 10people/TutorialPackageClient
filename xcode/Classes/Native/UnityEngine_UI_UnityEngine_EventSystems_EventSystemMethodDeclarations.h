#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t5979;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t5985;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
 void EventSystem__ctor_m42393 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
 void EventSystem__cctor_m42394 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
 EventSystem_t5982 * EventSystem_get_current_m42395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
 void EventSystem_set_current_m42396 (Object_t * __this/* static, unused */, EventSystem_t5982 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
 bool EventSystem_get_sendNavigationEvents_m42397 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
 void EventSystem_set_sendNavigationEvents_m42398 (EventSystem_t5982 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
 int32_t EventSystem_get_pixelDragThreshold_m42399 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
 void EventSystem_set_pixelDragThreshold_m42400 (EventSystem_t5982 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
 BaseInputModule_t5979 * EventSystem_get_currentInputModule_m42401 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
 GameObject_t9 * EventSystem_get_firstSelectedGameObject_m42402 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_set_firstSelectedGameObject_m42403 (EventSystem_t5982 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
 GameObject_t9 * EventSystem_get_currentSelectedGameObject_m42404 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
 GameObject_t9 * EventSystem_get_lastSelectedGameObject_m42405 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
 void EventSystem_UpdateModules_m42406 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
 bool EventSystem_get_alreadySelecting_m42407 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void EventSystem_SetSelectedGameObject_m42408 (EventSystem_t5982 * __this, GameObject_t9 * ___selected, BaseEventData_t5980 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
 BaseEventData_t5980 * EventSystem_get_baseEventDataCache_m42409 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_SetSelectedGameObject_m42410 (EventSystem_t5982 * __this, GameObject_t9 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
 int32_t EventSystem_RaycastComparer_m42411 (Object_t * __this/* static, unused */, RaycastResult_t5986  ___lhs, RaycastResult_t5986  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void EventSystem_RaycastAll_m42412 (EventSystem_t5982 * __this, PointerEventData_t5984 * ___eventData, List_1_t5985 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
 bool EventSystem_IsPointerOverGameObject_m42413 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
 bool EventSystem_IsPointerOverGameObject_m42414 (EventSystem_t5982 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
 void EventSystem_OnEnable_m42415 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
 void EventSystem_OnDisable_m42416 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
 void EventSystem_TickModules_m42417 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
 void EventSystem_Update_m42418 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
 void EventSystem_ChangeEventModule_m42419 (EventSystem_t5982 * __this, BaseInputModule_t5979 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
 String_t* EventSystem_ToString_m42420 (EventSystem_t5982 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
