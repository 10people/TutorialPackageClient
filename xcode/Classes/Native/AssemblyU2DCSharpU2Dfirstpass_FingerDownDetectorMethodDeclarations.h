#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerDownDetector
struct FingerDownDetector_t42;
// FingerEventDetector`1/FingerEventHandler<FingerDownEvent>
struct FingerEventHandler_t41;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerDownDetector::.ctor()
 void FingerDownDetector__ctor_m88 (FingerDownDetector_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::add_OnFingerDown(FingerEventDetector`1/FingerEventHandler<FingerDownEvent>)
 void FingerDownDetector_add_OnFingerDown_m89 (FingerDownDetector_t42 * __this, FingerEventHandler_t41 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::remove_OnFingerDown(FingerEventDetector`1/FingerEventHandler<FingerDownEvent>)
 void FingerDownDetector_remove_OnFingerDown_m90 (FingerDownDetector_t42 * __this, FingerEventHandler_t41 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerDownDetector::ProcessFinger(FingerGestures/Finger)
 void FingerDownDetector_ProcessFinger_m91 (FingerDownDetector_t42 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
