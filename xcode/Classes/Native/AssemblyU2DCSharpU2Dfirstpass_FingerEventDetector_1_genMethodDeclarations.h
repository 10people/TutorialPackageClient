#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1<FingerDownEvent>
struct FingerEventDetector_1_t43;
// FingerDownEvent
struct FingerDownEvent_t40;
// System.Type
struct Type_t;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerEventDetector`1<FingerDownEvent>::.ctor()
 void FingerEventDetector_1__ctor_m4178 (FingerEventDetector_1_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerDownEvent>::CreateFingerEvent()
 FingerDownEvent_t40 * FingerEventDetector_1_CreateFingerEvent_m4183 (FingerEventDetector_1_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type FingerEventDetector`1<FingerDownEvent>::GetEventType()
 Type_t * FingerEventDetector_1_GetEventType_m4181 (FingerEventDetector_1_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerDownEvent>::Start()
 void FingerEventDetector_1_Start_m4182 (FingerEventDetector_1_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerDownEvent>::InitFingerEventsList(System.Int32)
 void FingerEventDetector_1_InitFingerEventsList_m4184 (FingerEventDetector_1_t43 * __this, int32_t ___fingersCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerDownEvent>::GetEvent(FingerGestures/Finger)
 FingerDownEvent_t40 * FingerEventDetector_1_GetEvent_m58564 (FingerEventDetector_1_t43 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerDownEvent>::GetEvent(System.Int32)
 FingerDownEvent_t40 * FingerEventDetector_1_GetEvent_m4179 (FingerEventDetector_1_t43 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
