#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// TweenPosition
struct TweenPosition_t1255;
// TweenAlpha
struct TweenAlpha_t1261;
// UISpriteAnimation
struct UISpriteAnimation_t1331;
// SkillBarLogic
struct SkillBarLogic_t1726;
// SkillXpBtnInfo[]
struct SkillXpBtnInfoU5BU5D_t1727;
// SkillBarInfo[]
struct SkillBarInfoU5BU5D_t1728;
// AttackBarInfo
struct AttackBarInfo_t1724;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// TransformController
struct TransformController_t1729;
// MUIWave
struct MUIWave_t1730;
// UIEffectBehaviourController
struct UIEffectBehaviourController_t1731;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// SkillBarLogic/TweenStatus
#include "AssemblyU2DCSharp_SkillBarLogic_TweenStatus.h"
// SkillBarLogic
struct SkillBarLogic_t1726  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SkillBarLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UISprite SkillBarLogic::m_Skill1CDPic
	UISprite_t1202 * ___m_Skill1CDPic;
	// UISprite SkillBarLogic::m_Skill2CDPic
	UISprite_t1202 * ___m_Skill2CDPic;
	// UISprite SkillBarLogic::m_Skill3CDPic
	UISprite_t1202 * ___m_Skill3CDPic;
	// UISprite SkillBarLogic::m_Skill4CDPic
	UISprite_t1202 * ___m_Skill4CDPic;
	// UISprite SkillBarLogic::m_CrashCDPic
	UISprite_t1202 * ___m_CrashCDPic;
	// UISprite SkillBarLogic::m_Skill1CDBK
	UISprite_t1202 * ___m_Skill1CDBK;
	// UISprite SkillBarLogic::m_Skill2CDBK
	UISprite_t1202 * ___m_Skill2CDBK;
	// UISprite SkillBarLogic::m_Skill3CDBK
	UISprite_t1202 * ___m_Skill3CDBK;
	// UISprite SkillBarLogic::m_Skill4CDBK
	UISprite_t1202 * ___m_Skill4CDBK;
	// UISprite SkillBarLogic::m_Skill5CDBK
	UISprite_t1202 * ___m_Skill5CDBK;
	// UISprite SkillBarLogic::m_CrashCDBK
	UISprite_t1202 * ___m_CrashCDBK;
	// UnityEngine.GameObject SkillBarLogic::m_SkillRing1
	GameObject_t9 * ___m_SkillRing1;
	// UnityEngine.GameObject SkillBarLogic::m_SkillRing2
	GameObject_t9 * ___m_SkillRing2;
	// UnityEngine.GameObject SkillBarLogic::m_SkillRing3
	GameObject_t9 * ___m_SkillRing3;
	// UnityEngine.GameObject SkillBarLogic::m_SkillRing4
	GameObject_t9 * ___m_SkillRing4;
	// UnityEngine.GameObject SkillBarLogic::m_SkillRing5
	GameObject_t9 * ___m_SkillRing5;
	// UnityEngine.GameObject SkillBarLogic::m_CrashRing
	GameObject_t9 * ___m_CrashRing;
	// UISprite SkillBarLogic::m_Skill5CDPic
	UISprite_t1202 * ___m_Skill5CDPic;
	// UISprite SkillBarLogic::m_Skill6CDPic
	UISprite_t1202 * ___m_Skill6CDPic;
	// UISprite SkillBarLogic::m_Skill7CDPic
	UISprite_t1202 * ___m_Skill7CDPic;
	// UISprite SkillBarLogic::m_Skill8CDPic
	UISprite_t1202 * ___m_Skill8CDPic;
	// UISprite SkillBarLogic::m_Skill1IconPic
	UISprite_t1202 * ___m_Skill1IconPic;
	// UISprite SkillBarLogic::m_Skill2IconPic
	UISprite_t1202 * ___m_Skill2IconPic;
	// UISprite SkillBarLogic::m_Skill3IconPic
	UISprite_t1202 * ___m_Skill3IconPic;
	// UISprite SkillBarLogic::m_Skill4IconPic
	UISprite_t1202 * ___m_Skill4IconPic;
	// UISprite SkillBarLogic::m_Skill5IconPic
	UISprite_t1202 * ___m_Skill5IconPic;
	// UISprite SkillBarLogic::m_Skill6IconPic
	UISprite_t1202 * ___m_Skill6IconPic;
	// UISprite SkillBarLogic::m_Skill7IconPic
	UISprite_t1202 * ___m_Skill7IconPic;
	// UISprite SkillBarLogic::m_Skill8IconPic
	UISprite_t1202 * ___m_Skill8IconPic;
	// UISprite SkillBarLogic::m_SkillXP1IconPic
	UISprite_t1202 * ___m_SkillXP1IconPic;
	// UISprite SkillBarLogic::m_SkillXP2IconPic
	UISprite_t1202 * ___m_SkillXP2IconPic;
	// UISprite SkillBarLogic::m_SkillXP3IconPic
	UISprite_t1202 * ___m_SkillXP3IconPic;
	// UISprite SkillBarLogic::m_AttackIconPic
	UISprite_t1202 * ___m_AttackIconPic;
	// UnityEngine.GameObject SkillBarLogic::m_Skill1Bt
	GameObject_t9 * ___m_Skill1Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill2Bt
	GameObject_t9 * ___m_Skill2Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill3Bt
	GameObject_t9 * ___m_Skill3Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill4Bt
	GameObject_t9 * ___m_Skill4Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill5Bt
	GameObject_t9 * ___m_Skill5Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill6Bt
	GameObject_t9 * ___m_Skill6Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill7Bt
	GameObject_t9 * ___m_Skill7Bt;
	// UnityEngine.GameObject SkillBarLogic::m_Skill8Bt
	GameObject_t9 * ___m_Skill8Bt;
	// UnityEngine.GameObject SkillBarLogic::m_SkillAttackBt
	GameObject_t9 * ___m_SkillAttackBt;
	// UnityEngine.GameObject SkillBarLogic::m_SkillXP1Bt
	GameObject_t9 * ___m_SkillXP1Bt;
	// UnityEngine.GameObject SkillBarLogic::m_SkillXP2Bt
	GameObject_t9 * ___m_SkillXP2Bt;
	// UnityEngine.GameObject SkillBarLogic::m_SkillXP3Bt
	GameObject_t9 * ___m_SkillXP3Bt;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp1Obj
	GameObject_t9 * ___m_skillXp1Obj;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp2Obj
	GameObject_t9 * ___m_skillXp2Obj;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp3Obj
	GameObject_t9 * ___m_skillXp3Obj;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp1Lock
	GameObject_t9 * ___m_skillXp1Lock;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp2Lock
	GameObject_t9 * ___m_skillXp2Lock;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp3Lock
	GameObject_t9 * ___m_skillXp3Lock;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp1Gray
	GameObject_t9 * ___m_skillXp1Gray;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp2Gray
	GameObject_t9 * ___m_skillXp2Gray;
	// UnityEngine.GameObject SkillBarLogic::m_skillXp3Gray
	GameObject_t9 * ___m_skillXp3Gray;
	// TweenPosition SkillBarLogic::m_skillXp1Tween
	TweenPosition_t1255 * ___m_skillXp1Tween;
	// TweenPosition SkillBarLogic::m_skillXp2Tween
	TweenPosition_t1255 * ___m_skillXp2Tween;
	// TweenPosition SkillBarLogic::m_skillXp3Tween
	TweenPosition_t1255 * ___m_skillXp3Tween;
	// UISprite SkillBarLogic::m_xpValueIcon
	UISprite_t1202 * ___m_xpValueIcon;
	// System.Boolean SkillBarLogic::m_xpShowBtnState
	bool ___m_xpShowBtnState;
	// System.Int32 SkillBarLogic::m_xpShowIndex
	int32_t ___m_xpShowIndex;
	// TweenAlpha SkillBarLogic::m_xpBg
	TweenAlpha_t1261 * ___m_xpBg;
	// UISpriteAnimation SkillBarLogic::m_Skill1CDEffect
	UISpriteAnimation_t1331 * ___m_Skill1CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill2CDEffect
	UISpriteAnimation_t1331 * ___m_Skill2CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill3CDEffect
	UISpriteAnimation_t1331 * ___m_Skill3CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill4CDEffect
	UISpriteAnimation_t1331 * ___m_Skill4CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill5CDEffect
	UISpriteAnimation_t1331 * ___m_Skill5CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill6CDEffect
	UISpriteAnimation_t1331 * ___m_Skill6CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill7CDEffect
	UISpriteAnimation_t1331 * ___m_Skill7CDEffect;
	// UISpriteAnimation SkillBarLogic::m_Skill8CDEffect
	UISpriteAnimation_t1331 * ___m_Skill8CDEffect;
	// UISpriteAnimation SkillBarLogic::m_CrashCDEffect
	UISpriteAnimation_t1331 * ___m_CrashCDEffect;
	// UnityEngine.GameObject SkillBarLogic::m_AttackGuideObject
	GameObject_t9 * ___m_AttackGuideObject;
	// UnityEngine.GameObject SkillBarLogic::m_CrashBtn
	GameObject_t9 * ___m_CrashBtn;
	// UnityEngine.Vector2 SkillBarLogic::m_vecSkillBtnSize_01
	Vector2_t12  ___m_vecSkillBtnSize_01;
	// UnityEngine.Vector2 SkillBarLogic::m_vecSkillBtnSize_02
	Vector2_t12  ___m_vecSkillBtnSize_02;
	// System.Boolean SkillBarLogic::m_CrashBtnIntroGuide
	bool ___m_CrashBtnIntroGuide;
	// UnityEngine.GameObject SkillBarLogic::m_MountBtn
	GameObject_t9 * ___m_MountBtn;
	// TweenPosition SkillBarLogic::m_xpObj
	TweenPosition_t1255 * ___m_xpObj;
	// SkillXpBtnInfo[] SkillBarLogic::m_MySkillXpInfo
	SkillXpBtnInfoU5BU5D_t1727* ___m_MySkillXpInfo;
	// SkillBarInfo[] SkillBarLogic::m_MySkillBarInfo
	SkillBarInfoU5BU5D_t1728* ___m_MySkillBarInfo;
	// System.Boolean SkillBarLogic::m_bFirstUpdate
	bool ___m_bFirstUpdate;
	// System.Boolean SkillBarLogic::m_bSetSkillBarSuccess
	bool ___m_bSetSkillBarSuccess;
	// System.Int32 SkillBarLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// AttackBarInfo SkillBarLogic::m_AttackBarInfo
	AttackBarInfo_t1724 * ___m_AttackBarInfo;
	// System.Int32 SkillBarLogic::m_NewSkillEffectID
	int32_t ___m_NewSkillEffectID;
	// System.Int32 SkillBarLogic::m_XPSkillEffectID
	int32_t ___m_XPSkillEffectID;
	// System.Int32 SkillBarLogic::m_nXpFullEffectID
	int32_t ___m_nXpFullEffectID;
	// System.Single SkillBarLogic::m_xpHideTime
	float ___m_xpHideTime;
	// System.Single SkillBarLogic::m_xpBtnHitTime
	float ___m_xpBtnHitTime;
	// System.Boolean SkillBarLogic::m_isUseSkillClick
	bool ___m_isUseSkillClick;
	// UnityEngine.GameObject SkillBarLogic::m_TransformSprite
	GameObject_t9 * ___m_TransformSprite;
	// System.Single SkillBarLogic::m_sendSkillTime
	float ___m_sendSkillTime;
	// UnityEngine.GameObject SkillBarLogic::m_skillObj
	GameObject_t9 * ___m_skillObj;
	// UnityEngine.GameObject SkillBarLogic::m_afterChangeModeObj
	GameObject_t9 * ___m_afterChangeModeObj;
	// UnityEngine.GameObject SkillBarLogic::m_mainXpBtnObj
	GameObject_t9 * ___m_mainXpBtnObj;
	// UIImageButton SkillBarLogic::m_PVEBtn
	UIImageButton_t1204 * ___m_PVEBtn;
	// UIImageButton SkillBarLogic::m_PVPBtn
	UIImageButton_t1204 * ___m_PVPBtn;
	// UISprite SkillBarLogic::m_SpritePVEBG
	UISprite_t1202 * ___m_SpritePVEBG;
	// UISprite SkillBarLogic::m_SpritePVPBG
	UISprite_t1202 * ___m_SpritePVPBG;
	// UILabel SkillBarLogic::m_LblPvE
	UILabel_t1176 * ___m_LblPvE;
	// UILabel SkillBarLogic::m_LblPvP
	UILabel_t1176 * ___m_LblPvP;
	// UISprite SkillBarLogic::m_mainXpBtnCanUse
	UISprite_t1202 * ___m_mainXpBtnCanUse;
	// System.Boolean SkillBarLogic::m_isXpBtnOpen
	bool ___m_isXpBtnOpen;
	// System.Boolean SkillBarLogic::m_isChangeMode
	bool ___m_isChangeMode;
	// UnityEngine.GameObject SkillBarLogic::m_objXpRoot
	GameObject_t9 * ___m_objXpRoot;
	// TweenPosition SkillBarLogic::m_TweenPvP
	TweenPosition_t1255 * ___m_TweenPvP;
	// TweenPosition SkillBarLogic::m_TweenPVE
	TweenPosition_t1255 * ___m_TweenPVE;
	// UISlider SkillBarLogic::m_SliderForChoose
	UISlider_t1219 * ___m_SliderForChoose;
	// UnityEngine.GameObject SkillBarLogic::m_BGForChoose
	GameObject_t9 * ___m_BGForChoose;
	// UISprite SkillBarLogic::m_SpritePVE
	UISprite_t1202 * ___m_SpritePVE;
	// UISprite SkillBarLogic::m_SpritePVP
	UISprite_t1202 * ___m_SpritePVP;
	// UnityEngine.Color SkillBarLogic::m_ColorXpEnable
	Color_t939  ___m_ColorXpEnable;
	// UnityEngine.Color SkillBarLogic::m_ColorXpDisable
	Color_t939  ___m_ColorXpDisable;
	// SkillBarLogic/TweenStatus SkillBarLogic::m_TweenStatus
	int32_t ___m_TweenStatus;
	// TransformController SkillBarLogic::m_TransformCon
	TransformController_t1729 * ___m_TransformCon;
	// MUIWave SkillBarLogic::m_UIWave
	MUIWave_t1730 * ___m_UIWave;
	// UnityEngine.GameObject SkillBarLogic::m_TransformOpenBtn
	GameObject_t9 * ___m_TransformOpenBtn;
	// UIEffectBehaviourController SkillBarLogic::m_xpFullEffectCon
	UIEffectBehaviourController_t1731 * ___m_xpFullEffectCon;
	// UnityEngine.GameObject SkillBarLogic::m_EffectPve01
	GameObject_t9 * ___m_EffectPve01;
	// UnityEngine.GameObject SkillBarLogic::m_EffectPve02
	GameObject_t9 * ___m_EffectPve02;
	// UnityEngine.GameObject SkillBarLogic::m_EffectPvP01
	GameObject_t9 * ___m_EffectPvP01;
	// UnityEngine.GameObject SkillBarLogic::m_EffectPvP02
	GameObject_t9 * ___m_EffectPvP02;
	// UnityEngine.GameObject[] SkillBarLogic::m_objHideWhenTween
	GameObjectU5BU5D_t1200* ___m_objHideWhenTween;
	// System.Int32 SkillBarLogic::m_NewGuildDelayId
	int32_t ___m_NewGuildDelayId;
	// UnityEngine.GameObject SkillBarLogic::m_SecondChangeMode
	GameObject_t9 * ___m_SecondChangeMode;
};
struct SkillBarLogic_t1726_StaticFields{
	// System.Single SkillBarLogic::m_pressContinueTime
	float ___m_pressContinueTime;
	// System.Single SkillBarLogic::SENDTIME
	float ___SENDTIME;
	// System.Single SkillBarLogic::CanUseNextSkillTime
	float ___CanUseNextSkillTime;
	// SkillBarLogic SkillBarLogic::m_Instance
	SkillBarLogic_t1726 * ___m_Instance;
};
