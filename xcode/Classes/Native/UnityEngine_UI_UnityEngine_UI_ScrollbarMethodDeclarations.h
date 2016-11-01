#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t6127;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t6124;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5992;
// UnityEngine.UI.Selectable
struct Selectable_t6064;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.UI.Scrollbar/Axis
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
 void Scrollbar__ctor_m43056 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
 RectTransform_t6078 * Scrollbar_get_handleRect_m43057 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
 void Scrollbar_set_handleRect_m43058 (Scrollbar_t6127 * __this, RectTransform_t6078 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
 int32_t Scrollbar_get_direction_m43059 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
 void Scrollbar_set_direction_m43060 (Scrollbar_t6127 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
 float Scrollbar_get_value_m43061 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
 void Scrollbar_set_value_m43062 (Scrollbar_t6127 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
 float Scrollbar_get_size_m43063 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
 void Scrollbar_set_size_m43064 (Scrollbar_t6127 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
 int32_t Scrollbar_get_numberOfSteps_m43065 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
 void Scrollbar_set_numberOfSteps_m43066 (Scrollbar_t6127 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
 ScrollEvent_t6124 * Scrollbar_get_onValueChanged_m43067 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
 void Scrollbar_set_onValueChanged_m43068 (Scrollbar_t6127 * __this, ScrollEvent_t6124 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
 float Scrollbar_get_stepSize_m43069 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Scrollbar_Rebuild_m43070 (Scrollbar_t6127 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
 void Scrollbar_OnEnable_m43071 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
 void Scrollbar_OnDisable_m43072 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
 void Scrollbar_UpdateCachedReferences_m43073 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
 void Scrollbar_Set_m43074 (Scrollbar_t6127 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
 void Scrollbar_Set_m43075 (Scrollbar_t6127 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
 void Scrollbar_OnRectTransformDimensionsChange_m43076 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
 int32_t Scrollbar_get_axis_m43077 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
 bool Scrollbar_get_reverseValue_m43078 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
 void Scrollbar_UpdateVisuals_m43079 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_UpdateDrag_m43080 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Scrollbar_MayDrag_m43081 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnBeginDrag_m43082 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnDrag_m43083 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnPointerDown_m43084 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
 Object_t * Scrollbar_ClickRepeat_m43085 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnPointerUp_m43086 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Scrollbar_OnMove_m43087 (Scrollbar_t6127 * __this, AxisEventData_t5992 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
 Selectable_t6064 * Scrollbar_FindSelectableOnLeft_m43088 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
 Selectable_t6064 * Scrollbar_FindSelectableOnRight_m43089 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
 Selectable_t6064 * Scrollbar_FindSelectableOnUp_m43090 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
 Selectable_t6064 * Scrollbar_FindSelectableOnDown_m43091 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Scrollbar_OnInitializePotentialDrag_m43092 (Scrollbar_t6127 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
 void Scrollbar_SetDirection_m43093 (Scrollbar_t6127 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m43094 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t78 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m43095 (Scrollbar_t6127 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
