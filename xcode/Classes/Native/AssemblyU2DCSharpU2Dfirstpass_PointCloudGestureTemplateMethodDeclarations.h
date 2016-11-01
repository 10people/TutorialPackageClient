#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t92;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void PointCloudGestureTemplate::.ctor()
 void PointCloudGestureTemplate__ctor_m247 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudGestureTemplate::get_Size()
 Vector2_t12  PointCloudGestureTemplate_get_Size_m248 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudGestureTemplate::get_Width()
 float PointCloudGestureTemplate_get_Width_m249 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PointCloudGestureTemplate::get_Height()
 float PointCloudGestureTemplate_get_Height_m250 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::BeginPoints()
 void PointCloudGestureTemplate_BeginPoints_m251 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::AddPoint(System.Int32,UnityEngine.Vector2)
 void PointCloudGestureTemplate_AddPoint_m252 (PointCloudGestureTemplate_t92 * __this, int32_t ___stroke, Vector2_t12  ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::AddPoint(System.Int32,System.Single,System.Single)
 void PointCloudGestureTemplate_AddPoint_m253 (PointCloudGestureTemplate_t92 * __this, int32_t ___stroke, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::EndPoints()
 void PointCloudGestureTemplate_EndPoints_m254 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 PointCloudGestureTemplate::GetPosition(System.Int32)
 Vector2_t12  PointCloudGestureTemplate_GetPosition_m255 (PointCloudGestureTemplate_t92 * __this, int32_t ___pointIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::GetStrokeId(System.Int32)
 int32_t PointCloudGestureTemplate_GetStrokeId_m256 (PointCloudGestureTemplate_t92 * __this, int32_t ___pointIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::get_PointCount()
 int32_t PointCloudGestureTemplate_get_PointCount_m257 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PointCloudGestureTemplate::get_StrokeCount()
 int32_t PointCloudGestureTemplate_get_StrokeCount_m258 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::Normalize()
 void PointCloudGestureTemplate_Normalize_m259 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PointCloudGestureTemplate::MakeDirty()
 void PointCloudGestureTemplate_MakeDirty_m260 (PointCloudGestureTemplate_t92 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
