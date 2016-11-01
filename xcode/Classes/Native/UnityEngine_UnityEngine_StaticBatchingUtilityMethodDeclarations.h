#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StaticBatchingUtility
struct StaticBatchingUtility_t7577;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Mesh
struct Mesh_t1049;
// UnityEngine.MeshSubsetCombineUtility/MeshInstance[]
struct MeshInstanceU5BU5D_t7578;
// System.String
struct String_t;
// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[]
struct SubMeshInstanceU5BU5D_t7579;

// System.Void UnityEngine.StaticBatchingUtility::Combine(UnityEngine.GameObject)
 void StaticBatchingUtility_Combine_m41811 (Object_t * __this/* static, unused */, GameObject_t9 * ___staticBatchRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.StaticBatchingUtility::InternalCombineVertices(UnityEngine.MeshSubsetCombineUtility/MeshInstance[],System.String)
 Mesh_t1049 * StaticBatchingUtility_InternalCombineVertices_m52072 (Object_t * __this/* static, unused */, MeshInstanceU5BU5D_t7578* ___meshes, String_t* ___meshName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StaticBatchingUtility::InternalCombineIndices(UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[],UnityEngine.Mesh)
 void StaticBatchingUtility_InternalCombineIndices_m52073 (Object_t * __this/* static, unused */, SubMeshInstanceU5BU5D_t7579* ___submeshes, Mesh_t1049 * ___combinedMesh, MethodInfo* method) IL2CPP_METHOD_ATTR;
