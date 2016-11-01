#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1<FingerMotionEvent>
struct FingerEventDetector_1_t54;
// FingerMotionEvent
struct FingerMotionEvent_t50;
// System.Type
struct Type_t;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerEventDetector`1<FingerMotionEvent>::.ctor()
 void FingerEventDetector_1__ctor_m4197 (FingerEventDetector_1_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerMotionEvent>::CreateFingerEvent()
 FingerMotionEvent_t50 * FingerEventDetector_1_CreateFingerEvent_m4202 (FingerEventDetector_1_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type FingerEventDetector`1<FingerMotionEvent>::GetEventType()
 Type_t * FingerEventDetector_1_GetEventType_m4200 (FingerEventDetector_1_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerMotionEvent>::Start()
 void FingerEventDetector_1_Start_m4201 (FingerEventDetector_1_t54 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerMotionEvent>::InitFingerEventsList(System.Int32)
 void FingerEventDetector_1_InitFingerEventsList_m4203 (FingerEventDetector_1_t54 * __this, int32_t ___fingersCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerMotionEvent>::GetEvent(FingerGestures/Finger)
 FingerMotionEvent_t50 * FingerEventDetector_1_GetEvent_m4199 (FingerEventDetector_1_t54 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerMotionEvent>::GetEvent(System.Int32)
 FingerMotionEvent_t50 * FingerEventDetector_1_GetEvent_m4204 (FingerEventDetector_1_t54 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
