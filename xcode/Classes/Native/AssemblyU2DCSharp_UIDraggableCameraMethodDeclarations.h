#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggableCamera
struct UIDraggableCamera_t5298;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggableCamera::.ctor()
 void UIDraggableCamera__ctor_m37534 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
 Vector2_t12  UIDraggableCamera_get_currentMomentum_m37535 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
 void UIDraggableCamera_set_currentMomentum_m37536 (UIDraggableCamera_t5298 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Awake()
 void UIDraggableCamera_Awake_m37537 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
 void UIDraggableCamera_Start_m37538 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
 Vector3_t121  UIDraggableCamera_CalculateConstrainOffset_m37539 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
 bool UIDraggableCamera_ConstrainToBounds_m37540 (UIDraggableCamera_t5298 * __this, bool ___immediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
 void UIDraggableCamera_Press_m37541 (UIDraggableCamera_t5298 * __this, bool ___isPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
 void UIDraggableCamera_Drag_m37542 (UIDraggableCamera_t5298 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
 void UIDraggableCamera_Scroll_m37543 (UIDraggableCamera_t5298 * __this, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
 void UIDraggableCamera_Update_m37544 (UIDraggableCamera_t5298 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
