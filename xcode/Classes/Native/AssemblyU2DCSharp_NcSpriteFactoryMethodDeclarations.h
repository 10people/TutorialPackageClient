#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcSpriteFactory
struct NcSpriteFactory_t5092;
// NcSpriteFactory/NcSpriteNode
struct NcSpriteNode_t5096;
// System.String
struct String_t;
// NcEffectBehaviour
struct NcEffectBehaviour_t5021;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// NcSpriteAnimation
struct NcSpriteAnimation_t5095;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// NcSpriteFactory/NcFrameInfo
struct NcFrameInfo_t5094;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// NcSpriteFactory/ALIGN_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE.h"
// NcSpriteFactory/MESH_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE.h"

// System.Void NcSpriteFactory::.ctor()
 void NcSpriteFactory__ctor_m36324 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsUnused(System.Int32)
 bool NcSpriteFactory_IsUnused_m36325 (NcSpriteFactory_t5092 * __this, int32_t ___nNodeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetSpriteNode(System.Int32)
 NcSpriteNode_t5096 * NcSpriteFactory_GetSpriteNode_m36326 (NcSpriteFactory_t5092 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetSpriteNode(System.String)
 NcSpriteNode_t5096 * NcSpriteFactory_GetSpriteNode_m36327 (NcSpriteFactory_t5092 * __this, String_t* ___spriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetSpriteNodeIndex(System.String)
 int32_t NcSpriteFactory_GetSpriteNodeIndex_m36328 (NcSpriteFactory_t5092 * __this, String_t* ___spriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::SetSpriteNode(System.Int32,NcSpriteFactory/NcSpriteNode)
 NcSpriteNode_t5096 * NcSpriteFactory_SetSpriteNode_m36329 (NcSpriteFactory_t5092 * __this, int32_t ___nIndex, NcSpriteNode_t5096 * ___newInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::AddSpriteNode()
 int32_t NcSpriteFactory_AddSpriteNode_m36330 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::AddSpriteNode(NcSpriteFactory/NcSpriteNode)
 int32_t NcSpriteFactory_AddSpriteNode_m36331 (NcSpriteFactory_t5092 * __this, NcSpriteNode_t5096 * ___addSpriteNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::DeleteSpriteNode(System.Int32)
 void NcSpriteFactory_DeleteSpriteNode_m36332 (NcSpriteFactory_t5092 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::MoveSpriteNode(System.Int32,System.Int32)
 void NcSpriteFactory_MoveSpriteNode_m36333 (NcSpriteFactory_t5092 * __this, int32_t ___nSrcIndex, int32_t ___nTarIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::ClearAllSpriteNode()
 void NcSpriteFactory_ClearAllSpriteNode_m36334 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetSpriteNodeCount()
 int32_t NcSpriteFactory_GetSpriteNodeCount_m36335 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcSpriteFactory/NcSpriteNode NcSpriteFactory::GetCurrentSpriteNode()
 NcSpriteNode_t5096 * NcSpriteFactory_GetCurrentSpriteNode_m36336 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NcSpriteFactory::GetSpriteUvRect(System.Int32,System.Int32)
 Rect_t5068  NcSpriteFactory_GetSpriteUvRect_m36337 (NcSpriteFactory_t5092 * __this, int32_t ___nStriteIndex, int32_t ___nFrameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsValidFactory()
 bool NcSpriteFactory_IsValidFactory_m36338 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::Awake()
 void NcSpriteFactory_Awake_m36339 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.Int32)
 NcEffectBehaviour_t5021 * NcSpriteFactory_SetSprite_m36340 (NcSpriteFactory_t5092 * __this, int32_t ___nNodeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.String)
 NcEffectBehaviour_t5021 * NcSpriteFactory_SetSprite_m36341 (NcSpriteFactory_t5092 * __this, String_t* ___spriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcEffectBehaviour NcSpriteFactory::SetSprite(System.Int32,System.Boolean)
 NcEffectBehaviour_t5021 * NcSpriteFactory_SetSprite_m36342 (NcSpriteFactory_t5092 * __this, int32_t ___nNodeIndex, bool ___bRunImmediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteFactory::GetCurrentSpriteIndex()
 int32_t NcSpriteFactory_GetCurrentSpriteIndex_m36343 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::IsEndSprite()
 bool NcSpriteFactory_IsEndSprite_m36344 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreateEffectObject()
 void NcSpriteFactory_CreateEffectObject_m36345 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NcSpriteFactory::CreateSpriteEffect(System.Int32,UnityEngine.Transform)
 GameObject_t9 * NcSpriteFactory_CreateSpriteEffect_m36346 (NcSpriteFactory_t5092 * __this, int32_t ___nSrcSpriteIndex, Transform_t78 * ___parentTrans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::DestroyEffectObject()
 void NcSpriteFactory_DestroyEffectObject_m36347 (NcSpriteFactory_t5092 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreateSoundObject(NcSpriteFactory/NcSpriteNode)
 void NcSpriteFactory_CreateSoundObject_m36348 (NcSpriteFactory_t5092 * __this, NcSpriteNode_t5096 * ___ncSpriteNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnChangingSprite(System.Int32,System.Int32)
 void NcSpriteFactory_OnChangingSprite_m36349 (NcSpriteFactory_t5092 * __this, int32_t ___nOldNodeIndex, int32_t ___nNewNodeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnAnimationStartFrame(NcSpriteAnimation)
 void NcSpriteFactory_OnAnimationStartFrame_m36350 (NcSpriteFactory_t5092 * __this, NcSpriteAnimation_t5095 * ___spriteCom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnAnimationChangingFrame(NcSpriteAnimation,System.Int32,System.Int32,System.Int32)
 void NcSpriteFactory_OnAnimationChangingFrame_m36351 (NcSpriteFactory_t5092 * __this, NcSpriteAnimation_t5095 * ___spriteCom, int32_t ___nOldIndex, int32_t ___nNewIndex, int32_t ___nLoopCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteFactory::OnAnimationLastFrame(NcSpriteAnimation,System.Int32)
 bool NcSpriteFactory_OnAnimationLastFrame_m36352 (NcSpriteFactory_t5092 * __this, NcSpriteAnimation_t5095 * ___spriteCom, int32_t ___nLoopCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcSpriteFactory_OnUpdateEffectSpeed_m36353 (NcSpriteFactory_t5092 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::CreatePlane(UnityEngine.MeshFilter,System.Single,NcSpriteFactory/NcFrameInfo,System.Boolean,NcSpriteFactory/ALIGN_TYPE,NcSpriteFactory/MESH_TYPE)
 void NcSpriteFactory_CreatePlane_m36354 (Object_t * __this/* static, unused */, MeshFilter_t1418 * ___meshFilter, float ___fUvScale, NcFrameInfo_t5094 * ___ncSpriteFrameInfo, bool ___bTrimCenterAlign, int32_t ___alignType, int32_t ___m_MeshType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::UpdatePlane(UnityEngine.MeshFilter,System.Single,NcSpriteFactory/NcFrameInfo,System.Boolean,NcSpriteFactory/ALIGN_TYPE)
 void NcSpriteFactory_UpdatePlane_m36355 (Object_t * __this/* static, unused */, MeshFilter_t1418 * ___meshFilter, float ___fUvScale, NcFrameInfo_t5094 * ___ncSpriteFrameInfo, bool ___bTrimCenterAlign, int32_t ___alignType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteFactory::UpdateMeshUVs(UnityEngine.MeshFilter,UnityEngine.Rect)
 void NcSpriteFactory_UpdateMeshUVs_m36356 (Object_t * __this/* static, unused */, MeshFilter_t1418 * ___meshFilter, Rect_t5068  ___uv, MethodInfo* method) IL2CPP_METHOD_ATTR;
