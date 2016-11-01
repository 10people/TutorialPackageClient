#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t6144;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t6142;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5992;
// UnityEngine.UI.Selectable
struct Selectable_t6064;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
 void Slider__ctor_m43215 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
 RectTransform_t6078 * Slider_get_fillRect_m43216 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
 void Slider_set_fillRect_m43217 (Slider_t6144 * __this, RectTransform_t6078 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
 RectTransform_t6078 * Slider_get_handleRect_m43218 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
 void Slider_set_handleRect_m43219 (Slider_t6144 * __this, RectTransform_t6078 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
 int32_t Slider_get_direction_m43220 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
 void Slider_set_direction_m43221 (Slider_t6144 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
 float Slider_get_minValue_m43222 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
 void Slider_set_minValue_m43223 (Slider_t6144 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
 float Slider_get_maxValue_m43224 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
 void Slider_set_maxValue_m43225 (Slider_t6144 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
 bool Slider_get_wholeNumbers_m43226 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
 void Slider_set_wholeNumbers_m43227 (Slider_t6144 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
 float Slider_get_value_m43228 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
 void Slider_set_value_m43229 (Slider_t6144 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
 float Slider_get_normalizedValue_m43230 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
 void Slider_set_normalizedValue_m43231 (Slider_t6144 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
 SliderEvent_t6142 * Slider_get_onValueChanged_m43232 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
 void Slider_set_onValueChanged_m43233 (Slider_t6144 * __this, SliderEvent_t6142 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
 float Slider_get_stepSize_m43234 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Slider_Rebuild_m43235 (Slider_t6144 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
 void Slider_OnEnable_m43236 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
 void Slider_OnDisable_m43237 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
 void Slider_UpdateCachedReferences_m43238 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
 void Slider_Set_m43239 (Slider_t6144 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
 void Slider_Set_m43240 (Slider_t6144 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
 void Slider_OnRectTransformDimensionsChange_m43241 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
 int32_t Slider_get_axis_m43242 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
 bool Slider_get_reverseValue_m43243 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
 void Slider_UpdateVisuals_m43244 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
 void Slider_UpdateDrag_m43245 (Slider_t6144 * __this, PointerEventData_t5984 * ___eventData, Camera_t38 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Slider_MayDrag_m43246 (Slider_t6144 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnPointerDown_m43247 (Slider_t6144 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnDrag_m43248 (Slider_t6144 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Slider_OnMove_m43249 (Slider_t6144 * __this, AxisEventData_t5992 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
 Selectable_t6064 * Slider_FindSelectableOnLeft_m43250 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
 Selectable_t6064 * Slider_FindSelectableOnRight_m43251 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
 Selectable_t6064 * Slider_FindSelectableOnUp_m43252 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
 Selectable_t6064 * Slider_FindSelectableOnDown_m43253 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnInitializePotentialDrag_m43254 (Slider_t6144 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
 void Slider_SetDirection_m43255 (Slider_t6144 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m43256 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t78 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m43257 (Slider_t6144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
