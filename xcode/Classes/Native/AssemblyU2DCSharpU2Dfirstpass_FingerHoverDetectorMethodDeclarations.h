#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerHoverDetector
struct FingerHoverDetector_t47;
// FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>
struct FingerEventHandler_t46;
// FingerHoverEvent
struct FingerHoverEvent_t45;
// FingerGestures/Finger
struct Finger_t8;
// FingerHoverPhase
#include "AssemblyU2DCSharpU2Dfirstpass_FingerHoverPhase.h"

// System.Void FingerHoverDetector::.ctor()
 void FingerHoverDetector__ctor_m95 (FingerHoverDetector_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::add_OnFingerHover(FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>)
 void FingerHoverDetector_add_OnFingerHover_m96 (FingerHoverDetector_t47 * __this, FingerEventHandler_t46 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::remove_OnFingerHover(FingerEventDetector`1/FingerEventHandler<FingerHoverEvent>)
 void FingerHoverDetector_remove_OnFingerHover_m97 (FingerHoverDetector_t47 * __this, FingerEventHandler_t46 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::Start()
 void FingerHoverDetector_Start_m98 (FingerHoverDetector_t47 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerHoverDetector::FireEvent(FingerHoverEvent,FingerHoverPhase)
 bool FingerHoverDetector_FireEvent_m99 (FingerHoverDetector_t47 * __this, FingerHoverEvent_t45 * ___e, int32_t ___phase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerHoverDetector::ProcessFinger(FingerGestures/Finger)
 void FingerHoverDetector_ProcessFinger_m100 (FingerHoverDetector_t47 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
