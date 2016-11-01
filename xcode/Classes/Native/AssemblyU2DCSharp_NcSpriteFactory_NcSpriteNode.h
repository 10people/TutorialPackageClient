#pragma once
#include <stdint.h>
// System.String
struct String_t;
// NcSpriteFactory/NcFrameInfo[]
struct NcFrameInfoU5BU5D_t5093;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcSpriteFactory/NcSpriteNode
struct NcSpriteNode_t5096  : public Object_t
{
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bIncludedAtlas
	bool ___m_bIncludedAtlas;
	// System.String NcSpriteFactory/NcSpriteNode::m_TextureGUID
	String_t* ___m_TextureGUID;
	// System.String NcSpriteFactory/NcSpriteNode::m_TextureName
	String_t* ___m_TextureName;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fMaxTextureAlpha
	float ___m_fMaxTextureAlpha;
	// System.String NcSpriteFactory/NcSpriteNode::m_SpriteName
	String_t* ___m_SpriteName;
	// NcSpriteFactory/NcFrameInfo[] NcSpriteFactory/NcSpriteNode::m_FrameInfos
	NcFrameInfoU5BU5D_t5093* ___m_FrameInfos;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTilingX
	int32_t ___m_nTilingX;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTilingY
	int32_t ___m_nTilingY;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nStartFrame
	int32_t ___m_nStartFrame;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nFrameCount
	int32_t ___m_nFrameCount;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bLoop
	bool ___m_bLoop;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopStartFrame
	int32_t ___m_nLoopStartFrame;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopFrameCount
	int32_t ___m_nLoopFrameCount;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nLoopingCount
	int32_t ___m_nLoopingCount;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fFps
	float ___m_fFps;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fTime
	float ___m_fTime;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nNextSpriteIndex
	int32_t ___m_nNextSpriteIndex;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nTestMode
	int32_t ___m_nTestMode;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fTestSpeed
	float ___m_fTestSpeed;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectInstantiate
	bool ___m_bEffectInstantiate;
	// UnityEngine.GameObject NcSpriteFactory/NcSpriteNode::m_EffectPrefab
	GameObject_t9 * ___m_EffectPrefab;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nEffectFrame
	int32_t ___m_nEffectFrame;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectOnlyFirst
	bool ___m_bEffectOnlyFirst;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bEffectDetach
	bool ___m_bEffectDetach;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fEffectSpeed
	float ___m_fEffectSpeed;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fEffectScale
	float ___m_fEffectScale;
	// UnityEngine.Vector3 NcSpriteFactory/NcSpriteNode::m_EffectPos
	Vector3_t121  ___m_EffectPos;
	// UnityEngine.Vector3 NcSpriteFactory/NcSpriteNode::m_EffectRot
	Vector3_t121  ___m_EffectRot;
	// UnityEngine.AudioClip NcSpriteFactory/NcSpriteNode::m_AudioClip
	AudioClip_t2147 * ___m_AudioClip;
	// System.Int32 NcSpriteFactory/NcSpriteNode::m_nSoundFrame
	int32_t ___m_nSoundFrame;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bSoundOnlyFirst
	bool ___m_bSoundOnlyFirst;
	// System.Boolean NcSpriteFactory/NcSpriteNode::m_bSoundLoop
	bool ___m_bSoundLoop;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fSoundVolume
	float ___m_fSoundVolume;
	// System.Single NcSpriteFactory/NcSpriteNode::m_fSoundPitch
	float ___m_fSoundPitch;
};
