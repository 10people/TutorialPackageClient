#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SwipeRecognizer
struct SwipeRecognizer_t106;
// System.String
struct String_t;
// SwipeGesture
struct SwipeGesture_t105;
// FingerGestures/IFingerList
struct IFingerList_t30;
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"
// FingerGestures/SwipeDirection
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_SwipeDirection.h"

// System.Void SwipeRecognizer::.ctor()
 void SwipeRecognizer__ctor_m296 (SwipeRecognizer_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SwipeRecognizer::GetDefaultEventMessageName()
 String_t* SwipeRecognizer_GetDefaultEventMessageName_m297 (SwipeRecognizer_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeRecognizer::CanBegin(SwipeGesture,FingerGestures/IFingerList)
 bool SwipeRecognizer_CanBegin_m298 (SwipeRecognizer_t106 * __this, SwipeGesture_t105 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeRecognizer::OnBegin(SwipeGesture,FingerGestures/IFingerList)
 void SwipeRecognizer_OnBegin_m299 (SwipeRecognizer_t106 * __this, SwipeGesture_t105 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState SwipeRecognizer::OnRecognize(SwipeGesture,FingerGestures/IFingerList)
 int32_t SwipeRecognizer_OnRecognize_m300 (SwipeRecognizer_t106 * __this, SwipeGesture_t105 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeRecognizer::IsValidDirection(FingerGestures/SwipeDirection)
 bool SwipeRecognizer_IsValidDirection_m301 (SwipeRecognizer_t106 * __this, int32_t ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
