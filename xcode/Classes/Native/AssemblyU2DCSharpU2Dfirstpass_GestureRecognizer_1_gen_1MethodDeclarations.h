#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<SwipeGesture>
struct GestureRecognizer_1_t992;
// System.Collections.Generic.List`1<SwipeGesture>
struct List_1_t9024;
// GestureRecognizer`1/GestureEventHandler<SwipeGesture>
struct GestureEventHandler_t9025;
// SwipeGesture
struct SwipeGesture_t105;
// FingerGestures/IFingerList
struct IFingerList_t30;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Type
struct Type_t;
// Gesture
struct Gesture_t3;
// FingerClusterManager/Cluster
struct Cluster_t31;
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void GestureRecognizer`1<SwipeGesture>::.ctor()
 void GestureRecognizer_1__ctor_m61440 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::.cctor()
 void GestureRecognizer_1__cctor_m61441 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m61442 (GestureRecognizer_1_t992 * __this, GestureEventHandler_t9025 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m61443 (GestureRecognizer_1_t992 * __this, GestureEventHandler_t9025 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::Start()
 void GestureRecognizer_1_Start_m4398 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4397 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m61444 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<SwipeGesture>::get_Gestures()
 List_1_t9024 * GestureRecognizer_1_get_Gestures_m61445 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<SwipeGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4392 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<SwipeGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<SwipeGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m4399 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<SwipeGesture>::CreateGesture()
 SwipeGesture_t105 * GestureRecognizer_1_CreateGesture_m4400 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<SwipeGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4396 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m61446 (GestureRecognizer_1_t992 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<SwipeGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 SwipeGesture_t105 * GestureRecognizer_1_FindGestureByCluster_m4402 (GestureRecognizer_1_t992 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<SwipeGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 SwipeGesture_t105 * GestureRecognizer_1_MatchActiveGestureToCluster_m4403 (GestureRecognizer_1_t992 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<SwipeGesture>::FindFreeGesture()
 SwipeGesture_t105 * GestureRecognizer_1_FindFreeGesture_m4404 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m4405 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::Update()
 void GestureRecognizer_1_Update_m4406 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m61447 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m61448 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m61449 (GestureRecognizer_1_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4407 (GestureRecognizer_1_t992 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m61450 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m61451 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<SwipeGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4408 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4409 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<SwipeGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m61452 (GestureRecognizer_1_t992 * __this, SwipeGesture_t105 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<SwipeGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m61453 (Object_t * __this/* static, unused */, SwipeGesture_t105 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
