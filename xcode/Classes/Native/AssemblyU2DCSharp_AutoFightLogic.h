#pragma once
#include <stdint.h>
// AutoFightLogic
struct AutoFightLogic_t1218;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// UIToggle
struct UIToggle_t1220;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UIToggle[]
struct UIToggleU5BU5D_t1221;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// AutoitemLogicEx
struct AutoitemLogicEx_t1222;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoFightLogic
struct AutoFightLogic_t1218  : public MonoBehaviour_t18
{
	// UILabel AutoFightLogic::m_AutoFightInfoHp
	UILabel_t1176 * ___m_AutoFightInfoHp;
	// UISlider AutoFightLogic::m_AutoFightInfoHpSlider
	UISlider_t1219 * ___m_AutoFightInfoHpSlider;
	// UILabel AutoFightLogic::m_AutoFightInfoMp
	UILabel_t1176 * ___m_AutoFightInfoMp;
	// UISlider AutoFightLogic::m_AutoFightInfoMppSlider
	UISlider_t1219 * ___m_AutoFightInfoMppSlider;
	// UIToggle AutoFightLogic::m_AutoFightBaiSe
	UIToggle_t1220 * ___m_AutoFightBaiSe;
	// UIToggle AutoFightLogic::m_AutoFightYouXiu
	UIToggle_t1220 * ___m_AutoFightYouXiu;
	// UIToggle AutoFightLogic::m_AutoFightJingLiang
	UIToggle_t1220 * ___m_AutoFightJingLiang;
	// UIToggle AutoFightLogic::m_AutoFightTeam
	UIToggle_t1220 * ___m_AutoFightTeam;
	// UIToggle AutoFightLogic::m_AutoFightReqTeam
	UIToggle_t1220 * ___m_AutoFightReqTeam;
	// UIToggle AutoFightLogic::m_AutoActivity
	UIToggle_t1220 * ___m_AutoActivity;
	// UISprite AutoFightLogic::m_AutoFightInfoHpIndex
	UISprite_t1202 * ___m_AutoFightInfoHpIndex;
	// UISprite AutoFightLogic::m_AutoFightInfoMpIndex
	UISprite_t1202 * ___m_AutoFightInfoMpIndex;
	// UISprite AutoFightLogic::m_NilAutoFightInfoHp
	UISprite_t1202 * ___m_NilAutoFightInfoHp;
	// UISprite AutoFightLogic::m_NilAutoFightInfoMp
	UISprite_t1202 * ___m_NilAutoFightInfoMp;
	// UISprite AutoFightLogic::m_AutoFightMpSprite
	UISprite_t1202 * ___m_AutoFightMpSprite;
	// UISprite AutoFightLogic::m_AutoFightInfoEquipIndex
	UISprite_t1202 * ___m_AutoFightInfoEquipIndex;
	// UISprite AutoFightLogic::m_NilAutoFightInfoEquip
	UISprite_t1202 * ___m_NilAutoFightInfoEquip;
	// UISprite AutoFightLogic::m_AutoFightInfoEquipQuality
	UISprite_t1202 * ___m_AutoFightInfoEquipQuality;
	// System.Int32 AutoFightLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UILabel AutoFightLogic::m_PickUpInfo
	UILabel_t1176 * ___m_PickUpInfo;
	// UnityEngine.GameObject AutoFightLogic::m_PickUpDisable
	GameObject_t9 * ___m_PickUpDisable;
	// UILabel AutoFightLogic::m_AutoEquipMedicionText
	UILabel_t1176 * ___m_AutoEquipMedicionText;
	// UISprite AutoFightLogic::m_AutoEnhanceRemindPoint
	UISprite_t1202 * ___m_AutoEnhanceRemindPoint;
	// UISprite AutoFightLogic::m_AutoEnhanceRemindItemPoint
	UISprite_t1202 * ___m_AutoEnhanceRemindItemPoint;
	// System.Int32 AutoFightLogic::m_viplimit
	int32_t ___m_viplimit;
	// System.Boolean AutoFightLogic::m_IsAutoFight
	bool ___m_IsAutoFight;
	// System.Int32 AutoFightLogic::skillId0
	int32_t ___skillId0;
	// System.Int32 AutoFightLogic::skillId1
	int32_t ___skillId1;
	// System.Int32 AutoFightLogic::skillId2
	int32_t ___skillId2;
	// System.Int32 AutoFightLogic::skillId3
	int32_t ___skillId3;
	// System.Int32 AutoFightLogic::skillId4
	int32_t ___skillId4;
	// System.Int32 AutoFightLogic::skillId5
	int32_t ___skillId5;
	// System.Int32 AutoFightLogic::skillId6
	int32_t ___skillId6;
	// System.Int32 AutoFightLogic::skillId7
	int32_t ___skillId7;
	// UIToggle[] AutoFightLogic::m_skillToggle
	UIToggleU5BU5D_t1221* ___m_skillToggle;
	// UISprite[] AutoFightLogic::m_skillSprite
	UISpriteU5BU5D_t1201* ___m_skillSprite;
	// UnityEngine.GameObject[] AutoFightLogic::m_skillGameObj
	GameObjectU5BU5D_t1200* ___m_skillGameObj;
	// UnityEngine.GameObject AutoFightLogic::m_MedicineAndSkill
	GameObject_t9 * ___m_MedicineAndSkill;
	// UnityEngine.GameObject AutoFightLogic::m_TeamAndStreng
	GameObject_t9 * ___m_TeamAndStreng;
	// UISprite AutoFightLogic::m_LeftHightLight
	UISprite_t1202 * ___m_LeftHightLight;
	// UISprite AutoFightLogic::m_RightHightLight
	UISprite_t1202 * ___m_RightHightLight;
	// UnityEngine.GameObject AutoFightLogic::m_ChooseMedicineRoot
	GameObject_t9 * ___m_ChooseMedicineRoot;
	// UnityEngine.GameObject AutoFightLogic::m_ItemGrid
	GameObject_t9 * ___m_ItemGrid;
	// UnityEngine.GameObject AutoFightLogic::m_ResItem
	GameObject_t9 * ___m_ResItem;
	// AutoitemLogicEx AutoFightLogic::m_SelectItem
	AutoitemLogicEx_t1222 * ___m_SelectItem;
	// UnityEngine.GameObject AutoFightLogic::m_ChooseObj
	GameObject_t9 * ___m_ChooseObj;
};
struct AutoFightLogic_t1218_StaticFields{
	// AutoFightLogic AutoFightLogic::m_Instance
	AutoFightLogic_t1218 * ___m_Instance;
};
