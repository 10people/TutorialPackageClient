#pragma once
#include <stdint.h>
// RoleViewLogic
struct RoleViewLogic_t1702;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.String
struct String_t;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// System.Collections.Generic.List`1<TabButton>
struct List_1_t1703;
// UIGrid
struct UIGrid_t1199;
// RoleViewLogic/AfterStart
struct AfterStart_t1701;
// ModelDragLogic
struct ModelDragLogic_t1242;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RoleViewLogic
struct RoleViewLogic_t1702  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RoleViewLogic::m_LeftView
	GameObject_t9 * ___m_LeftView;
	// UnityEngine.GameObject RoleViewLogic::m_AttrView
	GameObject_t9 * ___m_AttrView;
	// UnityEngine.GameObject RoleViewLogic::m_TitleView
	GameObject_t9 * ___m_TitleView;
	// UnityEngine.GameObject RoleViewLogic::m_GemView
	GameObject_t9 * ___m_GemView;
	// UnityEngine.GameObject RoleViewLogic::m_roleParticle
	GameObject_t9 * ___m_roleParticle;
	// UISprite[] RoleViewLogic::m_EquipSlotChooseSprite
	UISpriteU5BU5D_t1201* ___m_EquipSlotChooseSprite;
	// UISprite[] RoleViewLogic::m_EquipSlotIcon
	UISpriteU5BU5D_t1201* ___m_EquipSlotIcon;
	// UISprite[] RoleViewLogic::m_EquipSlotQualityFrame
	UISpriteU5BU5D_t1201* ___m_EquipSlotQualityFrame;
	// System.String RoleViewLogic::m_strName
	String_t* ___m_strName;
	// System.Int32 RoleViewLogic::m_nCombatValue
	int32_t ___m_nCombatValue;
	// System.Int32 RoleViewLogic::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 RoleViewLogic::m_Profession
	int32_t ___m_Profession;
	// System.UInt64 RoleViewLogic::m_RoleGUID
	uint64_t ___m_RoleGUID;
	// System.Int32 RoleViewLogic::m_nCurHp
	int32_t ___m_nCurHp;
	// System.Int32 RoleViewLogic::m_nMaxHP
	int32_t ___m_nMaxHP;
	// System.Int32 RoleViewLogic::m_nCurMp
	int32_t ___m_nCurMp;
	// System.Int32 RoleViewLogic::m_nMaxMp
	int32_t ___m_nMaxMp;
	// System.Int32 RoleViewLogic::m_nCurExp
	int32_t ___m_nCurExp;
	// System.Int32 RoleViewLogic::m_nMaxExp
	int32_t ___m_nMaxExp;
	// System.Int32 RoleViewLogic::m_nOffLineExp
	int32_t ___m_nOffLineExp;
	// System.Int32 RoleViewLogic::m_nOffLineMaxExp
	int32_t ___m_nOffLineMaxExp;
	// System.Int32 RoleViewLogic::m_nPAttck
	int32_t ___m_nPAttck;
	// System.Int32 RoleViewLogic::m_nMAttack
	int32_t ___m_nMAttack;
	// System.Int32 RoleViewLogic::m_nHit
	int32_t ___m_nHit;
	// System.Int32 RoleViewLogic::m_nCritical
	int32_t ___m_nCritical;
	// System.Int32 RoleViewLogic::m_nPDefense
	int32_t ___m_nPDefense;
	// System.Int32 RoleViewLogic::m_MDefense
	int32_t ___m_MDefense;
	// System.Int32 RoleViewLogic::m_DeCritical
	int32_t ___m_DeCritical;
	// System.Int32 RoleViewLogic::m_nDoge
	int32_t ___m_nDoge;
	// System.Int32 RoleViewLogic::m_nStrike
	int32_t ___m_nStrike;
	// System.Int32 RoleViewLogic::m_nCriticalAdd
	int32_t ___m_nCriticalAdd;
	// System.Int32 RoleViewLogic::m_nDuctical
	int32_t ___m_nDuctical;
	// System.Int32 RoleViewLogic::m_nCriticalMis
	int32_t ___m_nCriticalMis;
	// System.Boolean RoleViewLogic::m_bIsNeedUpdateAttr
	bool ___m_bIsNeedUpdateAttr;
	// UnityEngine.GameObject RoleViewLogic::m_LeftAttrView_01
	GameObject_t9 * ___m_LeftAttrView_01;
	// UnityEngine.GameObject RoleViewLogic::m_LeftAttrView_02
	GameObject_t9 * ___m_LeftAttrView_02;
	// UnityEngine.GameObject RoleViewLogic::m_LeftAttrView_03
	GameObject_t9 * ___m_LeftAttrView_03;
	// UnityEngine.GameObject RoleViewLogic::m_ShowMoreInfoBt
	GameObject_t9 * ___m_ShowMoreInfoBt;
	// UnityEngine.GameObject RoleViewLogic::m_CancelShowInfoBt
	GameObject_t9 * ___m_CancelShowInfoBt;
	// UILabel RoleViewLogic::m_LevelValueLable2
	UILabel_t1176 * ___m_LevelValueLable2;
	// UILabel RoleViewLogic::m_ProfessionValueLable2
	UILabel_t1176 * ___m_ProfessionValueLable2;
	// UILabel RoleViewLogic::m_AttackValueLable2
	UILabel_t1176 * ___m_AttackValueLable2;
	// UILabel RoleViewLogic::m_PDefenseValueLable2
	UILabel_t1176 * ___m_PDefenseValueLable2;
	// UILabel RoleViewLogic::m_MDefenseValueLable2
	UILabel_t1176 * ___m_MDefenseValueLable2;
	// UILabel RoleViewLogic::m_GUIDValueLable2
	UILabel_t1176 * ___m_GUIDValueLable2;
	// UILabel RoleViewLogic::m_HPValueLable2
	UILabel_t1176 * ___m_HPValueLable2;
	// UILabel RoleViewLogic::m_MPValueLable2
	UILabel_t1176 * ___m_MPValueLable2;
	// UILabel RoleViewLogic::m_ExpValueLable2
	UILabel_t1176 * ___m_ExpValueLable2;
	// UILabel RoleViewLogic::m_CombatValueLable2
	UILabel_t1176 * ___m_CombatValueLable2;
	// UISprite RoleViewLogic::m_HPSprite2
	UISprite_t1202 * ___m_HPSprite2;
	// UISprite RoleViewLogic::m_MPSprite2
	UISprite_t1202 * ___m_MPSprite2;
	// UISprite RoleViewLogic::m_ExpSprite2
	UISprite_t1202 * ___m_ExpSprite2;
	// UILabel RoleViewLogic::m_CombatValueLable
	UILabel_t1176 * ___m_CombatValueLable;
	// UILabel RoleViewLogic::m_LevelValueLable
	UILabel_t1176 * ___m_LevelValueLable;
	// UILabel RoleViewLogic::m_ProfessionValueLable
	UILabel_t1176 * ___m_ProfessionValueLable;
	// UILabel RoleViewLogic::m_GUIDValueLable
	UILabel_t1176 * ___m_GUIDValueLable;
	// UILabel RoleViewLogic::m_HPValueLable
	UILabel_t1176 * ___m_HPValueLable;
	// UILabel RoleViewLogic::m_MPValueLable
	UILabel_t1176 * ___m_MPValueLable;
	// UILabel RoleViewLogic::m_ExpValueLable
	UILabel_t1176 * ___m_ExpValueLable;
	// UISprite RoleViewLogic::m_HPSprite
	UISprite_t1202 * ___m_HPSprite;
	// UISprite RoleViewLogic::m_MPSprite
	UISprite_t1202 * ___m_MPSprite;
	// UISprite RoleViewLogic::m_ExpSprite
	UISprite_t1202 * ___m_ExpSprite;
	// UISprite RoleViewLogic::m_OffLineExpSprite
	UISprite_t1202 * ___m_OffLineExpSprite;
	// UILabel RoleViewLogic::m_PAttackLable
	UILabel_t1176 * ___m_PAttackLable;
	// UILabel RoleViewLogic::m_MAttckLabel
	UILabel_t1176 * ___m_MAttckLabel;
	// UILabel RoleViewLogic::m_PAttackLable2
	UILabel_t1176 * ___m_PAttackLable2;
	// UILabel RoleViewLogic::m_MAttckLabel2
	UILabel_t1176 * ___m_MAttckLabel2;
	// UILabel RoleViewLogic::m_AttackValueLable
	UILabel_t1176 * ___m_AttackValueLable;
	// UILabel RoleViewLogic::m_HitValueLabel
	UILabel_t1176 * ___m_HitValueLabel;
	// UILabel RoleViewLogic::m_CriticalValueLable
	UILabel_t1176 * ___m_CriticalValueLable;
	// UILabel RoleViewLogic::m_PDefenseValueLable
	UILabel_t1176 * ___m_PDefenseValueLable;
	// UILabel RoleViewLogic::m_MDefenseValueLable
	UILabel_t1176 * ___m_MDefenseValueLable;
	// UILabel RoleViewLogic::m_DecriticalValueLabel
	UILabel_t1176 * ___m_DecriticalValueLabel;
	// UILabel RoleViewLogic::m_DodgeValueLable
	UILabel_t1176 * ___m_DodgeValueLable;
	// UILabel RoleViewLogic::m_StrikeValueLable
	UILabel_t1176 * ___m_StrikeValueLable;
	// UILabel RoleViewLogic::m_CriticalAddValueLable
	UILabel_t1176 * ___m_CriticalAddValueLable;
	// UILabel RoleViewLogic::m_DucticalValueLable
	UILabel_t1176 * ___m_DucticalValueLable;
	// UILabel RoleViewLogic::m_CriticalMisValueLable
	UILabel_t1176 * ___m_CriticalMisValueLable;
	// UILabel RoleViewLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UnityEngine.GameObject RoleViewLogic::m_EquipPackGrid
	GameObject_t9 * ___m_EquipPackGrid;
	// UnityEngine.GameObject RoleViewLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject RoleViewLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// Games.FakeObject.FakeObject RoleViewLogic::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// System.Int32 RoleViewLogic::m_PlayerFakeObjID
	int32_t ___m_PlayerFakeObjID;
	// UnityEngine.GameObject RoleViewLogic::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.Collections.Generic.List`1<TabButton> RoleViewLogic::m_TabButtonList
	List_1_t1703 * ___m_TabButtonList;
	// UnityEngine.GameObject RoleViewLogic::m_TabFashion
	GameObject_t9 * ___m_TabFashion;
	// UIGrid RoleViewLogic::m_TabGrid
	UIGrid_t1199 * ___m_TabGrid;
	// RoleViewLogic/AfterStart RoleViewLogic::m_delAfterStart
	AfterStart_t1701 * ___m_delAfterStart;
	// System.Int32 RoleViewLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject RoleViewLogic::m_BtnClose
	GameObject_t9 * ___m_BtnClose;
	// UnityEngine.GameObject RoleViewLogic::m_EquipSlot_1
	GameObject_t9 * ___m_EquipSlot_1;
	// System.UInt64 RoleViewLogic::m_TakeOffGuid
	uint64_t ___m_TakeOffGuid;
	// ModelDragLogic RoleViewLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UILabel RoleViewLogic::m_GuildInfo
	UILabel_t1176 * ___m_GuildInfo;
	// UILabel RoleViewLogic::m_GuildNameLabel
	UILabel_t1176 * ___m_GuildNameLabel;
	// UISprite RoleViewLogic::m_VipLvlSprite
	UISprite_t1202 * ___m_VipLvlSprite;
	// UISprite RoleViewLogic::m_GemRemindPoint
	UISprite_t1202 * ___m_GemRemindPoint;
	// UISprite[] RoleViewLogic::m_GemsInEquips
	UISpriteU5BU5D_t1201* ___m_GemsInEquips;
};
struct RoleViewLogic_t1702_StaticFields{
	// RoleViewLogic RoleViewLogic::m_Instance
	RoleViewLogic_t1702 * ___m_Instance;
	// System.Boolean RoleViewLogic::m_bHasStartTab
	bool ___m_bHasStartTab;
	// System.Int32 RoleViewLogic::m_nStartTab
	int32_t ___m_nStartTab;
};
