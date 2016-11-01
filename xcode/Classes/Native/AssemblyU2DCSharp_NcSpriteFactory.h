#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<NcSpriteFactory/NcSpriteNode>
struct List_1_t5101;
// UnityEngine.GameObject
struct GameObject_t9;
// NcAttachSound
struct NcAttachSound_t5054;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcSpriteFactory/SPRITE_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_SPRITE_TYPE.h"
// NcSpriteFactory/SHOW_TYPE
#include "AssemblyU2DCSharp_NcSpriteFactory_SHOW_TYPE.h"
// NcSpriteFactory
struct NcSpriteFactory_t5092  : public NcEffectBehaviour_t5021
{
	// NcSpriteFactory/SPRITE_TYPE NcSpriteFactory::m_SpriteType
	int32_t ___m_SpriteType;
	// System.Collections.Generic.List`1<NcSpriteFactory/NcSpriteNode> NcSpriteFactory::m_SpriteList
	List_1_t5101 * ___m_SpriteList;
	// System.Int32 NcSpriteFactory::m_nCurrentIndex
	int32_t ___m_nCurrentIndex;
	// System.Int32 NcSpriteFactory::m_nMaxAtlasTextureSize
	int32_t ___m_nMaxAtlasTextureSize;
	// System.Boolean NcSpriteFactory::m_bNeedRebuild
	bool ___m_bNeedRebuild;
	// System.Int32 NcSpriteFactory::m_nBuildStartIndex
	int32_t ___m_nBuildStartIndex;
	// System.Boolean NcSpriteFactory::m_bTrimBlack
	bool ___m_bTrimBlack;
	// System.Boolean NcSpriteFactory::m_bTrimAlpha
	bool ___m_bTrimAlpha;
	// System.Single NcSpriteFactory::m_fUvScale
	float ___m_fUvScale;
	// System.Single NcSpriteFactory::m_fTextureRatio
	float ___m_fTextureRatio;
	// UnityEngine.GameObject NcSpriteFactory::m_CurrentEffect
	GameObject_t9 * ___m_CurrentEffect;
	// NcAttachSound NcSpriteFactory::m_CurrentSound
	NcAttachSound_t5054 * ___m_CurrentSound;
	// System.Boolean NcSpriteFactory::m_bEndSprite
	bool ___m_bEndSprite;
	// NcSpriteFactory/SHOW_TYPE NcSpriteFactory::m_ShowType
	int32_t ___m_ShowType;
	// System.Boolean NcSpriteFactory::m_bShowEffect
	bool ___m_bShowEffect;
	// System.Boolean NcSpriteFactory::m_bTestMode
	bool ___m_bTestMode;
	// System.Boolean NcSpriteFactory::m_bSequenceMode
	bool ___m_bSequenceMode;
	// System.Boolean NcSpriteFactory::m_bbInstance
	bool ___m_bbInstance;
};
