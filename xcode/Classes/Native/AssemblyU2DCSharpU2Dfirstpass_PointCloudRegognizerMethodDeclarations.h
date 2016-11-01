#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PointCloudRegognizer
struct PointCloudRegognizer_t103;
// PointCloudRegognizer/NormalizedTemplate
struct NormalizedTemplate_t97;
// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t92;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t94;
// PointCloudGesture
struct PointCloudGesture_t95;
// FingerGestures/IFingerList
struct IFingerList_t30;
// System.String
struct String_t;
// GestureRecognitionState
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognitionState.h"

// System.Void PointCloudRegognizer::.ctor()
 void PointCloudRegognizer__ctor_m274 (PointCloudRegognizer_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::.cctor()
 void PointCloudRegognizer__cctor_m275 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::Awake()
 void PointCloudRegognizer_Awake_m276 (PointCloudRegognizer_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PointCloudRegognizer/NormalizedTemplate PointCloudRegognizer::FindNormalizedTemplate(PointCloudGestureTemplate)
 NormalizedTemplate_t97 * PointCloudRegognizer_FindNormalizedTemplate_m277 (PointCloudRegognizer_t103 * __this, PointCloudGestureTemplate_t92 * ___template, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer::Normalize(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 List_1_t94 * PointCloudRegognizer_Normalize_m278 (PointCloudRegognizer_t103 * __this, List_1_t94 * ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PointCloudRegognizer::AddTemplate(PointCloudGestureTemplate)
 bool PointCloudRegognizer_AddTemplate_m279 (PointCloudRegognizer_t103 * __this, PointCloudGestureTemplate_t92 * ___template, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::OnBegin(PointCloudGesture,FingerGestures/IFingerList)
 void PointCloudRegognizer_OnBegin_m280 (PointCloudRegognizer_t103 * __this, PointCloudGesture_t95 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PointCloudRegognizer::RecognizePointCloud(PointCloudGesture)
 bool PointCloudRegognizer_RecognizePointCloud_m281 (PointCloudRegognizer_t103 * __this, PointCloudGesture_t95 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer::GreedyCloudMatch(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 float PointCloudRegognizer_GreedyCloudMatch_m282 (PointCloudRegognizer_t103 * __this, List_1_t94 * ___points, List_1_t94 * ___refPoints, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer::CloudDistance(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
 float PointCloudRegognizer_CloudDistance_m283 (Object_t * __this/* static, unused */, List_1_t94 * ___points1, List_1_t94 * ___points2, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::ResetMatched(System.Int32)
 void PointCloudRegognizer_ResetMatched_m284 (Object_t * __this/* static, unused */, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GestureRecognitionState PointCloudRegognizer::OnRecognize(PointCloudGesture,FingerGestures/IFingerList)
 int32_t PointCloudRegognizer_OnRecognize_m285 (PointCloudRegognizer_t103 * __this, PointCloudGesture_t95 * ___gesture, Object_t * ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PointCloudRegognizer::GetDefaultEventMessageName()
 String_t* PointCloudRegognizer_GetDefaultEventMessageName_m286 (PointCloudRegognizer_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::OnDrawGizmosSelected()
 void PointCloudRegognizer_OnDrawGizmosSelected_m287 (PointCloudRegognizer_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer::DrawNormalizedPointCloud(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Single)
 void PointCloudRegognizer_DrawNormalizedPointCloud_m288 (PointCloudRegognizer_t103 * __this, List_1_t94 * ___points, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
