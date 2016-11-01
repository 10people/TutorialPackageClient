#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.InternalStaticBatchingUtility/SortGO
struct SortGO_t7515;
// System.Object
struct Object_t;
// UnityEngine.Renderer
struct Renderer_t1008;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void UnityEngine.InternalStaticBatchingUtility/SortGO::.ctor()
 void SortGO__ctor_m51698 (SortGO_t7515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t SortGO_System_Collections_IComparer_Compare_m51699 (SortGO_t7515 * __this, Object_t * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetMaterialId(UnityEngine.Renderer)
 int32_t SortGO_GetMaterialId_m51700 (Object_t * __this/* static, unused */, Renderer_t1008 * ___renderer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetLightmapIndex(UnityEngine.Renderer)
 int32_t SortGO_GetLightmapIndex_m51701 (Object_t * __this/* static, unused */, Renderer_t1008 * ___renderer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.InternalStaticBatchingUtility/SortGO::GetRenderer(UnityEngine.GameObject)
 Renderer_t1008 * SortGO_GetRenderer_m51702 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
