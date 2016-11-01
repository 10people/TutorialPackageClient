#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1<DragGesture>
struct GestureRecognizer_1_t984;
// System.Collections.Generic.List`1<DragGesture>
struct List_1_t8839;
// GestureRecognizer`1/GestureEventHandler<DragGesture>
struct GestureEventHandler_t8840;
// DragGesture
struct DragGesture_t81;
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

// System.Void GestureRecognizer`1<DragGesture>::.ctor()
 void GestureRecognizer_1__ctor_m59828 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::.cctor()
 void GestureRecognizer_1__cctor_m59829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::add_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_add_OnGesture_m59830 (GestureRecognizer_1_t984 * __this, GestureEventHandler_t8840 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::remove_OnGesture(GestureRecognizer`1/GestureEventHandler<T>)
 void GestureRecognizer_1_remove_OnGesture_m59831 (GestureRecognizer_1_t984 * __this, GestureEventHandler_t8840 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::Start()
 void GestureRecognizer_1_Start_m4276 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::OnEnable()
 void GestureRecognizer_1_OnEnable_m4275 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::InitGestures()
 void GestureRecognizer_1_InitGestures_m59832 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> GestureRecognizer`1<DragGesture>::get_Gestures()
 List_1_t8839 * GestureRecognizer_1_get_Gestures_m59833 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<DragGesture>::CanBegin(T,FingerGestures/IFingerList)
 bool GestureRecognizer_1_CanBegin_m4272 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::OnBegin(T,FingerGestures/IFingerList)
// GestureRecognitionState GestureRecognizer`1<DragGesture>::OnRecognize(T,FingerGestures/IFingerList)
// UnityEngine.GameObject GestureRecognizer`1<DragGesture>::GetDefaultSelectionForSendMessage(T)
 GameObject_t9 * GestureRecognizer_1_GetDefaultSelectionForSendMessage_m59834 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<DragGesture>::CreateGesture()
 DragGesture_t81 * GestureRecognizer_1_CreateGesture_m4277 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type GestureRecognizer`1<DragGesture>::GetGestureType()
 Type_t * GestureRecognizer_1_GetGestureType_m4274 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::OnStateChanged(Gesture)
 void GestureRecognizer_1_OnStateChanged_m59835 (GestureRecognizer_1_t984 * __this, Gesture_t3 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<DragGesture>::FindGestureByCluster(FingerClusterManager/Cluster)
 DragGesture_t81 * GestureRecognizer_1_FindGestureByCluster_m4279 (GestureRecognizer_1_t984 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<DragGesture>::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 DragGesture_t81 * GestureRecognizer_1_MatchActiveGestureToCluster_m4280 (GestureRecognizer_1_t984 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T GestureRecognizer`1<DragGesture>::FindFreeGesture()
 DragGesture_t81 * GestureRecognizer_1_FindFreeGesture_m4281 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::Reset(T)
 void GestureRecognizer_1_Reset_m59836 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::Update()
 void GestureRecognizer_1_Update_m4283 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::UpdateUsingClusters()
 void GestureRecognizer_1_UpdateUsingClusters_m59837 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::UpdateExclusive()
 void GestureRecognizer_1_UpdateExclusive_m59838 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::UpdatePerFinger()
 void GestureRecognizer_1_UpdatePerFinger_m59839 (GestureRecognizer_1_t984 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::ProcessCluster(FingerClusterManager/Cluster)
 void GestureRecognizer_1_ProcessCluster_m4284 (GestureRecognizer_1_t984 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::ReleaseFingers(T)
 void GestureRecognizer_1_ReleaseFingers_m59840 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::Begin(T,System.Int32,FingerGestures/IFingerList)
 void GestureRecognizer_1_Begin_m59841 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, int32_t ___clusterId, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/IFingerList GestureRecognizer`1<DragGesture>::GetTouches(T)
 Object_t * GestureRecognizer_1_GetTouches_m4285 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::UpdateGesture(T,FingerGestures/IFingerList)
 void GestureRecognizer_1_UpdateGesture_m4286 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GestureRecognizer`1<DragGesture>::RaiseEvent(T)
 void GestureRecognizer_1_RaiseEvent_m4273 (GestureRecognizer_1_t984 * __this, DragGesture_t81 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GestureRecognizer`1<DragGesture>::<FindFreeGesture>m__1(T)
 bool GestureRecognizer_1_U3CFindFreeGestureU3Em__1_m59842 (Object_t * __this/* static, unused */, DragGesture_t81 * ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
