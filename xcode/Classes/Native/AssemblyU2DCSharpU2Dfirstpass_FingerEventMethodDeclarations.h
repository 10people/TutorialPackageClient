#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerEvent
struct FingerEvent_t10;
// System.String
struct String_t;
// FingerEventDetector
struct FingerEventDetector_t7;
// FingerGestures/Finger
struct Finger_t8;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void FingerEvent::.ctor()
 void FingerEvent__ctor_m3 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FingerEvent::get_Name()
 String_t* FingerEvent_get_Name_m4 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Name(System.String)
 void FingerEvent_set_Name_m5 (FingerEvent_t10 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerEventDetector FingerEvent::get_Detector()
 FingerEventDetector_t7 * FingerEvent_get_Detector_m6 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Detector(FingerEventDetector)
 void FingerEvent_set_Detector_m7 (FingerEvent_t10 * __this, FingerEventDetector_t7 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerEvent::get_Finger()
 Finger_t8 * FingerEvent_get_Finger_m8 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Finger(FingerGestures/Finger)
 void FingerEvent_set_Finger_m9 (FingerEvent_t10 * __this, Finger_t8 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerEvent::get_Position()
 Vector2_t12  FingerEvent_get_Position_m10 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Position(UnityEngine.Vector2)
 void FingerEvent_set_Position_m11 (FingerEvent_t10 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FingerEvent::get_Selection()
 GameObject_t9 * FingerEvent_get_Selection_m12 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Selection(UnityEngine.GameObject)
 void FingerEvent_set_Selection_m13 (FingerEvent_t10 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit FingerEvent::get_Hit()
 RaycastHit_t11  FingerEvent_get_Hit_m14 (FingerEvent_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerEvent::set_Hit(UnityEngine.RaycastHit)
 void FingerEvent_set_Hit_m15 (FingerEvent_t10 * __this, RaycastHit_t11  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
