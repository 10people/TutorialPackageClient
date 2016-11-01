#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TBDragToMove
struct TBDragToMove_t132;
// DragGesture
struct DragGesture_t81;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TBDragToMove::.ctor()
 void TBDragToMove__ctor_m416 (TBDragToMove_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragToMove::get_Dragging()
 bool TBDragToMove_get_Dragging_m417 (TBDragToMove_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::set_Dragging(System.Boolean)
 void TBDragToMove_set_Dragging_m418 (TBDragToMove_t132 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::Start()
 void TBDragToMove_Start_m419 (TBDragToMove_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragToMove::ProjectScreenPointOnDragPlane(UnityEngine.Vector3,UnityEngine.Vector2,UnityEngine.Vector3&)
 bool TBDragToMove_ProjectScreenPointOnDragPlane_m420 (TBDragToMove_t132 * __this, Vector3_t121  ___refPos, Vector2_t12  ___screenPos, Vector3_t121 * ___worldPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::HandleDrag(DragGesture)
 void TBDragToMove_HandleDrag_m421 (TBDragToMove_t132 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::FixedUpdate()
 void TBDragToMove_FixedUpdate_m422 (TBDragToMove_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::OnDrag(DragGesture)
 void TBDragToMove_OnDrag_m423 (TBDragToMove_t132 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragToMove::OnDisable()
 void TBDragToMove_OnDisable_m424 (TBDragToMove_t132 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
