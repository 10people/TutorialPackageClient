#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Gesture
struct Gesture_t3;
// FingerGestures/FingerList
struct FingerList_t26;
// GestureRecognizer
struct GestureRecognizer_t25;
// UnityEngine.GameObject
struct GameObject_t9;
// Gesture/EventHandler
struct EventHandler_t22;
// ScreenRaycaster
struct ScreenRaycaster_t17;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void Gesture::.ctor()
 void Gesture__ctor_m29 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::add_OnStateChanged(Gesture/EventHandler)
 void Gesture_add_OnStateChanged_m30 (Gesture_t3 * __this, EventHandler_t22 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::remove_OnStateChanged(Gesture/EventHandler)
 void Gesture_remove_OnStateChanged_m31 (Gesture_t3 * __this, EventHandler_t22 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/FingerList Gesture::get_Fingers()
 FingerList_t26 * Gesture_get_Fingers_m32 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Fingers(FingerGestures/FingerList)
 void Gesture_set_Fingers_m33 (Gesture_t3 * __this, FingerList_t26 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognizer Gesture::get_Recognizer()
 GestureRecognizer_t25 * Gesture_get_Recognizer_m34 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Recognizer(GestureRecognizer)
 void Gesture_set_Recognizer_m35 (Gesture_t3 * __this, GestureRecognizer_t25 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Gesture::get_StartTime()
 float Gesture_get_StartTime_m36 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartTime(System.Single)
 void Gesture_set_StartTime_m37 (Gesture_t3 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Gesture::get_StartPosition()
 Vector2_t12  Gesture_get_StartPosition_m38 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartPosition(UnityEngine.Vector2)
 void Gesture_set_StartPosition_m39 (Gesture_t3 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Gesture::get_Position()
 Vector2_t12  Gesture_get_Position_m40 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Position(UnityEngine.Vector2)
 void Gesture_set_Position_m41 (Gesture_t3 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState Gesture::get_State()
 int32_t Gesture_get_State_m42 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_State(GestureRecognitionState)
 void Gesture_set_State_m43 (Gesture_t3 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState Gesture::get_PreviousState()
 int32_t Gesture_get_PreviousState_m44 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Gesture::get_ElapsedTime()
 float Gesture_get_ElapsedTime_m45 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::get_StartSelection()
 GameObject_t9 * Gesture_get_StartSelection_m46 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_StartSelection(UnityEngine.GameObject)
 void Gesture_set_StartSelection_m47 (Gesture_t3 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::get_Selection()
 GameObject_t9 * Gesture_get_Selection_m48 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Selection(UnityEngine.GameObject)
 void Gesture_set_Selection_m49 (Gesture_t3 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit Gesture::get_Hit()
 RaycastHit_t11  Gesture_get_Hit_m50 (Gesture_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::set_Hit(UnityEngine.RaycastHit)
 void Gesture_set_Hit_m51 (Gesture_t3 * __this, RaycastHit_t11  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Gesture::PickObject(ScreenRaycaster,UnityEngine.Vector2)
 GameObject_t9 * Gesture_PickObject_m52 (Gesture_t3 * __this, ScreenRaycaster_t17 * ___raycaster, Vector2_t12  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::PickStartSelection(ScreenRaycaster)
 void Gesture_PickStartSelection_m53 (Gesture_t3 * __this, ScreenRaycaster_t17 * ___raycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gesture::PickSelection(ScreenRaycaster)
 void Gesture_PickSelection_m54 (Gesture_t3 * __this, ScreenRaycaster_t17 * ___raycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
