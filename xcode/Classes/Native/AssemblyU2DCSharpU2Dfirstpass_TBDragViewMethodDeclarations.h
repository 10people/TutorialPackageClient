#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TBDragView
struct TBDragView_t119;
// DragGesture
struct DragGesture_t81;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TBDragView::.ctor()
 void TBDragView__ctor_m349 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Awake()
 void TBDragView_Awake_m350 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Start()
 void TBDragView_Start_m351 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBDragView::get_Dragging()
 bool TBDragView_get_Dragging_m352 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::OnDrag(DragGesture)
 void TBDragView_OnDrag_m353 (TBDragView_t119 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::Update()
 void TBDragView_Update_m354 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBDragView::NormalizePitch(System.Single)
 float TBDragView_NormalizePitch_m355 (Object_t * __this/* static, unused */, float ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TBDragView::get_IdealRotation()
 Quaternion_t120  TBDragView_get_IdealRotation_m356 (TBDragView_t119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::set_IdealRotation(UnityEngine.Quaternion)
 void TBDragView_set_IdealRotation_m357 (TBDragView_t119 * __this, Quaternion_t120  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBDragView::LookAt(UnityEngine.Vector3)
 void TBDragView_LookAt_m358 (TBDragView_t119 * __this, Vector3_t121  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
