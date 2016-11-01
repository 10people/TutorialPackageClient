#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LongPressRecognizer
struct LongPressRecognizer_t85;
// System.String
struct String_t;
// LongPressGesture
struct LongPressGesture_t84;
// FingerGestures/IFingerList
struct IFingerList_t30;
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void LongPressRecognizer::.ctor()
 void LongPressRecognizer__ctor_m227 (LongPressRecognizer_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LongPressRecognizer::GetDefaultEventMessageName()
 String_t* LongPressRecognizer_GetDefaultEventMessageName_m228 (LongPressRecognizer_t85 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LongPressRecognizer::OnBegin(LongPressGesture,FingerGestures/IFingerList)
 void LongPressRecognizer_OnBegin_m229 (LongPressRecognizer_t85 * __this, LongPressGesture_t84 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState LongPressRecognizer::OnRecognize(LongPressGesture,FingerGestures/IFingerList)
 int32_t LongPressRecognizer_OnRecognize_m230 (LongPressRecognizer_t85 * __this, LongPressGesture_t84 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
