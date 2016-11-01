#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DragRecognizer
struct DragRecognizer_t82;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// DragGesture
struct DragGesture_t81;
// FingerGestures/IFingerList
struct IFingerList_t30;
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void DragRecognizer::.ctor()
 void DragRecognizer__ctor_m220 (DragRecognizer_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragRecognizer::GetDefaultEventMessageName()
 String_t* DragRecognizer_GetDefaultEventMessageName_m221 (DragRecognizer_t82 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DragRecognizer::GetDefaultSelectionForSendMessage(DragGesture)
 GameObject_t9 * DragRecognizer_GetDefaultSelectionForSendMessage_m222 (DragRecognizer_t82 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragRecognizer::CanBegin(DragGesture,FingerGestures/IFingerList)
 bool DragRecognizer_CanBegin_m223 (DragRecognizer_t82 * __this, DragGesture_t81 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragRecognizer::OnBegin(DragGesture,FingerGestures/IFingerList)
 void DragRecognizer_OnBegin_m224 (DragRecognizer_t82 * __this, DragGesture_t81 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState DragRecognizer::OnRecognize(DragGesture,FingerGestures/IFingerList)
 int32_t DragRecognizer_OnRecognize_m225 (DragRecognizer_t82 * __this, DragGesture_t81 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
