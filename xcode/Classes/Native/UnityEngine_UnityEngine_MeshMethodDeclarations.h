#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1420;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// UnityEngine.Color32[]
struct Color32U5BU5D_t5941;
// System.Int32[]
struct Int32U5BU5D_t116;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.Mesh::.ctor()
 void Mesh__ctor_m38668 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
 void Mesh_Internal_Create_m52018 (Object_t * __this/* static, unused */, Mesh_t1049 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
 void Mesh_Clear_m52019 (Mesh_t1049 * __this, bool ___keepVertexLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
 void Mesh_Clear_m41609 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
 bool Mesh_get_canAccess_m52020 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
 void Mesh_set_vertices_m38669 (Mesh_t1049 * __this, Vector3U5BU5D_t1262* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
 void Mesh_set_normals_m39318 (Mesh_t1049 * __this, Vector3U5BU5D_t1262* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
 void Mesh_set_tangents_m39310 (Mesh_t1049 * __this, Vector4U5BU5D_t1420* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
 Vector2U5BU5D_t114* Mesh_get_uv_m41592 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
 void Mesh_set_uv_m38671 (Mesh_t1049 * __this, Vector2U5BU5D_t114* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
 void Mesh_set_uv2_m42375 (Mesh_t1049 * __this, Vector2U5BU5D_t114* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv1(UnityEngine.Vector2[])
 void Mesh_set_uv1_m39317 (Mesh_t1049 * __this, Vector2U5BU5D_t114* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_set_bounds(UnityEngine.Bounds&)
 void Mesh_INTERNAL_set_bounds_m52021 (Mesh_t1049 * __this, Bounds_t1005 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
 void Mesh_set_bounds_m39312 (Mesh_t1049 * __this, Bounds_t1005  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
 ColorU5BU5D_t1421* Mesh_get_colors_m41467 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
 void Mesh_set_colors_m38672 (Mesh_t1049 * __this, ColorU5BU5D_t1421* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
 void Mesh_set_colors32_m42137 (Mesh_t1049 * __this, Color32U5BU5D_t5941* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
 void Mesh_RecalculateBounds_m41610 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
 void Mesh_set_triangles_m38670 (Mesh_t1049 * __this, Int32U5BU5D_t116* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
 int32_t Mesh_get_vertexCount_m41380 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
 int32_t Mesh_get_subMeshCount_m41322 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
 void Mesh_MarkDynamic_m42129 (Mesh_t1049 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
