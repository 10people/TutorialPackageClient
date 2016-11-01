#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t6062;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t6060;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// System.Collections.IEnumerator
struct IEnumerator_t67;

// System.Void UnityEngine.UI.Button::.ctor()
 void Button__ctor_m42693 (Button_t6062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
 ButtonClickedEvent_t6060 * Button_get_onClick_m42694 (Button_t6062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
 void Button_set_onClick_m42695 (Button_t6062 * __this, ButtonClickedEvent_t6060 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
 void Button_Press_m42696 (Button_t6062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void Button_OnPointerClick_m42697 (Button_t6062 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void Button_OnSubmit_m42698 (Button_t6062 * __this, BaseEventData_t5980 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
 Object_t * Button_OnFinishSubmit_m42699 (Button_t6062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
