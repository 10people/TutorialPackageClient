#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcSpriteFactory
struct NcSpriteFactory_t5092;
// NcSpriteFactory/NcFrameInfo[]
struct NcFrameInfoU5BU5D_t5093;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcSpriteFactory/MESH_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_MESH_TYPE.h"
// NcSpriteFactory/ALIGN_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_ALIGN_TYPE.h"
// NcSpriteTexture
struct NcSpriteTexture_t5102  : public NcEffectBehaviour_t5021
{
	// UnityEngine.GameObject NcSpriteTexture::m_NcSpriteFactoryPrefab
	GameObject_t9 * ___m_NcSpriteFactoryPrefab;
	// NcSpriteFactory NcSpriteTexture::m_NcSpriteFactoryCom
	NcSpriteFactory_t5092 * ___m_NcSpriteFactoryCom;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteTexture::m_NcSpriteFrameInfos
	NcFrameInfoU5BU5D_t5093* ___m_NcSpriteFrameInfos;
	// System.Single NcSpriteTexture::m_fUvScale
	float ___m_fUvScale;
	// System.Int32 NcSpriteTexture::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex;
	// System.Int32 NcSpriteTexture::m_nFrameIndex
	int32_t ___m_nFrameIndex;
	// NcSpriteFactory/MESH_TYPE NcSpriteTexture::m_MeshType
	int32_t ___m_MeshType;
	// NcSpriteFactory/ALIGN_TYPE NcSpriteTexture::m_AlignType
	int32_t ___m_AlignType;
	// UnityEngine.GameObject NcSpriteTexture::m_EffectObject
	GameObject_t9 * ___m_EffectObject;
};
