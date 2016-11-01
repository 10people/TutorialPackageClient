#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerUpDetector
struct FingerUpDetector_t57;
// FingerEventDetector`1/FingerEventHandler<FingerUpEvent>
struct FingerEventHandler_t56;
// FingerGestures/Finger
struct Finger_t8;

// System.Void FingerUpDetector::.ctor()
 void FingerUpDetector__ctor_m117 (FingerUpDetector_t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::add_OnFingerUp(FingerEventDetector`1/FingerEventHandler<FingerUpEvent>)
 void FingerUpDetector_add_OnFingerUp_m118 (FingerUpDetector_t57 * __this, FingerEventHandler_t56 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::remove_OnFingerUp(FingerEventDetector`1/FingerEventHandler<FingerUpEvent>)
 void FingerUpDetector_remove_OnFingerUp_m119 (FingerUpDetector_t57 * __this, FingerEventHandler_t56 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerUpDetector::ProcessFinger(FingerGestures/Finger)
 void FingerUpDetector_ProcessFinger_m120 (FingerUpDetector_t57 * __this, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
