#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PointCloudRegognizer/GestureNormalizer
struct GestureNormalizer_t98;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t94;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PointCloudRegognizer/GestureNormalizer::.ctor()
 void GestureNormalizer__ctor_m265 (GestureNormalizer_t98 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::Apply(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
 List_1_t94 * GestureNormalizer_Apply_m266 (GestureNormalizer_t98 * __this, List_1_t94 * ___inputPoints, int32_t ___normalizedPointsCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudRegognizer/GestureNormalizer::Resample(System.Collections.Generic.List`1<PointCloudRegognizer/Point>,System.Int32)
 List_1_t94 * GestureNormalizer_Resample_m267 (GestureNormalizer_t98 * __this, List_1_t94 * ___points, int32_t ___normalizedPointsCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudRegognizer/GestureNormalizer::PathLength(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 float GestureNormalizer_PathLength_m268 (Object_t * __this/* static, unused */, List_1_t94 * ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer/GestureNormalizer::Scale(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 void GestureNormalizer_Scale_m269 (Object_t * __this/* static, unused */, List_1_t94 * ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudRegognizer/GestureNormalizer::TranslateToOrigin(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 void GestureNormalizer_TranslateToOrigin_m270 (Object_t * __this/* static, unused */, List_1_t94 * ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudRegognizer/GestureNormalizer::Centroid(System.Collections.Generic.List`1<PointCloudRegognizer/Point>)
 Vector2_t12  GestureNormalizer_Centroid_m271 (Object_t * __this/* static, unused */, List_1_t94 * ___points, MethodInfo* method) IL2CPP_METHOD_ATTR;
