#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t6133;
// UnityEngine.RectTransform
struct RectTransform_t6078;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t6127;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t6131;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t5984;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
 void ScrollRect__ctor_m43097 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
 RectTransform_t6078 * ScrollRect_get_content_m43098 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
 void ScrollRect_set_content_m43099 (ScrollRect_t6133 * __this, RectTransform_t6078 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
 bool ScrollRect_get_horizontal_m43100 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
 void ScrollRect_set_horizontal_m43101 (ScrollRect_t6133 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
 bool ScrollRect_get_vertical_m43102 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
 void ScrollRect_set_vertical_m43103 (ScrollRect_t6133 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
 int32_t ScrollRect_get_movementType_m43104 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
 void ScrollRect_set_movementType_m43105 (ScrollRect_t6133 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
 float ScrollRect_get_elasticity_m43106 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
 void ScrollRect_set_elasticity_m43107 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
 bool ScrollRect_get_inertia_m43108 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
 void ScrollRect_set_inertia_m43109 (ScrollRect_t6133 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
 float ScrollRect_get_decelerationRate_m43110 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
 void ScrollRect_set_decelerationRate_m43111 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
 float ScrollRect_get_scrollSensitivity_m43112 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
 void ScrollRect_set_scrollSensitivity_m43113 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
 Scrollbar_t6127 * ScrollRect_get_horizontalScrollbar_m43114 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_horizontalScrollbar_m43115 (ScrollRect_t6133 * __this, Scrollbar_t6127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
 Scrollbar_t6127 * ScrollRect_get_verticalScrollbar_m43116 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_verticalScrollbar_m43117 (ScrollRect_t6133 * __this, Scrollbar_t6127 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
 ScrollRectEvent_t6131 * ScrollRect_get_onValueChanged_m43118 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
 void ScrollRect_set_onValueChanged_m43119 (ScrollRect_t6133 * __this, ScrollRectEvent_t6131 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
 RectTransform_t6078 * ScrollRect_get_viewRect_m43120 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
 Vector2_t12  ScrollRect_get_velocity_m43121 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
 void ScrollRect_set_velocity_m43122 (ScrollRect_t6133 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
 void ScrollRect_Rebuild_m43123 (ScrollRect_t6133 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
 void ScrollRect_OnEnable_m43124 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
 void ScrollRect_OnDisable_m43125 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
 bool ScrollRect_IsActive_m43126 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
 void ScrollRect_EnsureLayoutHasRebuilt_m43127 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
 void ScrollRect_StopMovement_m43128 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnScroll_m43129 (ScrollRect_t6133 * __this, PointerEventData_t5984 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnInitializePotentialDrag_m43130 (ScrollRect_t6133 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnBeginDrag_m43131 (ScrollRect_t6133 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnEndDrag_m43132 (ScrollRect_t6133 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnDrag_m43133 (ScrollRect_t6133 * __this, PointerEventData_t5984 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
 void ScrollRect_SetContentAnchoredPosition_m43134 (ScrollRect_t6133 * __this, Vector2_t12  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
 void ScrollRect_LateUpdate_m43135 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
 void ScrollRect_UpdatePrevData_m43136 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
 void ScrollRect_UpdateScrollbars_m43137 (ScrollRect_t6133 * __this, Vector2_t12  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
 Vector2_t12  ScrollRect_get_normalizedPosition_m43138 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
 void ScrollRect_set_normalizedPosition_m43139 (ScrollRect_t6133 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
 float ScrollRect_get_horizontalNormalizedPosition_m43140 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
 void ScrollRect_set_horizontalNormalizedPosition_m43141 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
 float ScrollRect_get_verticalNormalizedPosition_m43142 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
 void ScrollRect_set_verticalNormalizedPosition_m43143 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
 void ScrollRect_SetHorizontalNormalizedPosition_m43144 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
 void ScrollRect_SetVerticalNormalizedPosition_m43145 (ScrollRect_t6133 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
 void ScrollRect_SetNormalizedPosition_m43146 (ScrollRect_t6133 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
 float ScrollRect_RubberDelta_m43147 (Object_t * __this/* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
 void ScrollRect_UpdateBounds_m43148 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
 Bounds_t1005  ScrollRect_GetBounds_m43149 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
 Vector2_t12  ScrollRect_CalculateOffset_m43150 (ScrollRect_t6133 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m43151 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t78 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m43152 (ScrollRect_t6133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
