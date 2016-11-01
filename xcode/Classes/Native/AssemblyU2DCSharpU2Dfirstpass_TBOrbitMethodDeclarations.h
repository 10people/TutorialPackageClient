#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TBOrbit
struct TBOrbit_t125;
// DragGesture
struct DragGesture_t81;
// PinchGesture
struct PinchGesture_t87;
// GestureRecognizer
struct GestureRecognizer_t25;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TBOrbit::.ctor()
 void TBOrbit__ctor_m363 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Distance()
 float TBOrbit_get_Distance_m364 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealDistance()
 float TBOrbit_get_IdealDistance_m365 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealDistance(System.Single)
 void TBOrbit_set_IdealDistance_m366 (TBOrbit_t125 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Yaw()
 float TBOrbit_get_Yaw_m367 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealYaw()
 float TBOrbit_get_IdealYaw_m368 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealYaw(System.Single)
 void TBOrbit_set_IdealYaw_m369 (TBOrbit_t125 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_Pitch()
 float TBOrbit_get_Pitch_m370 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::get_IdealPitch()
 float TBOrbit_get_IdealPitch_m371 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealPitch(System.Single)
 void TBOrbit_set_IdealPitch_m372 (TBOrbit_t125 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBOrbit::get_IdealPanOffset()
 Vector3_t121  TBOrbit_get_IdealPanOffset_m373 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::set_IdealPanOffset(UnityEngine.Vector3)
 void TBOrbit_set_IdealPanOffset_m374 (TBOrbit_t125 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TBOrbit::get_PanOffset()
 Vector3_t121  TBOrbit_get_PanOffset_m375 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::InstallGestureRecognizers()
 void TBOrbit_InstallGestureRecognizers_m376 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::Start()
 void TBOrbit_Start_m377 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnDrag(DragGesture)
 void TBOrbit_OnDrag_m378 (TBOrbit_t125 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnPinch(PinchGesture)
 void TBOrbit_OnPinch_m379 (TBOrbit_t125 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::OnTwoFingerDrag(DragGesture)
 void TBOrbit_OnTwoFingerDrag_m380 (TBOrbit_t125 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::Apply()
 void TBOrbit_Apply_m381 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::LateUpdate()
 void TBOrbit_LateUpdate_m382 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TBOrbit::ClampAngle(System.Single,System.Single,System.Single)
 float TBOrbit_ClampAngle_m383 (Object_t * __this/* static, unused */, float ___angle, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBOrbit::ResetPanning()
 void TBOrbit_ResetPanning_m384 (TBOrbit_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__4(GestureRecognizer)
 bool TBOrbit_U3CInstallGestureRecognizersU3Em__4_m385 (Object_t * __this/* static, unused */, GestureRecognizer_t25 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__5(GestureRecognizer)
 bool TBOrbit_U3CInstallGestureRecognizersU3Em__5_m386 (Object_t * __this/* static, unused */, GestureRecognizer_t25 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TBOrbit::<InstallGestureRecognizers>m__6(GestureRecognizer)
 bool TBOrbit_U3CInstallGestureRecognizersU3Em__6_m387 (Object_t * __this/* static, unused */, GestureRecognizer_t25 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
