#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<PinchGesture>
struct GestureRecognizer_1_t985;
// System.Collections.Generic.List`1<PinchGesture>
struct List_1_t8894;
// GestureRecognizer`1/GestureEventHandler<PinchGesture>
struct GestureEventHandler_t8895;
// PinchGesture
struct PinchGesture_t87;
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

// System.Void GestureRecognizer`1<PinchGesture>::.ctor()
 void GestureRecognizer_1__ctor_m60257 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::.cctor()
 void GestureRecognizer_1__cctor_m60258 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m60259 (GestureRecognizer_1_t985 * __this, GestureEventHandler_t8895 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m60260 (GestureRecognizer_1_t985 * __this, GestureEventHandler_t8895 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::Start()
 void GestureRecognizer_1_Start_m4311 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4310 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m60261 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<PinchGesture>::get_Gestures()
 List_1_t8894 * GestureRecognizer_1_get_Gestures_m60262 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<PinchGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4304 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<PinchGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<PinchGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m60263 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PinchGesture>::CreateGesture()
 PinchGesture_t87 * GestureRecognizer_1_CreateGesture_m4312 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<PinchGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4309 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m60264 (GestureRecognizer_1_t985 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PinchGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 PinchGesture_t87 * GestureRecognizer_1_FindGestureByCluster_m4314 (GestureRecognizer_1_t985 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PinchGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 PinchGesture_t87 * GestureRecognizer_1_MatchActiveGestureToCluster_m4315 (GestureRecognizer_1_t985 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<PinchGesture>::FindFreeGesture()
 PinchGesture_t87 * GestureRecognizer_1_FindFreeGesture_m4316 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m60265 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::Update()
 void GestureRecognizer_1_Update_m4318 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m60266 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m60267 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m60268 (GestureRecognizer_1_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4319 (GestureRecognizer_1_t985 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m60269 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m60270 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<PinchGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4320 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4321 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<PinchGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m4308 (GestureRecognizer_1_t985 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<PinchGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m60271 (Object_t * __this/* static, unused */, PinchGesture_t87 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
