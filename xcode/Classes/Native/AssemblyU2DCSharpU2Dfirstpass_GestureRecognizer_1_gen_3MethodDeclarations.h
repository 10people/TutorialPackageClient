#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<TwistGesture>
struct GestureRecognizer_1_t996;
// System.Collections.Generic.List`1<TwistGesture>
struct List_1_t9072;
// GestureRecognizer`1/GestureEventHandler<TwistGesture>
struct GestureEventHandler_t9073;
// TwistGesture
struct TwistGesture_t111;
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

// System.Void GestureRecognizer`1<TwistGesture>::.ctor()
 void GestureRecognizer_1__ctor_m61842 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::.cctor()
 void GestureRecognizer_1__cctor_m61843 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m61844 (GestureRecognizer_1_t996 * __this, GestureEventHandler_t9073 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m61845 (GestureRecognizer_1_t996 * __this, GestureEventHandler_t9073 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::Start()
 void GestureRecognizer_1_Start_m4436 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4435 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m61846 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<TwistGesture>::get_Gestures()
 List_1_t9072 * GestureRecognizer_1_get_Gestures_m61847 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<TwistGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4432 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<TwistGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<TwistGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m61848 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TwistGesture>::CreateGesture()
 TwistGesture_t111 * GestureRecognizer_1_CreateGesture_m4437 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<TwistGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4434 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m61849 (GestureRecognizer_1_t996 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TwistGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 TwistGesture_t111 * GestureRecognizer_1_FindGestureByCluster_m4439 (GestureRecognizer_1_t996 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TwistGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 TwistGesture_t111 * GestureRecognizer_1_MatchActiveGestureToCluster_m4440 (GestureRecognizer_1_t996 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TwistGesture>::FindFreeGesture()
 TwistGesture_t111 * GestureRecognizer_1_FindFreeGesture_m4441 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m61850 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::Update()
 void GestureRecognizer_1_Update_m4443 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m61851 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m61852 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m61853 (GestureRecognizer_1_t996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4444 (GestureRecognizer_1_t996 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m61854 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m61855 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<TwistGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4445 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4446 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TwistGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m4433 (GestureRecognizer_1_t996 * __this, TwistGesture_t111 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<TwistGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m61856 (Object_t * __this/* static, unused */, TwistGesture_t111 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
