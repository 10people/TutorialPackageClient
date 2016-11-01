#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PinchRecognizer
struct PinchRecognizer_t88;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// PinchGesture
struct PinchGesture_t87;
// FingerGestures/IFingerList
struct IFingerList_t30;
// FingerGestures/Finger
struct Finger_t8;
// GestureResetMode
#include "AssemblyU2DCSharpU2Dfirstpass_GestureResetMode.h"
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void PinchRecognizer::.ctor()
 void PinchRecognizer__ctor_m236 (PinchRecognizer_t88 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PinchRecognizer::GetDefaultEventMessageName()
 String_t* PinchRecognizer_GetDefaultEventMessageName_m237 (PinchRecognizer_t88 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PinchRecognizer::get_RequiredFingerCount()
 int32_t PinchRecognizer_get_RequiredFingerCount_m238 (PinchRecognizer_t88 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PinchRecognizer::set_RequiredFingerCount(System.Int32)
 void PinchRecognizer_set_RequiredFingerCount_m239 (PinchRecognizer_t88 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::get_SupportFingerClustering()
 bool PinchRecognizer_get_SupportFingerClustering_m240 (PinchRecognizer_t88 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PinchRecognizer::GetDefaultSelectionForSendMessage(PinchGesture)
 GameObject_t9 * PinchRecognizer_GetDefaultSelectionForSendMessage_m241 (PinchRecognizer_t88 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureResetMode PinchRecognizer::GetDefaultResetMode()
 int32_t PinchRecognizer_GetDefaultResetMode_m242 (PinchRecognizer_t88 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::CanBegin(PinchGesture,FingerGestures/IFingerList)
 bool PinchRecognizer_CanBegin_m243 (PinchRecognizer_t88 * __this, PinchGesture_t87 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PinchRecognizer::OnBegin(PinchGesture,FingerGestures/IFingerList)
 void PinchRecognizer_OnBegin_m244 (PinchRecognizer_t88 * __this, PinchGesture_t87 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState PinchRecognizer::OnRecognize(PinchGesture,FingerGestures/IFingerList)
 int32_t PinchRecognizer_OnRecognize_m245 (PinchRecognizer_t88 * __this, PinchGesture_t87 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PinchRecognizer::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger)
 bool PinchRecognizer_FingersMovedInOppositeDirections_m246 (PinchRecognizer_t88 * __this, Finger_t8 * ___finger0, Finger_t8 * ___finger1, MethodInfo* method) IL2CPP_METHOD_ATTR;
