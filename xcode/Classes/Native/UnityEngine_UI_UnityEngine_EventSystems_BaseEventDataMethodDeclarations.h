#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t5979;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m42506 (BaseEventData_t5980 * __this, EventSystem_t5982 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m42507 (BaseEventData_t5980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m42508 (BaseEventData_t5980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m42509 (BaseEventData_t5980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t5979 * BaseEventData_get_currentInputModule_m42510 (BaseEventData_t5980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t9 * BaseEventData_get_selectedObject_m42511 (BaseEventData_t5980 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m42512 (BaseEventData_t5980 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
