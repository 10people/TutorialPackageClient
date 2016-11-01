#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<TapGesture>
struct GestureRecognizer_1_t993;
// System.Collections.Generic.List`1<TapGesture>
struct List_1_t995;
// GestureRecognizer`1/GestureEventHandler<TapGesture>
struct GestureEventHandler_t9049;
// TapGesture
struct TapGesture_t108;
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

// System.Void GestureRecognizer`1<TapGesture>::.ctor()
 void GestureRecognizer_1__ctor_m61643 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::.cctor()
 void GestureRecognizer_1__cctor_m61644 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m61645 (GestureRecognizer_1_t993 * __this, GestureEventHandler_t9049 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m61646 (GestureRecognizer_1_t993 * __this, GestureEventHandler_t9049 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::Start()
 void GestureRecognizer_1_Start_m4420 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4419 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m61647 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<TapGesture>::get_Gestures()
 List_1_t995 * GestureRecognizer_1_get_Gestures_m4413 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<TapGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4421 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<TapGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<TapGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m4422 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TapGesture>::CreateGesture()
 TapGesture_t108 * GestureRecognizer_1_CreateGesture_m4423 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<TapGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4418 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m61648 (GestureRecognizer_1_t993 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TapGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 TapGesture_t108 * GestureRecognizer_1_FindGestureByCluster_m4425 (GestureRecognizer_1_t993 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TapGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 TapGesture_t108 * GestureRecognizer_1_MatchActiveGestureToCluster_m4412 (GestureRecognizer_1_t993 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<TapGesture>::FindFreeGesture()
 TapGesture_t108 * GestureRecognizer_1_FindFreeGesture_m4426 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m4411 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::Update()
 void GestureRecognizer_1_Update_m4427 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m61649 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m61650 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m61651 (GestureRecognizer_1_t993 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4428 (GestureRecognizer_1_t993 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m61652 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m61653 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<TapGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4429 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4430 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<TapGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m61654 (GestureRecognizer_1_t993 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<TapGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m61655 (Object_t * __this/* static, unused */, TapGesture_t108 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
