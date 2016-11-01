#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.InternalStaticBatchingUtility
struct InternalStaticBatchingUtility_t7516;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>
struct List_1_t7517;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct List_1_t7518;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.Transform
struct Transform_t78;

// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject)
 void InternalStaticBatchingUtility_Combine_m51703 (Object_t * __this/* static, unused */, GameObject_t9 * ___staticBatchRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject,System.Boolean)
 void InternalStaticBatchingUtility_Combine_m51704 (Object_t * __this/* static, unused */, GameObject_t9 * ___staticBatchRoot, bool ___combineOnlyStatic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject[],UnityEngine.GameObject)
 void InternalStaticBatchingUtility_Combine_m51705 (Object_t * __this/* static, unused */, GameObjectU5BU5D_t1200* ___gos, GameObject_t9 * ___staticBatchRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::MakeBatch(System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>,System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>,System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Transform,System.Int32)
 void InternalStaticBatchingUtility_MakeBatch_m51706 (Object_t * __this/* static, unused */, List_1_t7517 * ___meshes, List_1_t7518 * ___subsets, List_1_t1289 * ___subsetGOs, Transform_t78 * ___staticBatchRootTransform, int32_t ___batchIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
