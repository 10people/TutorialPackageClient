#pragma once
#include <stdint.h>
// PlayerFrameLogic
struct PlayerFrameLogic_t1653;
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.Transform
struct Transform_t78;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerFrameLogic
struct PlayerFrameLogic_t1653  : public MonoBehaviour_t18
{
	// System.Boolean PlayerFrameLogic::m_bFold
	bool ___m_bFold;
	// UnityEngine.GameObject PlayerFrameLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UIImageButton PlayerFrameLogic::m_PlayerHeadButton
	UIImageButton_t1204 * ___m_PlayerHeadButton;
	// UILabel PlayerFrameLogic::m_PlayerLevel
	UILabel_t1176 * ___m_PlayerLevel;
	// UISprite PlayerFrameLogic::m_PlayerHPSprite
	UISprite_t1202 * ___m_PlayerHPSprite;
	// UISprite PlayerFrameLogic::m_PlayerHPBakSprite
	UISprite_t1202 * ___m_PlayerHPBakSprite;
	// UISprite PlayerFrameLogic::m_PlayerMPSprite
	UISprite_t1202 * ___m_PlayerMPSprite;
	// UISprite PlayerFrameLogic::m_PlayerMPBakSprite
	UISprite_t1202 * ___m_PlayerMPBakSprite;
	// UILabel PlayerFrameLogic::m_PlayerMPText
	UILabel_t1176 * ___m_PlayerMPText;
	// UILabel PlayerFrameLogic::m_PlayerHPText
	UILabel_t1176 * ___m_PlayerHPText;
	// UISprite PlayerFrameLogic::m_PlayerHeadSprite
	UISprite_t1202 * ___m_PlayerHeadSprite;
	// UILabel PlayerFrameLogic::m_PlayerNameLabel
	UILabel_t1176 * ___m_PlayerNameLabel;
	// UnityEngine.GameObject PlayerFrameLogic::m_PlayerFrameInfo
	GameObject_t9 * ___m_PlayerFrameInfo;
	// UISprite PlayerFrameLogic::m_XPPic
	UISprite_t1202 * ___m_XPPic;
	// UISprite PlayerFrameLogic::m_HpItemCDPic
	UISprite_t1202 * ___m_HpItemCDPic;
	// UISprite PlayerFrameLogic::m_MpItemCDPic
	UISprite_t1202 * ___m_MpItemCDPic;
	// UISprite PlayerFrameLogic::m_TeamCaptain
	UISprite_t1202 * ___m_TeamCaptain;
	// System.Single PlayerFrameLogic::m_fPlayerHPBakSpeed
	float ___m_fPlayerHPBakSpeed;
	// System.Single PlayerFrameLogic::m_fPlayerMPBakSpeed
	float ___m_fPlayerMPBakSpeed;
	// UnityEngine.GameObject PlayerFrameLogic::m_RemindNum
	GameObject_t9 * ___m_RemindNum;
	// UILabel PlayerFrameLogic::m_RemindNumLabel
	UILabel_t1176 * ___m_RemindNumLabel;
	// System.Int32 PlayerFrameLogic::m_CurRemindNum
	int32_t ___m_CurRemindNum;
	// System.Int32 PlayerFrameLogic::m_nLastHp
	int32_t ___m_nLastHp;
	// System.Int32 PlayerFrameLogic::m_nLastMp
	int32_t ___m_nLastMp;
	// UnityEngine.Transform PlayerFrameLogic::m_WifiTransform
	Transform_t78 * ___m_WifiTransform;
	// UnityEngine.Transform PlayerFrameLogic::m_WifiSimple
	Transform_t78 * ___m_WifiSimple;
	// UnityEngine.Transform PlayerFrameLogic::m_WifiGood
	Transform_t78 * ___m_WifiGood;
	// UnityEngine.Transform PlayerFrameLogic::m_WifiDelay
	Transform_t78 * ___m_WifiDelay;
	// System.Int32 PlayerFrameLogic::m_WifiStatie
	int32_t ___m_WifiStatie;
	// UnityEngine.GameObject PlayerFrameLogic::m_PlayerFrameWhole
	GameObject_t9 * ___m_PlayerFrameWhole;
	// UISprite[] PlayerFrameLogic::m_BuffShowIcon
	UISpriteU5BU5D_t1201* ___m_BuffShowIcon;
	// UISprite[] PlayerFrameLogic::m_BuffCDIcon
	UISpriteU5BU5D_t1201* ___m_BuffCDIcon;
	// UISprite PlayerFrameLogic::m_VipImage
	UISprite_t1202 * ___m_VipImage;
	// UnityEngine.GameObject PlayerFrameLogic::m_VipInfo
	GameObject_t9 * ___m_VipInfo;
	// UILabel PlayerFrameLogic::m_VipLevel
	UILabel_t1176 * ___m_VipLevel;
	// UILabel PlayerFrameLogic::m_CombatValueLable
	UILabel_t1176 * ___m_CombatValueLable;
	// UnityEngine.GameObject PlayerFrameLogic::m_FightObj
	GameObject_t9 * ___m_FightObj;
};
struct PlayerFrameLogic_t1653_StaticFields{
	// PlayerFrameLogic PlayerFrameLogic::m_Instance
	PlayerFrameLogic_t1653 * ___m_Instance;
	// System.Single PlayerFrameLogic::m_fCDTimeSecond
	float ___m_fCDTimeSecond;
	// System.Single PlayerFrameLogic::m_fItemDescSecound
	float ___m_fItemDescSecound;
};
