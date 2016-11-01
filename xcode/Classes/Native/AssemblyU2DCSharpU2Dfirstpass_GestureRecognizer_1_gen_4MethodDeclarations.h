#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<LongPressGesture>
struct GestureRecognizer_1_t8867;
// System.Collections.Generic.List`1<LongPressGesture>
struct List_1_t8868;
// GestureRecognizer`1/GestureEventHandler<LongPressGesture>
struct GestureEventHandler_t8869;
// LongPressGesture
struct LongPressGesture_t84;
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

// System.Void GestureRecognizer`1<LongPressGesture>::.ctor()
 void GestureRecognizer_1__ctor_m60048 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::.cctor()
 void GestureRecognizer_1__cctor_m60049 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m60050 (GestureRecognizer_1_t8867 * __this, GestureEventHandler_t8869 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m60051 (GestureRecognizer_1_t8867 * __this, GestureEventHandler_t8869 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::Start()
 void GestureRecognizer_1_Start_m4290 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4289 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m60052 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<LongPressGesture>::get_Gestures()
 List_1_t8868 * GestureRecognizer_1_get_Gestures_m60053 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<LongPressGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4291 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<LongPressGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<LongPressGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m4292 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<LongPressGesture>::CreateGesture()
 LongPressGesture_t84 * GestureRecognizer_1_CreateGesture_m4293 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<LongPressGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4288 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m60054 (GestureRecognizer_1_t8867 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<LongPressGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 LongPressGesture_t84 * GestureRecognizer_1_FindGestureByCluster_m4295 (GestureRecognizer_1_t8867 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<LongPressGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 LongPressGesture_t84 * GestureRecognizer_1_MatchActiveGestureToCluster_m4296 (GestureRecognizer_1_t8867 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<LongPressGesture>::FindFreeGesture()
 LongPressGesture_t84 * GestureRecognizer_1_FindFreeGesture_m4297 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m4298 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::Update()
 void GestureRecognizer_1_Update_m4299 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m60055 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m60056 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m60057 (GestureRecognizer_1_t8867 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4300 (GestureRecognizer_1_t8867 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m60058 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m60059 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<LongPressGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4301 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4302 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<LongPressGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m60060 (GestureRecognizer_1_t8867 * __this, LongPressGesture_t84 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<LongPressGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m60061 (Object_t * __this/* static, unused */, LongPressGesture_t84 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
