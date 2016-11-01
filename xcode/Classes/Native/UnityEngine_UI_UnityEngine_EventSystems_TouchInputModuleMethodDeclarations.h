#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t6048;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
 void TouchInputModule__ctor_m42632 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
 bool TouchInputModule_get_allowActivationOnStandalone_m42633 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
 void TouchInputModule_set_allowActivationOnStandalone_m42634 (TouchInputModule_t6048 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
 void TouchInputModule_UpdateModule_m42635 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
 bool TouchInputModule_IsModuleSupported_m42636 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
 bool TouchInputModule_ShouldActivateModule_m42637 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
 bool TouchInputModule_UseFakeInput_m42638 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
 void TouchInputModule_Process_m42639 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
 void TouchInputModule_FakeTouches_m42640 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
 void TouchInputModule_ProcessTouchEvents_m42641 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
 void TouchInputModule_ProcessTouchPress_m42642 (TouchInputModule_t6048 * __this, PointerEventData_t5984 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
 void TouchInputModule_DeactivateModule_m42643 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
 String_t* TouchInputModule_ToString_m42644 (TouchInputModule_t6048 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
