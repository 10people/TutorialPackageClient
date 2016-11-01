#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGeometry
struct UIGeometry_t5371;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t5362;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UIGeometry::.ctor()
 void UIGeometry__ctor_m38044 (UIGeometry_t5371 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
 bool UIGeometry_get_hasVertices_m38045 (UIGeometry_t5371 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
 bool UIGeometry_get_hasTransformed_m38046 (UIGeometry_t5371 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
 void UIGeometry_Clear_m38047 (UIGeometry_t5371 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
 void UIGeometry_ApplyTransform_m38048 (UIGeometry_t5371 * __this, Matrix4x4_t941  ___widgetToPanel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
 void UIGeometry_WriteToBuffers_m38049 (UIGeometry_t5371 * __this, BetterList_1_t5196 * ___v, BetterList_1_t5197 * ___u, BetterList_1_t5198 * ___c, BetterList_1_t5196 * ___n, BetterList_1_t5362 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
