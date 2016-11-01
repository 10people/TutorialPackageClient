#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcSpriteFactory
struct NcSpriteFactory_t5092;
// NcSpriteFactory/NcFrameInfo[]
struct NcFrameInfoU5BU5D_t5093;
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// UnityEngine.Renderer
struct Renderer_t1008;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t114;
// NcEffectAniBehaviour
#include "AssemblyU2DCSharp_NcEffectAniBehaviour.h"
// NcSpriteAnimation/TEXTURE_TYPE
#include "AssemblyU2DCSharp_NcSpriteAnimation_TEXTURE_TYPE.h"
// NcSpriteAnimation/PLAYMODE
#include "AssemblyU2DCSharp_NcSpriteAnimation_PLAYMODE.h"
// NcSpriteFactory/MESH_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE.h"
// NcSpriteFactory/ALIGN_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// NcSpriteAnimation
struct NcSpriteAnimation_t5095  : public NcEffectAniBehaviour_t5026
{
	// NcSpriteAnimation/TEXTURE_TYPE NcSpriteAnimation::m_TextureType
	int32_t ___m_TextureType;
	// NcSpriteAnimation/PLAYMODE NcSpriteAnimation::m_PlayMode
	int32_t ___m_PlayMode;
	// System.Single NcSpriteAnimation::m_fDelayTime
	float ___m_fDelayTime;
	// System.Int32 NcSpriteAnimation::m_nStartFrame
	int32_t ___m_nStartFrame;
	// System.Int32 NcSpriteAnimation::m_nFrameCount
	int32_t ___m_nFrameCount;
	// System.Int32 NcSpriteAnimation::m_nSelectFrame
	int32_t ___m_nSelectFrame;
	// System.Boolean NcSpriteAnimation::m_bLoop
	bool ___m_bLoop;
	// System.Int32 NcSpriteAnimation::m_nLoopStartFrame
	int32_t ___m_nLoopStartFrame;
	// System.Int32 NcSpriteAnimation::m_nLoopFrameCount
	int32_t ___m_nLoopFrameCount;
	// System.Int32 NcSpriteAnimation::m_nLoopingCount
	int32_t ___m_nLoopingCount;
	// System.Boolean NcSpriteAnimation::m_bAutoDestruct
	bool ___m_bAutoDestruct;
	// System.Single NcSpriteAnimation::m_fFps
	float ___m_fFps;
	// System.Int32 NcSpriteAnimation::m_nTilingX
	int32_t ___m_nTilingX;
	// System.Int32 NcSpriteAnimation::m_nTilingY
	int32_t ___m_nTilingY;
	// UnityEngine.GameObject NcSpriteAnimation::m_NcSpriteFactoryPrefab
	GameObject_t9 * ___m_NcSpriteFactoryPrefab;
	// NcSpriteFactory NcSpriteAnimation::m_NcSpriteFactoryCom
	NcSpriteFactory_t5092 * ___m_NcSpriteFactoryCom;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteAnimation::m_NcSpriteFrameInfos
	NcFrameInfoU5BU5D_t5093* ___m_NcSpriteFrameInfos;
	// System.Single NcSpriteAnimation::m_fUvScale
	float ___m_fUvScale;
	// System.Int32 NcSpriteAnimation::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex;
	// NcSpriteFactory/MESH_TYPE NcSpriteAnimation::m_MeshType
	int32_t ___m_MeshType;
	// NcSpriteFactory/ALIGN_TYPE NcSpriteAnimation::m_AlignType
	int32_t ___m_AlignType;
	// System.Boolean NcSpriteAnimation::m_bTrimCenterAlign
	bool ___m_bTrimCenterAlign;
	// System.Boolean NcSpriteAnimation::m_bCreateBuiltInPlane
	bool ___m_bCreateBuiltInPlane;
	// System.Boolean NcSpriteAnimation::m_bBuildSpriteObj
	bool ___m_bBuildSpriteObj;
	// System.Boolean NcSpriteAnimation::m_bNeedRebuildAlphaChannel
	bool ___m_bNeedRebuildAlphaChannel;
	// UnityEngine.AnimationCurve NcSpriteAnimation::m_curveAlphaWeight
	AnimationCurve_t4583 * ___m_curveAlphaWeight;
	// UnityEngine.Vector2 NcSpriteAnimation::m_size
	Vector2_t12  ___m_size;
	// UnityEngine.Renderer NcSpriteAnimation::m_Renderer
	Renderer_t1008 * ___m_Renderer;
	// System.Single NcSpriteAnimation::m_fStartTime
	float ___m_fStartTime;
	// System.Int32 NcSpriteAnimation::m_nLastIndex
	int32_t ___m_nLastIndex;
	// System.Int32 NcSpriteAnimation::m_nLastSeqIndex
	int32_t ___m_nLastSeqIndex;
	// System.Boolean NcSpriteAnimation::m_bInPartLoop
	bool ___m_bInPartLoop;
	// System.Boolean NcSpriteAnimation::m_bBreakLoop
	bool ___m_bBreakLoop;
	// UnityEngine.Vector2[] NcSpriteAnimation::m_MeshUVsByTileTexture
	Vector2U5BU5D_t114* ___m_MeshUVsByTileTexture;
};
