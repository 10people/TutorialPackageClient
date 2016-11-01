#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEventDetector
struct FingerEventDetector_t7;
// FingerGestures/Finger
struct Finger_t8;
// System.Type
struct Type_t;
// FingerEvent
struct FingerEvent_t10;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerEventDetector::.ctor()
 void FingerEventDetector__ctor_m16 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::ProcessFinger(FingerGestures/Finger)
// System.Type FingerEventDetector::GetEventType()
// System.Void FingerEventDetector::Awake()
 void FingerEventDetector_Awake_m17 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::Start()
 void FingerEventDetector_Start_m18 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::Update()
 void FingerEventDetector_Update_m19 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::ProcessFingers()
 void FingerEventDetector_ProcessFingers_m20 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::TrySendMessage(FingerEvent)
 void FingerEventDetector_TrySendMessage_m21 (FingerEventDetector_t7 * __this, FingerEvent_t10 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit FingerEventDetector::get_LastHit()
 RaycastHit_t11  FingerEventDetector_get_LastHit_m22 (FingerEventDetector_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FingerEventDetector::PickObject(UnityEngine.Vector2)
 GameObject_t9 * FingerEventDetector_PickObject_m23 (FingerEventDetector_t7 * __this, Vector2_t12  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEventDetector::UpdateSelection(FingerEvent)
 void FingerEventDetector_UpdateSelection_m24 (FingerEventDetector_t7 * __this, FingerEvent_t10 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
