#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerMotionDetector
struct FingerMotionDetector_t53;
// FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>
struct FingerEventHandler_t52;
// FingerMotionEvent
struct FingerMotionEvent_t50;
// FingerGestures/Finger
struct Finger_t8;
// FingerMotionDetector/EventType
#include "AssemblyU2DCSharpU2Dfirstpass_FingerMotionDetector_EventType.h"
// FingerMotionPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerMotionPhase.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerMotionDetector::.ctor()
 void FingerMotionDetector__ctor_m107 (FingerMotionDetector_t53 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::add_OnFingerMove(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
 void FingerMotionDetector_add_OnFingerMove_m108 (FingerMotionDetector_t53 * __this, FingerEventHandler_t52 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::remove_OnFingerMove(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
 void FingerMotionDetector_remove_OnFingerMove_m109 (FingerMotionDetector_t53 * __this, FingerEventHandler_t52 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::add_OnFingerStationary(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
 void FingerMotionDetector_add_OnFingerStationary_m110 (FingerMotionDetector_t53 * __this, FingerEventHandler_t52 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::remove_OnFingerStationary(FingerEventDetector`1/FingerEventHandler<FingerMotionEvent>)
 void FingerMotionDetector_remove_OnFingerStationary_m111 (FingerMotionDetector_t53 * __this, FingerEventHandler_t52 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerMotionDetector::FireEvent(FingerMotionEvent,FingerMotionDetector/EventType,FingerMotionPhase,UnityEngine.Vector2,System.Boolean)
 bool FingerMotionDetector_FireEvent_m112 (FingerMotionDetector_t53 * __this, FingerMotionEvent_t50 * ___e, int32_t ___eventType, int32_t ___phase, Vector2_t12  ___position, bool ___updateSelection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerMotionDetector::ProcessFinger(FingerGestures/Finger)
 void FingerMotionDetector_ProcessFinger_m113 (FingerMotionDetector_t53 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
