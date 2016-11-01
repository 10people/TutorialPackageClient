#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UIPanel
struct UIPanel_t1364;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggablePanel::.ctor()
 void UIDraggablePanel__ctor_m37553 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIDraggablePanel::get_panel()
 UIPanel_t1364 * UIDraggablePanel_get_panel_m37554 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIDraggablePanel::get_bounds()
 Bounds_t1005  UIDraggablePanel_get_bounds_m37555 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveHorizontally()
 bool UIDraggablePanel_get_shouldMoveHorizontally_m37556 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveVertically()
 bool UIDraggablePanel_get_shouldMoveVertically_m37557 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMove()
 bool UIDraggablePanel_get_shouldMove_m37558 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggablePanel::get_currentMomentum()
 Vector3_t121  UIDraggablePanel_get_currentMomentum_m37559 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::set_currentMomentum(UnityEngine.Vector3)
 void UIDraggablePanel_set_currentMomentum_m37560 (UIDraggablePanel_t1165 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Awake()
 void UIDraggablePanel_Awake_m37561 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnDestroy()
 void UIDraggablePanel_OnDestroy_m37562 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnPanelChange()
 void UIDraggablePanel_OnPanelChange_m37563 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Start()
 void UIDraggablePanel_Start_m37564 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::RestrictWithinBounds(System.Boolean)
 bool UIDraggablePanel_RestrictWithinBounds_m37565 (UIDraggablePanel_t1165 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::DisableSpring()
 void UIDraggablePanel_DisableSpring_m37566 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::UpdateScrollbars(System.Boolean)
 void UIDraggablePanel_UpdateScrollbars_m37567 (UIDraggablePanel_t1165 * __this, bool ___recalculateBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::SetDragAmount(System.Single,System.Single,System.Boolean)
 void UIDraggablePanel_SetDragAmount_m37568 (UIDraggablePanel_t1165 * __this, float ___x, float ___y, bool ___updateScrollbars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::ResetPosition()
 void UIDraggablePanel_ResetPosition_m37569 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnHorizontalBar()
 void UIDraggablePanel_OnHorizontalBar_m37570 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnVerticalBar()
 void UIDraggablePanel_OnVerticalBar_m37571 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveRelative(UnityEngine.Vector3)
 void UIDraggablePanel_MoveRelative_m37572 (UIDraggablePanel_t1165 * __this, Vector3_t121  ___relative, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveAbsolute(UnityEngine.Vector3)
 void UIDraggablePanel_MoveAbsolute_m37573 (UIDraggablePanel_t1165 * __this, Vector3_t121  ___absolute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Press(System.Boolean)
 void UIDraggablePanel_Press_m37574 (UIDraggablePanel_t1165 * __this, bool ___pressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Drag()
 void UIDraggablePanel_Drag_m37575 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Scroll(System.Single)
 void UIDraggablePanel_Scroll_m37576 (UIDraggablePanel_t1165 * __this, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::LateUpdate()
 void UIDraggablePanel_LateUpdate_m37577 (UIDraggablePanel_t1165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
