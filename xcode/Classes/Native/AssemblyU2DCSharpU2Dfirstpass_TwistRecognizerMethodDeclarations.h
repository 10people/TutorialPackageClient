#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwistRecognizer
struct TwistRecognizer_t112;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// TwistGesture
struct TwistGesture_t111;
// FingerGestures/IFingerList
struct IFingerList_t30;
// FingerGestures/Finger
struct Finger_t8;
// GestureResetMode
#include "AssemblyU2DCSharpU2Dfirstpass_GestureResetMode.h"
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TwistRecognizer::.ctor()
 void TwistRecognizer__ctor_m321 (TwistRecognizer_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwistRecognizer::GetDefaultEventMessageName()
 String_t* TwistRecognizer_GetDefaultEventMessageName_m322 (TwistRecognizer_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TwistRecognizer::get_RequiredFingerCount()
 int32_t TwistRecognizer_get_RequiredFingerCount_m323 (TwistRecognizer_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwistRecognizer::set_RequiredFingerCount(System.Int32)
 void TwistRecognizer_set_RequiredFingerCount_m324 (TwistRecognizer_t112 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::get_SupportFingerClustering()
 bool TwistRecognizer_get_SupportFingerClustering_m325 (TwistRecognizer_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode TwistRecognizer::GetDefaultResetMode()
 int32_t TwistRecognizer_GetDefaultResetMode_m326 (TwistRecognizer_t112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TwistRecognizer::GetDefaultSelectionForSendMessage(TwistGesture)
 GameObject_t9 * TwistRecognizer_GetDefaultSelectionForSendMessage_m327 (TwistRecognizer_t112 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::CanBegin(TwistGesture,FingerGestures/IFingerList)
 bool TwistRecognizer_CanBegin_m328 (TwistRecognizer_t112 * __this, TwistGesture_t111 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TwistRecognizer::OnBegin(TwistGesture,FingerGestures/IFingerList)
 void TwistRecognizer_OnBegin_m329 (TwistRecognizer_t112 * __this, TwistGesture_t111 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TwistRecognizer::OnRecognize(TwistGesture,FingerGestures/IFingerList)
 int32_t TwistRecognizer_OnRecognize_m330 (TwistRecognizer_t112 * __this, TwistGesture_t111 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TwistRecognizer::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger)
 bool TwistRecognizer_FingersMovedInOppositeDirections_m331 (TwistRecognizer_t112 * __this, Finger_t8 * ___finger0, Finger_t8 * ___finger1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TwistRecognizer::SignedAngularGap(FingerGestures/Finger,FingerGestures/Finger,UnityEngine.Vector2,UnityEngine.Vector2)
 float TwistRecognizer_SignedAngularGap_m332 (Object_t * __this/* static, unused */, Finger_t8 * ___finger0, Finger_t8 * ___finger1, Vector2_t12  ___refPos0, Vector2_t12  ___refPos1, MethodInfo* method) IL2CPP_METHOD_ATTR;
