#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// TweenScale
struct TweenScale_t1259;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<SkillRootButtonItemLogic>
struct List_1_t1746;
// SkillRootButtonItemLogic
struct SkillRootButtonItemLogic_t1745;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// System.Collections.Generic.List`1<UISprite>
struct List_1_t1305;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1747;
// System.Int32[]
struct Int32U5BU5D_t116;
// UIFont
struct UIFont_t1286;
// UIAtlas
struct UIAtlas_t1593;
// CG_SKILL_LEVELUP_TO_MAX
struct CG_SKILL_LEVELUP_TO_MAX_t1748;
// SkillRootLogic
struct SkillRootLogic_t1749;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SkillRootLogic
struct SkillRootLogic_t1749  : public MonoBehaviour_t18
{
	// UISprite SkillRootLogic::m_SkillButtonDragSprite
	UISprite_t1202 * ___m_SkillButtonDragSprite;
	// UISprite SkillRootLogic::m_SkillBarDragSprite
	UISprite_t1202 * ___m_SkillBarDragSprite;
	// UILabel SkillRootLogic::m_InfoSkillName
	UILabel_t1176 * ___m_InfoSkillName;
	// UILabel SkillRootLogic::m_InfoSkillCDTime
	UILabel_t1176 * ___m_InfoSkillCDTime;
	// UILabel SkillRootLogic::m_InfoSkillDel
	UILabel_t1176 * ___m_InfoSkillDel;
	// UILabel SkillRootLogic::m_InfoSkillType
	UILabel_t1176 * ___m_InfoSkillType;
	// UILabel SkillRootLogic::m_InfoSkillDec
	UILabel_t1176 * ___m_InfoSkillDec;
	// UILabel SkillRootLogic::m_InfoNextSkillDec
	UILabel_t1176 * ___m_InfoNextSkillDec;
	// UILabel SkillRootLogic::m_SkillUpNeedExp
	UILabel_t1176 * ___m_SkillUpNeedExp;
	// UILabel SkillRootLogic::m_SkillUpNeedLev
	UILabel_t1176 * ___m_SkillUpNeedLev;
	// UILabel SkillRootLogic::m_SkillUpNeedCoin
	UILabel_t1176 * ___m_SkillUpNeedCoin;
	// UILabel SkillRootLogic::m_SkillLevel
	UILabel_t1176 * ___m_SkillLevel;
	// UILabel SkillRootLogic::m_SkillExp
	UILabel_t1176 * ___m_SkillExp;
	// UILabel SkillRootLogic::m_coinCur
	UILabel_t1176 * ___m_coinCur;
	// UnityEngine.GameObject SkillRootLogic::m_LevelUpInfo
	GameObject_t9 * ___m_LevelUpInfo;
	// UnityEngine.GameObject SkillRootLogic::m_CurSkillDec
	GameObject_t9 * ___m_CurSkillDec;
	// UnityEngine.GameObject SkillRootLogic::m_NextSkillDec
	GameObject_t9 * ___m_NextSkillDec;
	// UIImageButton SkillRootLogic::m_LevelUpBt
	UIImageButton_t1204 * ___m_LevelUpBt;
	// UIImageButton SkillRootLogic::m_oneKeyLevelUpBt
	UIImageButton_t1204 * ___m_oneKeyLevelUpBt;
	// UnityEngine.GameObject SkillRootLogic::m_LeftSkillDescBt
	GameObject_t9 * ___m_LeftSkillDescBt;
	// UnityEngine.GameObject SkillRootLogic::m_RightSkillDescBt
	GameObject_t9 * ___m_RightSkillDescBt;
	// UnityEngine.GameObject SkillRootLogic::m_NormalSkillInfo
	GameObject_t9 * ___m_NormalSkillInfo;
	// UnityEngine.GameObject SkillRootLogic::m_MasterSkillInfo
	GameObject_t9 * ___m_MasterSkillInfo;
	// UISprite SkillRootLogic::m_SkillEffectIcon
	UISprite_t1202 * ___m_SkillEffectIcon;
	// UnityEngine.GameObject SkillRootLogic::m_SkillBak
	GameObject_t9 * ___m_SkillBak;
	// TweenScale SkillRootLogic::m_SkillEffectScale
	TweenScale_t1259 * ___m_SkillEffectScale;
	// UnityEngine.GameObject SkillRootLogic::m_LevelBtTipsIcon
	GameObject_t9 * ___m_LevelBtTipsIcon;
	// UnityEngine.GameObject SkillRootLogic::m_MasterLevelBtTipsIcon
	GameObject_t9 * ___m_MasterLevelBtTipsIcon;
	// UnityEngine.GameObject[] SkillRootLogic::m_EmptySkillBarItem
	GameObjectU5BU5D_t1200* ___m_EmptySkillBarItem;
	// UILabel SkillRootLogic::m_CurTorchLabel
	UILabel_t1176 * ___m_CurTorchLabel;
	// UILabel SkillRootLogic::m_NeedUserTorch
	UILabel_t1176 * ___m_NeedUserTorch;
	// UILabel SkillRootLogic::m_NeedMasterTorch
	UILabel_t1176 * ___m_NeedMasterTorch;
	// UILabel SkillRootLogic::m_NeedLevel
	UILabel_t1176 * ___m_NeedLevel;
	// UnityEngine.GameObject SkillRootLogic::m_MasterLevelupInfo
	GameObject_t9 * ___m_MasterLevelupInfo;
	// UIImageButton SkillRootLogic::m_MasterLevelUpBt
	UIImageButton_t1204 * ___m_MasterLevelUpBt;
	// UnityEngine.GameObject SkillRootLogic::m_MasterLevelupLimit
	GameObject_t9 * ___m_MasterLevelupLimit;
	// UILabel SkillRootLogic::m_MasterSkillNotUseTips
	UILabel_t1176 * ___m_MasterSkillNotUseTips;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkillRootLogic::m_skillBarList
	List_1_t1289 * ___m_skillBarList;
	// System.Collections.Generic.List`1<SkillRootButtonItemLogic> SkillRootLogic::m_skillButtonItemLogicList
	List_1_t1746 * ___m_skillButtonItemLogicList;
	// SkillRootButtonItemLogic SkillRootLogic::m_curClickBtItem
	SkillRootButtonItemLogic_t1745 * ___m_curClickBtItem;
	// System.Int32 SkillRootLogic::m_nSelectSkillIndex
	int32_t ___m_nSelectSkillIndex;
	// UnityEngine.GameObject SkillRootLogic::m_SkillBtGird
	GameObject_t9 * ___m_SkillBtGird;
	// UnityEngine.GameObject SkillRootLogic::m_SkillBarGird
	GameObject_t9 * ___m_SkillBarGird;
	// UIDraggablePanel SkillRootLogic::m_skillBarDraggablePanel
	UIDraggablePanel_t1165 * ___m_skillBarDraggablePanel;
	// UIDraggablePanel SkillRootLogic::m_skillBtDraggablePanel
	UIDraggablePanel_t1165 * ___m_skillBtDraggablePanel;
	// System.Int32 SkillRootLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// System.Collections.Generic.List`1<UISprite> SkillRootLogic::m_skillItemList
	List_1_t1305 * ___m_skillItemList;
	// System.Collections.Generic.List`1<UILabel> SkillRootLogic::m_skillNameList
	List_1_t1747 * ___m_skillNameList;
	// System.Collections.Generic.List`1<UILabel> SkillRootLogic::m_skillLevelList
	List_1_t1747 * ___m_skillLevelList;
	// System.Collections.Generic.List`1<UISprite> SkillRootLogic::m_skillSelectBKList
	List_1_t1305 * ___m_skillSelectBKList;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkillRootLogic::m_activeObj
	List_1_t1289 * ___m_activeObj;
	// System.Collections.Generic.List`1<UISprite> SkillRootLogic::m_skillRedRemindPoint
	List_1_t1305 * ___m_skillRedRemindPoint;
	// System.Int32[] SkillRootLogic::m_skillIdList
	Int32U5BU5D_t116* ___m_skillIdList;
	// System.Int32 SkillRootLogic::m_nSelectIndex
	int32_t ___m_nSelectIndex;
	// UnityEngine.GameObject SkillRootLogic::m_showOneKeyLevelUp
	GameObject_t9 * ___m_showOneKeyLevelUp;
	// UILabel SkillRootLogic::m_showDetailLevelUp
	UILabel_t1176 * ___m_showDetailLevelUp;
	// UILabel SkillRootLogic::m_consumeCount
	UILabel_t1176 * ___m_consumeCount;
	// UILabel SkillRootLogic::m_coin
	UILabel_t1176 * ___m_coin;
	// UnityEngine.GameObject SkillRootLogic::m_skillIntroObj
	GameObject_t9 * ___m_skillIntroObj;
	// UILabel SkillRootLogic::m_skillIntroLabel
	UILabel_t1176 * ___m_skillIntroLabel;
	// UISprite SkillRootLogic::m_skillIntroSpr
	UISprite_t1202 * ___m_skillIntroSpr;
	// UIFont SkillRootLogic::m_font
	UIFont_t1286 * ___m_font;
	// System.Single SkillRootLogic::m_spacehight
	float ___m_spacehight;
	// UIAtlas SkillRootLogic::m_skillAtlas
	UIAtlas_t1593 * ___m_skillAtlas;
	// UIAtlas SkillRootLogic::m_CommonAtlas
	UIAtlas_t1593 * ___m_CommonAtlas;
	// CG_SKILL_LEVELUP_TO_MAX SkillRootLogic::CG_SKILL_LEVELUP_TO_MAX_Packet
	CG_SKILL_LEVELUP_TO_MAX_t1748 * ___CG_SKILL_LEVELUP_TO_MAX_Packet;
};
struct SkillRootLogic_t1749_StaticFields{
	// System.Int32 SkillRootLogic::CAN_LEVELUP_SKILL_COUNT
	int32_t ___CAN_LEVELUP_SKILL_COUNT;
	// SkillRootLogic SkillRootLogic::m_Instance
	SkillRootLogic_t1749 * ___m_Instance;
};
