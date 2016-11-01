#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t6047;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t6040;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
 void StandaloneInputModule__ctor_m42604 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
 int32_t StandaloneInputModule_get_inputMode_m42605 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
 bool StandaloneInputModule_get_allowActivationOnMobileDevice_m42606 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
 void StandaloneInputModule_set_allowActivationOnMobileDevice_m42607 (StandaloneInputModule_t6047 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
 float StandaloneInputModule_get_inputActionsPerSecond_m42608 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
 void StandaloneInputModule_set_inputActionsPerSecond_m42609 (StandaloneInputModule_t6047 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
 String_t* StandaloneInputModule_get_horizontalAxis_m42610 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
 void StandaloneInputModule_set_horizontalAxis_m42611 (StandaloneInputModule_t6047 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
 String_t* StandaloneInputModule_get_verticalAxis_m42612 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
 void StandaloneInputModule_set_verticalAxis_m42613 (StandaloneInputModule_t6047 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
 String_t* StandaloneInputModule_get_submitButton_m42614 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
 void StandaloneInputModule_set_submitButton_m42615 (StandaloneInputModule_t6047 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
 String_t* StandaloneInputModule_get_cancelButton_m42616 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
 void StandaloneInputModule_set_cancelButton_m42617 (StandaloneInputModule_t6047 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
 void StandaloneInputModule_UpdateModule_m42618 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
 bool StandaloneInputModule_IsModuleSupported_m42619 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
 bool StandaloneInputModule_ShouldActivateModule_m42620 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
 void StandaloneInputModule_ActivateModule_m42621 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
 void StandaloneInputModule_DeactivateModule_m42622 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
 void StandaloneInputModule_Process_m42623 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
 bool StandaloneInputModule_SendSubmitEventToSelectedObject_m42624 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::AllowMoveEventProcessing(System.Single)
 bool StandaloneInputModule_AllowMoveEventProcessing_m42625 (StandaloneInputModule_t6047 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
 Vector2_t12  StandaloneInputModule_GetRawMoveVector_m42626 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
 bool StandaloneInputModule_SendMoveEventToSelectedObject_m42627 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
 void StandaloneInputModule_ProcessMouseEvent_m42628 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
 bool StandaloneInputModule_UseMouse_m42629 (Object_t * __this/* static, unused */, bool ___pressed, bool ___released, PointerEventData_t5984 * ___pointerData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
 bool StandaloneInputModule_SendUpdateEventToSelectedObject_m42630 (StandaloneInputModule_t6047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
 void StandaloneInputModule_ProcessMousePress_m42631 (StandaloneInputModule_t6047 * __this, MouseButtonEventData_t6040 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
