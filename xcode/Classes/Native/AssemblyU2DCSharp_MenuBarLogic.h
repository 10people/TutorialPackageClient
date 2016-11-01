#pragma once
#include <stdint.h>
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// MenuBarLogic
struct MenuBarLogic_t1544;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.Transform
struct Transform_t78;
// UISprite
struct UISprite_t1202;
// TweenScale
struct TweenScale_t1259;
// TweenAlpha
struct TweenAlpha_t1261;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MenuBarLogic
struct MenuBarLogic_t1544  : public MonoBehaviour_t18
{
	// UnityEngine.BoxCollider MenuBarLogic::m_BackgroundBox
	BoxCollider_t128 * ___m_BackgroundBox;
	// System.Int32 MenuBarLogic::m_NewPlayerGuideIndex
	int32_t ___m_NewPlayerGuideIndex;
	// UnityEngine.GameObject MenuBarLogic::m_BackButton
	GameObject_t9 * ___m_BackButton;
	// System.Boolean MenuBarLogic::m_bFold
	bool ___m_bFold;
	// UnityEngine.GameObject MenuBarLogic::m_Role
	GameObject_t9 * ___m_Role;
	// UnityEngine.GameObject MenuBarLogic::m_EquipEnchance
	GameObject_t9 * ___m_EquipEnchance;
	// UnityEngine.GameObject MenuBarLogic::m_Belle
	GameObject_t9 * ___m_Belle;
	// UnityEngine.GameObject MenuBarLogic::m_Fellow
	GameObject_t9 * ___m_Fellow;
	// UnityEngine.GameObject MenuBarLogic::m_BackPack
	GameObject_t9 * ___m_BackPack;
	// UnityEngine.GameObject MenuBarLogic::m_XiaKe
	GameObject_t9 * ___m_XiaKe;
	// UnityEngine.GameObject MenuBarLogic::m_Guild
	GameObject_t9 * ___m_Guild;
	// UnityEngine.GameObject MenuBarLogic::m_GuildNewReserveFlag
	GameObject_t9 * ___m_GuildNewReserveFlag;
	// UnityEngine.GameObject MenuBarLogic::m_Farm
	GameObject_t9 * ___m_Farm;
	// UnityEngine.GameObject MenuBarLogic::m_Skill
	GameObject_t9 * ___m_Skill;
	// UnityEngine.GameObject MenuBarLogic::m_SysShop
	GameObject_t9 * ___m_SysShop;
	// UnityEngine.GameObject MenuBarLogic::m_Notice
	GameObject_t9 * ___m_Notice;
	// UnityEngine.GameObject MenuBarLogic::m_Mission
	GameObject_t9 * ___m_Mission;
	// UILabel MenuBarLogic::m_BelleCountTip
	UILabel_t1176 * ___m_BelleCountTip;
	// UIGrid MenuBarLogic::m_TopGrid
	UIGrid_t1199 * ___m_TopGrid;
	// UILabel MenuBarLogic::m_RestaurantCountTip
	UILabel_t1176 * ___m_RestaurantCountTip;
	// UnityEngine.Transform MenuBarLogic::m_OffsetTrans
	Transform_t78 * ___m_OffsetTrans;
	// UnityEngine.GameObject MenuBarLogic::m_SidesTweenObject
	GameObject_t9 * ___m_SidesTweenObject;
	// UnityEngine.GameObject MenuBarLogic::m_OtherTweenObject
	GameObject_t9 * ___m_OtherTweenObject;
	// UISprite MenuBarLogic::m_PartnerCountTip
	UISprite_t1202 * ___m_PartnerCountTip;
	// UISprite MenuBarLogic::m_SkillCountTip
	UISprite_t1202 * ___m_SkillCountTip;
	// UISprite MenuBarLogic::m_SystemCountTip
	UISprite_t1202 * ___m_SystemCountTip;
	// UISprite MenuBarLogic::m_RoleCountTip
	UISprite_t1202 * ___m_RoleCountTip;
	// UISprite MenuBarLogic::m_MountRemindPoint
	UISprite_t1202 * ___m_MountRemindPoint;
	// UnityEngine.GameObject MenuBarLogic::m_NewButton
	GameObject_t9 * ___m_NewButton;
	// System.Boolean MenuBarLogic::m_bShowScaleAni
	bool ___m_bShowScaleAni;
	// System.Boolean MenuBarLogic::m_bScaleAniDir
	bool ___m_bScaleAniDir;
	// TweenScale MenuBarLogic::sideTweenScale
	TweenScale_t1259 * ___sideTweenScale;
	// TweenScale MenuBarLogic::otherTweenScale
	TweenScale_t1259 * ___otherTweenScale;
	// TweenAlpha MenuBarLogic::bgTween
	TweenAlpha_t1261 * ___bgTween;
	// System.Boolean MenuBarLogic::m_NewButtonEffectFlag
	bool ___m_NewButtonEffectFlag;
};
struct MenuBarLogic_t1544_StaticFields{
	// System.Boolean MenuBarLogic::m_Demo30
	bool ___m_Demo30;
	// MenuBarLogic MenuBarLogic::m_Instance
	MenuBarLogic_t1544 * ___m_Instance;
};
