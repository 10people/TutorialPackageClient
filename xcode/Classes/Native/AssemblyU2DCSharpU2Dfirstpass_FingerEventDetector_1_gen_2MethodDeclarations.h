#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector`1<FingerUpEvent>
struct FingerEventDetector_1_t58;
// FingerUpEvent
struct FingerUpEvent_t55;
// System.Type
struct Type_t;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerEventDetector`1<FingerUpEvent>::.ctor()
 void FingerEventDetector_1__ctor_m4205 (FingerEventDetector_1_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerUpEvent>::CreateFingerEvent()
 FingerUpEvent_t55 * FingerEventDetector_1_CreateFingerEvent_m4210 (FingerEventDetector_1_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type FingerEventDetector`1<FingerUpEvent>::GetEventType()
 Type_t * FingerEventDetector_1_GetEventType_m4208 (FingerEventDetector_1_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerUpEvent>::Start()
 void FingerEventDetector_1_Start_m4209 (FingerEventDetector_1_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector`1<FingerUpEvent>::InitFingerEventsList(System.Int32)
 void FingerEventDetector_1_InitFingerEventsList_m4211 (FingerEventDetector_1_t58 * __this, int32_t ___fingersCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerUpEvent>::GetEvent(FingerGestures/Finger)
 FingerUpEvent_t55 * FingerEventDetector_1_GetEvent_m4206 (FingerEventDetector_1_t58 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T FingerEventDetector`1<FingerUpEvent>::GetEvent(System.Int32)
 FingerUpEvent_t55 * FingerEventDetector_1_GetEvent_m4212 (FingerEventDetector_1_t58 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
