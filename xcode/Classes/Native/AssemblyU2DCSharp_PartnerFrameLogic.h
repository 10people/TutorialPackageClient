#pragma once
#include <stdint.h>
// PartnerFrameLogic
struct PartnerFrameLogic_t1626;
// PartnerFrameLogic_Info
struct PartnerFrameLogic_Info_t1627;
// PartnerFrameLogic_Develop
struct PartnerFrameLogic_Develop_t1628;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UIInput
struct UIInput_t1231;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// Games.Fellow.Fellow
struct Fellow_t1174;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerFrameLogic/TABCONTENT
#include "AssemblyU2DCSharp_PartnerFrameLogic_TABCONTENT.h"
// PartnerFrameLogic
struct PartnerFrameLogic_t1626  : public MonoBehaviour_t18
{
	// PartnerFrameLogic_Info PartnerFrameLogic::m_PartnerFrameLogic_Info
	PartnerFrameLogic_Info_t1627 * ___m_PartnerFrameLogic_Info;
	// PartnerFrameLogic_Develop PartnerFrameLogic::m_PartnerFrameLogic_Develop
	PartnerFrameLogic_Develop_t1628 * ___m_PartnerFrameLogic_Develop;
	// PartnerFrameLogic_Develop PartnerFrameLogic::m_PartnerFrameLogic_Skill
	PartnerFrameLogic_Develop_t1628 * ___m_PartnerFrameLogic_Skill;
	// TabController PartnerFrameLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject PartnerFrameLogic::m_PartnerList
	GameObject_t9 * ___m_PartnerList;
	// UnityEngine.GameObject PartnerFrameLogic::m_PartnerListGrid
	GameObject_t9 * ___m_PartnerListGrid;
	// UnityEngine.GameObject PartnerFrameLogic::m_ChangeNameWindow
	GameObject_t9 * ___m_ChangeNameWindow;
	// UIInput PartnerFrameLogic::m_ChangeNameInput
	UIInput_t1231 * ___m_ChangeNameInput;
	// UnityEngine.GameObject PartnerFrameLogic::m_RebirthWindow
	GameObject_t9 * ___m_RebirthWindow;
	// UISprite PartnerFrameLogic::m_CurFellowIcon
	UISprite_t1202 * ___m_CurFellowIcon;
	// UISprite PartnerFrameLogic::m_CurFellowQualityFrame
	UISprite_t1202 * ___m_CurFellowQualityFrame;
	// UILabel PartnerFrameLogic::m_CurFellowNameLabel
	UILabel_t1176 * ___m_CurFellowNameLabel;
	// UISprite PartnerFrameLogic::m_RebirthFellowIcon
	UISprite_t1202 * ___m_RebirthFellowIcon;
	// UILabel PartnerFrameLogic::m_RebirthFellowNameLabel
	UILabel_t1176 * ___m_RebirthFellowNameLabel;
	// ItemSlotLogic PartnerFrameLogic::m_RebirthItemSlot
	ItemSlotLogic_t1237 * ___m_RebirthItemSlot;
	// UnityEngine.GameObject PartnerFrameLogic::m_PartnerListItem
	GameObject_t9 * ___m_PartnerListItem;
	// PartnerFrameLogic/TABCONTENT PartnerFrameLogic::m_CurTab
	int32_t ___m_CurTab;
	// Games.Fellow.Fellow PartnerFrameLogic::m_FellowBuffer
	Fellow_t1174 * ___m_FellowBuffer;
	// UnityEngine.GameObject PartnerFrameLogic::m_GuidePoint
	GameObject_t9 * ___m_GuidePoint;
	// UISprite PartnerFrameLogic::m_DevelopRemindPoint
	UISprite_t1202 * ___m_DevelopRemindPoint;
	// System.Int32 PartnerFrameLogic::m_NewPlayerGuideFlag_Step
	int32_t ___m_NewPlayerGuideFlag_Step;
	// UnityEngine.GameObject PartnerFrameLogic::m_CloseButton
	GameObject_t9 * ___m_CloseButton;
};
struct PartnerFrameLogic_t1626_StaticFields{
	// PartnerFrameLogic PartnerFrameLogic::m_Instance
	PartnerFrameLogic_t1626 * ___m_Instance;
};
