#pragma once
#include <stdint.h>
// OtherRoleViewLogic
struct OtherRoleViewLogic_t1618;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.String
struct String_t;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// UISprite
struct UISprite_t1202;
// Games.FakeObject.OtherFakeObject
struct OtherFakeObject_t1619;
// System.Collections.Generic.List`1<UIImageButton>
struct List_1_t1620;
// ModelDragLogic
struct ModelDragLogic_t1242;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OtherRoleViewLogic/OPEN_TYPE
#include "AssemblyU2DCSharp_OtherRoleViewLogic_OPEN_TYPE.h"
// OtherRoleViewLogic
struct OtherRoleViewLogic_t1618  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject OtherRoleViewLogic::m_AttrView
	GameObject_t9 * ___m_AttrView;
	// UnityEngine.GameObject OtherRoleViewLogic::m_GemView
	GameObject_t9 * ___m_GemView;
	// UISprite[] OtherRoleViewLogic::m_EquipSlotChooseSprite
	UISpriteU5BU5D_t1201* ___m_EquipSlotChooseSprite;
	// UISprite[] OtherRoleViewLogic::m_EquipSlotIcon
	UISpriteU5BU5D_t1201* ___m_EquipSlotIcon;
	// UISprite[] OtherRoleViewLogic::m_EquipSlotQualityFrame
	UISpriteU5BU5D_t1201* ___m_EquipSlotQualityFrame;
	// System.String OtherRoleViewLogic::m_strName
	String_t* ___m_strName;
	// System.Int32 OtherRoleViewLogic::m_nCombatValue
	int32_t ___m_nCombatValue;
	// System.Int32 OtherRoleViewLogic::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 OtherRoleViewLogic::m_Profession
	int32_t ___m_Profession;
	// System.UInt64 OtherRoleViewLogic::m_RoleGUID
	uint64_t ___m_RoleGUID;
	// System.Int32 OtherRoleViewLogic::m_nCurHp
	int32_t ___m_nCurHp;
	// System.Int32 OtherRoleViewLogic::m_nMaxHP
	int32_t ___m_nMaxHP;
	// System.Int32 OtherRoleViewLogic::m_nCurMp
	int32_t ___m_nCurMp;
	// System.Int32 OtherRoleViewLogic::m_nMaxMp
	int32_t ___m_nMaxMp;
	// System.Int32 OtherRoleViewLogic::m_nCurExp
	int32_t ___m_nCurExp;
	// System.Int32 OtherRoleViewLogic::m_nMaxExp
	int32_t ___m_nMaxExp;
	// System.Int32 OtherRoleViewLogic::m_nPAttck
	int32_t ___m_nPAttck;
	// System.Int32 OtherRoleViewLogic::m_nMAttack
	int32_t ___m_nMAttack;
	// System.Int32 OtherRoleViewLogic::m_nHit
	int32_t ___m_nHit;
	// System.Int32 OtherRoleViewLogic::m_nCritical
	int32_t ___m_nCritical;
	// System.Int32 OtherRoleViewLogic::m_nPDefense
	int32_t ___m_nPDefense;
	// System.Int32 OtherRoleViewLogic::m_MDefense
	int32_t ___m_MDefense;
	// System.Int32 OtherRoleViewLogic::m_DeCritical
	int32_t ___m_DeCritical;
	// System.Int32 OtherRoleViewLogic::m_nDoge
	int32_t ___m_nDoge;
	// System.Int32 OtherRoleViewLogic::m_nStrike
	int32_t ___m_nStrike;
	// System.Int32 OtherRoleViewLogic::m_nCriticalAdd
	int32_t ___m_nCriticalAdd;
	// System.Int32 OtherRoleViewLogic::m_nDuctical
	int32_t ___m_nDuctical;
	// System.Int32 OtherRoleViewLogic::m_nCriticalMis
	int32_t ___m_nCriticalMis;
	// System.String OtherRoleViewLogic::m_strGuildName
	String_t* ___m_strGuildName;
	// System.Int32 OtherRoleViewLogic::m_nVipLvl
	int32_t ___m_nVipLvl;
	// UnityEngine.GameObject OtherRoleViewLogic::m_LeftAttrView_01
	GameObject_t9 * ___m_LeftAttrView_01;
	// UnityEngine.GameObject OtherRoleViewLogic::m_LeftAttrView_02
	GameObject_t9 * ___m_LeftAttrView_02;
	// UnityEngine.GameObject OtherRoleViewLogic::m_LeftAttrView_03
	GameObject_t9 * ___m_LeftAttrView_03;
	// UnityEngine.GameObject OtherRoleViewLogic::m_ShowMoreInfoBt
	GameObject_t9 * ___m_ShowMoreInfoBt;
	// UnityEngine.GameObject OtherRoleViewLogic::m_CancelShowInfoBt
	GameObject_t9 * ___m_CancelShowInfoBt;
	// UILabel OtherRoleViewLogic::m_CombatValueLable
	UILabel_t1176 * ___m_CombatValueLable;
	// UILabel OtherRoleViewLogic::m_LevelValueLable
	UILabel_t1176 * ___m_LevelValueLable;
	// UILabel OtherRoleViewLogic::m_ProfessionValueLable
	UILabel_t1176 * ___m_ProfessionValueLable;
	// UILabel OtherRoleViewLogic::m_GUIDValueLable
	UILabel_t1176 * ___m_GUIDValueLable;
	// UILabel OtherRoleViewLogic::m_HPValueLable
	UILabel_t1176 * ___m_HPValueLable;
	// UILabel OtherRoleViewLogic::m_MPValueLable
	UILabel_t1176 * ___m_MPValueLable;
	// UILabel OtherRoleViewLogic::m_ExpValueLable
	UILabel_t1176 * ___m_ExpValueLable;
	// UISlider OtherRoleViewLogic::m_HPSprite
	UISlider_t1219 * ___m_HPSprite;
	// UISlider OtherRoleViewLogic::m_MPSprite
	UISlider_t1219 * ___m_MPSprite;
	// UISlider OtherRoleViewLogic::m_ExpSprite
	UISlider_t1219 * ___m_ExpSprite;
	// UILabel OtherRoleViewLogic::m_PAttackLable
	UILabel_t1176 * ___m_PAttackLable;
	// UILabel OtherRoleViewLogic::m_MAttckLabel
	UILabel_t1176 * ___m_MAttckLabel;
	// UILabel OtherRoleViewLogic::m_AttackValueLable
	UILabel_t1176 * ___m_AttackValueLable;
	// UILabel OtherRoleViewLogic::m_HitValueLabel
	UILabel_t1176 * ___m_HitValueLabel;
	// UILabel OtherRoleViewLogic::m_CriticalValueLable
	UILabel_t1176 * ___m_CriticalValueLable;
	// UILabel OtherRoleViewLogic::m_PDefenseValueLable
	UILabel_t1176 * ___m_PDefenseValueLable;
	// UILabel OtherRoleViewLogic::m_MDefenseValueLable
	UILabel_t1176 * ___m_MDefenseValueLable;
	// UILabel OtherRoleViewLogic::m_DecriticalValueLabel
	UILabel_t1176 * ___m_DecriticalValueLabel;
	// UILabel OtherRoleViewLogic::m_DodgeValueLable
	UILabel_t1176 * ___m_DodgeValueLable;
	// UILabel OtherRoleViewLogic::m_StrikeValueLable
	UILabel_t1176 * ___m_StrikeValueLable;
	// UILabel OtherRoleViewLogic::m_CriticalAddValueLable
	UILabel_t1176 * ___m_CriticalAddValueLable;
	// UILabel OtherRoleViewLogic::m_DucticalValueLable
	UILabel_t1176 * ___m_DucticalValueLable;
	// UILabel OtherRoleViewLogic::m_CriticalMisValueLable
	UILabel_t1176 * ___m_CriticalMisValueLable;
	// UILabel OtherRoleViewLogic::m_GuildInfo
	UILabel_t1176 * ___m_GuildInfo;
	// UILabel OtherRoleViewLogic::m_GuildNameLabel
	UILabel_t1176 * ___m_GuildNameLabel;
	// UISprite OtherRoleViewLogic::m_VipLvlSprite
	UISprite_t1202 * ___m_VipLvlSprite;
	// UILabel OtherRoleViewLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UnityEngine.GameObject OtherRoleViewLogic::m_EquipPackGrid
	GameObject_t9 * ___m_EquipPackGrid;
	// UnityEngine.GameObject OtherRoleViewLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject OtherRoleViewLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// Games.FakeObject.OtherFakeObject OtherRoleViewLogic::m_PlayerFakeObj
	OtherFakeObject_t1619 * ___m_PlayerFakeObj;
	// UnityEngine.GameObject OtherRoleViewLogic::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.Collections.Generic.List`1<UIImageButton> OtherRoleViewLogic::m_TabButtonList
	List_1_t1620 * ___m_TabButtonList;
	// ModelDragLogic OtherRoleViewLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UILabel OtherRoleViewLogic::m_HPValueLable2
	UILabel_t1176 * ___m_HPValueLable2;
	// UILabel OtherRoleViewLogic::m_MPValueLable2
	UILabel_t1176 * ___m_MPValueLable2;
	// UILabel OtherRoleViewLogic::m_ExpValueLable2
	UILabel_t1176 * ___m_ExpValueLable2;
	// UISlider OtherRoleViewLogic::m_HPSprite2
	UISlider_t1219 * ___m_HPSprite2;
	// UISlider OtherRoleViewLogic::m_MPSprite2
	UISlider_t1219 * ___m_MPSprite2;
	// UISlider OtherRoleViewLogic::m_ExpSprite2
	UISlider_t1219 * ___m_ExpSprite2;
	// UILabel OtherRoleViewLogic::m_LevelValueLable2
	UILabel_t1176 * ___m_LevelValueLable2;
	// UILabel OtherRoleViewLogic::m_ProfessionValueLable2
	UILabel_t1176 * ___m_ProfessionValueLable2;
	// UILabel OtherRoleViewLogic::m_AttackValueLable2
	UILabel_t1176 * ___m_AttackValueLable2;
	// UILabel OtherRoleViewLogic::m_PDefenseValueLable2
	UILabel_t1176 * ___m_PDefenseValueLable2;
	// UILabel OtherRoleViewLogic::m_MDefenseValueLable2
	UILabel_t1176 * ___m_MDefenseValueLable2;
	// UILabel OtherRoleViewLogic::m_GUIDValueLable2
	UILabel_t1176 * ___m_GUIDValueLable2;
	// UILabel OtherRoleViewLogic::m_CombatValueLable2
	UILabel_t1176 * ___m_CombatValueLable2;
	// UILabel OtherRoleViewLogic::m_PlayerLevel
	UILabel_t1176 * ___m_PlayerLevel;
	// UISprite[] OtherRoleViewLogic::m_GemsInEquips
	UISpriteU5BU5D_t1201* ___m_GemsInEquips;
};
struct OtherRoleViewLogic_t1618_StaticFields{
	// OtherRoleViewLogic OtherRoleViewLogic::m_Instance
	OtherRoleViewLogic_t1618 * ___m_Instance;
	// OtherRoleViewLogic/OPEN_TYPE OtherRoleViewLogic::m_oPenType
	int32_t ___m_oPenType;
};
