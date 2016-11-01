#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TapRecognizer
struct TapRecognizer_t109;
// TapGesture
struct TapGesture_t108;
// FingerClusterManager/Cluster
struct Cluster_t31;
// FingerGestures/IFingerList
struct IFingerList_t30;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void TapRecognizer::.ctor()
 void TapRecognizer__ctor_m305 (TapRecognizer_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TapRecognizer::get_IsMultiTap()
 bool TapRecognizer_get_IsMultiTap_m306 (TapRecognizer_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TapRecognizer::HasTimedOut(TapGesture)
 bool TapRecognizer_HasTimedOut_m307 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TapRecognizer::Reset(TapGesture)
 void TapRecognizer_Reset_m308 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TapGesture TapRecognizer::MatchActiveGestureToCluster(FingerClusterManager/Cluster)
 TapGesture_t108 * TapRecognizer_MatchActiveGestureToCluster_m309 (TapRecognizer_t109 * __this, Cluster_t31 * ___cluster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TapGesture TapRecognizer::FindClosestPendingGesture(UnityEngine.Vector2)
 TapGesture_t108 * TapRecognizer_FindClosestPendingGesture_m310 (TapRecognizer_t109 * __this, Vector2_t12  ___center, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::RecognizeSingleTap(TapGesture,FingerGestures/IFingerList)
 int32_t TapRecognizer_RecognizeSingleTap_m311 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::RecognizeMultiTap(TapGesture,FingerGestures/IFingerList)
 int32_t TapRecognizer_RecognizeMultiTap_m312 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TapRecognizer::GetDefaultEventMessageName()
 String_t* TapRecognizer_GetDefaultEventMessageName_m313 (TapRecognizer_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TapRecognizer::OnBegin(TapGesture,FingerGestures/IFingerList)
 void TapRecognizer_OnBegin_m314 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState TapRecognizer::OnRecognize(TapGesture,FingerGestures/IFingerList)
 int32_t TapRecognizer_OnRecognize_m315 (TapRecognizer_t109 * __this, TapGesture_t108 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
