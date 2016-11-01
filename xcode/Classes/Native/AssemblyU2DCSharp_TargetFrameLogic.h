#pragma once
#include <stdint.h>
// TargetFrameLogic
struct TargetFrameLogic_t1771;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UnityEngine.Color[]
struct ColorU5BU5D_t1421;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HpInfo
#include "AssemblyU2DCSharp_HpInfo.h"
// TargetFrameLogic
struct TargetFrameLogic_t1771  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject TargetFrameLogic::m_TargetFrameOffset
	GameObject_t9 * ___m_TargetFrameOffset;
	// UILabel TargetFrameLogic::m_TargetLevelText
	UILabel_t1176 * ___m_TargetLevelText;
	// UILabel TargetFrameLogic::m_TargetName
	UILabel_t1176 * ___m_TargetName;
	// UnityEngine.GameObject TargetFrameLogic::m_NormalHPInfo
	GameObject_t9 * ___m_NormalHPInfo;
	// UISprite TargetFrameLogic::m_NormalHPSprite
	UISprite_t1202 * ___m_NormalHPSprite;
	// UISprite TargetFrameLogic::m_NormalHPBakSprite
	UISprite_t1202 * ___m_NormalHPBakSprite;
	// UILabel TargetFrameLogic::m_NormalHPText
	UILabel_t1176 * ___m_NormalHPText;
	// UILabel TargetFrameLogic::m_NormalHpCount
	UILabel_t1176 * ___m_NormalHpCount;
	// UnityEngine.GameObject TargetFrameLogic::m_BossHPInfo
	GameObject_t9 * ___m_BossHPInfo;
	// UISprite TargetFrameLogic::m_BossHPSprite
	UISprite_t1202 * ___m_BossHPSprite;
	// UISprite TargetFrameLogic::m_BossHPOtherSprite
	UISprite_t1202 * ___m_BossHPOtherSprite;
	// UISprite TargetFrameLogic::m_BossHPBakSprite
	UISprite_t1202 * ___m_BossHPBakSprite;
	// UILabel TargetFrameLogic::m_BossHPText
	UILabel_t1176 * ___m_BossHPText;
	// UILabel TargetFrameLogic::m_BossHpCount
	UILabel_t1176 * ___m_BossHpCount;
	// UISprite TargetFrameLogic::m_TargetMPSprite
	UISprite_t1202 * ___m_TargetMPSprite;
	// UISprite TargetFrameLogic::m_TargetMPBakSprite
	UISprite_t1202 * ___m_TargetMPBakSprite;
	// UILabel TargetFrameLogic::m_TargetMPText
	UILabel_t1176 * ___m_TargetMPText;
	// UnityEngine.BoxCollider TargetFrameLogic::m_TargetFrameBoxColliser
	BoxCollider_t128 * ___m_TargetFrameBoxColliser;
	// UnityEngine.GameObject TargetFrameLogic::m_BelongSprite
	GameObject_t9 * ___m_BelongSprite;
	// System.Boolean TargetFrameLogic::m_bFold
	bool ___m_bFold;
	// System.Boolean TargetFrameLogic::m_hasTarget
	bool ___m_hasTarget;
	// System.Single TargetFrameLogic::m_fMPBakSpeed
	float ___m_fMPBakSpeed;
	// System.Boolean TargetFrameLogic::m_isNeedShowMp
	bool ___m_isNeedShowMp;
	// System.Int32 TargetFrameLogic::m_nLastMp
	int32_t ___m_nLastMp;
	// HpInfo TargetFrameLogic::m_HpInfo
	HpInfo_t1770  ___m_HpInfo;
	// UnityEngine.Color[] TargetFrameLogic::m_HpColorArray
	ColorU5BU5D_t1421* ___m_HpColorArray;
	// System.UInt64 TargetFrameLogic::m_TargetGuid
	uint64_t ___m_TargetGuid;
	// System.Int32 TargetFrameLogic::m_lastHpCount
	int32_t ___m_lastHpCount;
	// System.String TargetFrameLogic::m_showHpCountFormat
	String_t* ___m_showHpCountFormat;
	// System.String TargetFrameLogic::m_strTargetName
	String_t* ___m_strTargetName;
	// System.Int32 TargetFrameLogic::m_TargetServerID
	int32_t ___m_TargetServerID;
	// System.String TargetFrameLogic::YELLOW_SPRITE
	String_t* ___YELLOW_SPRITE;
	// System.String TargetFrameLogic::PURPLE_SPRITE
	String_t* ___PURPLE_SPRITE;
	// System.String TargetFrameLogic::BLUE_SPRITE
	String_t* ___BLUE_SPRITE;
	// System.Boolean TargetFrameLogic::m_isNpc
	bool ___m_isNpc;
	// System.Collections.Generic.List`1<System.String> TargetFrameLogic::m_spriteList
	List_1_t1333 * ___m_spriteList;
};
struct TargetFrameLogic_t1771_StaticFields{
	// TargetFrameLogic TargetFrameLogic::m_Instance
	TargetFrameLogic_t1771 * ___m_Instance;
};
