#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<PointCloudGesture>
struct GestureRecognizer_1_t8964;
// System.Collections.Generic.List`1<PointCloudGesture>
struct List_1_t8965;
// GestureRecognizer`1/GestureEventHandler<PointCloudGesture>
struct GestureEventHandler_t8966;
// PointCloudGesture
struct PointCloudGesture_t95;
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

// System.Void GestureRecognizer`1<PointCloudGesture>::.ctor()
 void GestureRecognizer_1__ctor_m60907 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::.cctor()
 void GestureRecognizer_1__cctor_m60908 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m60909 (GestureRecognizer_1_t8964 * __this, GestureEventHandler_t8966 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m60910 (GestureRecognizer_1_t8964 * __this, GestureEventHandler_t8966 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::Start()
 void GestureRecognizer_1_Start_m4378 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4377 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m60911 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<PointCloudGesture>::get_Gestures()
 List_1_t8965 * GestureRecognizer_1_get_Gestures_m60912 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<PointCloudGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4379 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<PointCloudGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<PointCloudGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m4380 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PointCloudGesture>::CreateGesture()
 PointCloudGesture_t95 * GestureRecognizer_1_CreateGesture_m4381 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<PointCloudGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4376 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m60913 (GestureRecognizer_1_t8964 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PointCloudGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 PointCloudGesture_t95 * GestureRecognizer_1_FindGestureByCluster_m4383 (GestureRecognizer_1_t8964 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PointCloudGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 PointCloudGesture_t95 * GestureRecognizer_1_MatchActiveGestureToCluster_m4384 (GestureRecognizer_1_t8964 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PointCloudGesture>::FindFreeGesture()
 PointCloudGesture_t95 * GestureRecognizer_1_FindFreeGesture_m4385 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m4386 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::Update()
 void GestureRecognizer_1_Update_m4387 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m60914 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m60915 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m60916 (GestureRecognizer_1_t8964 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4388 (GestureRecognizer_1_t8964 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m60917 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m60918 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<PointCloudGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4389 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4390 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PointCloudGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m60919 (GestureRecognizer_1_t8964 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<PointCloudGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m60920 (Object_t * __this/* static, unused */, PointCloudGesture_t95 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
