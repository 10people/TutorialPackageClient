#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1<FingerHoverEvent>
struct FingerEventDetector_1_t48;
// FingerHoverEvent
struct FingerHoverEvent_t45;
// System.Type
struct Type_t;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerEventDetector`1<FingerHoverEvent>::.ctor()
 void FingerEventDetector_1__ctor_m4185 (FingerEventDetector_1_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerHoverEvent>::CreateFingerEvent()
 FingerHoverEvent_t45 * FingerEventDetector_1_CreateFingerEvent_m4193 (FingerEventDetector_1_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type FingerEventDetector`1<FingerHoverEvent>::GetEventType()
 Type_t * FingerEventDetector_1_GetEventType_m4192 (FingerEventDetector_1_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerHoverEvent>::Start()
 void FingerEventDetector_1_Start_m4186 (FingerEventDetector_1_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerHoverEvent>::InitFingerEventsList(System.Int32)
 void FingerEventDetector_1_InitFingerEventsList_m4194 (FingerEventDetector_1_t48 * __this, int32_t ___fingersCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerHoverEvent>::GetEvent(FingerGestures/Finger)
 FingerHoverEvent_t45 * FingerEventDetector_1_GetEvent_m4191 (FingerEventDetector_1_t48 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerHoverEvent>::GetEvent(System.Int32)
 FingerHoverEvent_t45 * FingerEventDetector_1_GetEvent_m4195 (FingerEventDetector_1_t48 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
