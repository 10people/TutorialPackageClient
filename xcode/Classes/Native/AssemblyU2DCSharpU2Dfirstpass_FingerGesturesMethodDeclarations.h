#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures
struct FingerGestures_t75;
// FingerClusterManager
struct FingerClusterManager_t33;
// FGInputProvider
struct FGInputProvider_t60;
// FingerGestures/IFingerList
struct IFingerList_t30;
// System.Collections.Generic.List`1<GestureRecognizer>
struct List_1_t63;
// FingerGestures/GlobalTouchFilterDelegate
struct GlobalTouchFilterDelegate_t74;
// Gesture/EventHandler
struct EventHandler_t22;
// FingerEventDetector`1/FingerEventHandler<FingerEvent>
struct FingerEventHandler_t80;
// Gesture
struct Gesture_t3;
// FingerEvent
struct FingerEvent_t10;
// FingerGestures/Finger
struct Finger_t8;
// GestureRecognizer
struct GestureRecognizer_t25;
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// FingerGestures/Finger[]
struct FingerU5BU5D_t76;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// FingerGestures/SwipeDirection
#include "AssemblyU2DCSharpU2Dfirstpass_FingerGestures_SwipeDirection.h"

// System.Void FingerGestures::.ctor()
 void FingerGestures__ctor_m173 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::.cctor()
 void FingerGestures__cctor_m174 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::add_OnGestureEvent(Gesture/EventHandler)
 void FingerGestures_add_OnGestureEvent_m175 (Object_t * __this/* static, unused */, EventHandler_t22 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::remove_OnGestureEvent(Gesture/EventHandler)
 void FingerGestures_remove_OnGestureEvent_m176 (Object_t * __this/* static, unused */, EventHandler_t22 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::add_OnFingerEvent(FingerEventDetector`1/FingerEventHandler<FingerEvent>)
 void FingerGestures_add_OnFingerEvent_m177 (Object_t * __this/* static, unused */, FingerEventHandler_t80 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::remove_OnFingerEvent(FingerEventDetector`1/FingerEventHandler<FingerEvent>)
 void FingerGestures_remove_OnFingerEvent_m178 (Object_t * __this/* static, unused */, FingerEventHandler_t80 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::FireEvent(Gesture)
 void FingerGestures_FireEvent_m179 (Object_t * __this/* static, unused */, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::FireEvent(FingerEvent)
 void FingerGestures_FireEvent_m180 (Object_t * __this/* static, unused */, FingerEvent_t10 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerClusterManager FingerGestures::get_DefaultClusterManager()
 FingerClusterManager_t33 * FingerGestures_get_DefaultClusterManager_m181 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures FingerGestures::get_Instance()
 FingerGestures_t75 * FingerGestures_get_Instance_m182 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Init()
 void FingerGestures_Init_m183 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FGInputProvider FingerGestures::get_InputProvider()
 FGInputProvider_t60 * FingerGestures_get_InputProvider_m184 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitInputProvider()
 void FingerGestures_InitInputProvider_m185 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InstallInputProvider(FGInputProvider)
 void FingerGestures_InstallInputProvider_m186 (FingerGestures_t75 * __this, FGInputProvider_t60 * ___inputProviderPrefab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures::get_MaxFingers()
 int32_t FingerGestures_get_MaxFingers_m187 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures::GetFinger(System.Int32)
 Finger_t8 * FingerGestures_GetFinger_m188 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList FingerGestures::get_Touches()
 Object_t * FingerGestures_get_Touches_m189 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GestureRecognizer> FingerGestures::get_RegisteredGestureRecognizers()
 List_1_t63 * FingerGestures_get_RegisteredGestureRecognizers_m190 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Register(GestureRecognizer)
 void FingerGestures_Register_m191 (Object_t * __this/* static, unused */, GestureRecognizer_t25 * ___recognizer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Unregister(GestureRecognizer)
 void FingerGestures_Unregister_m192 (Object_t * __this/* static, unused */, GestureRecognizer_t25 * ___recognizer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::get_PixelDistanceScale()
 float FingerGestures_get_PixelDistanceScale_m193 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::set_PixelDistanceScale(System.Single)
 void FingerGestures_set_PixelDistanceScale_m194 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::GetAdjustedPixelDistance(System.Single)
 float FingerGestures_GetAdjustedPixelDistance_m195 (Object_t * __this/* static, unused */, float ___rawPixelDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::IsRetinaDisplay()
 bool FingerGestures_IsRetinaDisplay_m196 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Awake()
 void FingerGestures_Awake_m197 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Start()
 void FingerGestures_Start_m198 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::OnEnable()
 void FingerGestures_OnEnable_m199 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::CheckInit()
 void FingerGestures_CheckInit_m200 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::Update()
 void FingerGestures_Update_m201 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitFingers(System.Int32)
 void FingerGestures_InitFingers_m202 (FingerGestures_t75 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::UpdateFingers()
 void FingerGestures_UpdateFingers_m203 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/GlobalTouchFilterDelegate FingerGestures::get_GlobalTouchFilter()
 GlobalTouchFilterDelegate_t74 * FingerGestures_get_GlobalTouchFilter_m204 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::set_GlobalTouchFilter(FingerGestures/GlobalTouchFilterDelegate)
 void FingerGestures_set_GlobalTouchFilter_m205 (Object_t * __this/* static, unused */, GlobalTouchFilterDelegate_t74 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::ShouldProcessTouch(System.Int32,UnityEngine.Vector2)
 bool FingerGestures_ShouldProcessTouch_m206 (FingerGestures_t75 * __this, int32_t ___fingerIndex, Vector2_t12  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform FingerGestures::CreateNode(System.String,UnityEngine.Transform)
 Transform_t78 * FingerGestures_CreateNode_m207 (FingerGestures_t75 * __this, String_t* ___name, Transform_t78 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures::InitNodes()
 void FingerGestures_InitNodes_m208 (FingerGestures_t75 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/SwipeDirection FingerGestures::GetSwipeDirection(UnityEngine.Vector2,System.Single)
 int32_t FingerGestures_GetSwipeDirection_m209 (Object_t * __this/* static, unused */, Vector2_t12  ___dir, float ___tolerance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/SwipeDirection FingerGestures::GetSwipeDirection(UnityEngine.Vector2)
 int32_t FingerGestures_GetSwipeDirection_m210 (Object_t * __this/* static, unused */, Vector2_t12  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::UsingUnityRemote()
 bool FingerGestures_UsingUnityRemote_m211 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::AllFingersMoving(FingerGestures/Finger[])
 bool FingerGestures_AllFingersMoving_m212 (Object_t * __this/* static, unused */, FingerU5BU5D_t76* ___fingers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures::FingersMovedInOppositeDirections(FingerGestures/Finger,FingerGestures/Finger,System.Single)
 bool FingerGestures_FingersMovedInOppositeDirections_m213 (Object_t * __this/* static, unused */, Finger_t8 * ___finger0, Finger_t8 * ___finger1, float ___minDOT, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
 float FingerGestures_SignedAngle_m214 (Object_t * __this/* static, unused */, Vector2_t12  ___from, Vector2_t12  ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures::NormalizeAngle360(System.Single)
 float FingerGestures_NormalizeAngle360_m215 (Object_t * __this/* static, unused */, float ___angleInDegrees, MethodInfo* method) IL2CPP_METHOD_ATTR;
