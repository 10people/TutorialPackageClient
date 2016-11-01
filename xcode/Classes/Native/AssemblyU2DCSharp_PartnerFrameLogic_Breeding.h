#pragma once
#include <stdint.h>
// PartnerFrameLogic_Breeding
struct PartnerFrameLogic_Breeding_t1630;
// UnityEngine.GameObject
struct GameObject_t9;
// UIViewport
struct UIViewport_t1631;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// PartnerFrameLogic_PublishConfirmDialog
struct PartnerFrameLogic_PublishConfirmDialog_t1632;
// Games.Fellow.Fellow
struct Fellow_t1174;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PartnerFrameLogic_Breeding
struct PartnerFrameLogic_Breeding_t1630  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PartnerChooseWindow
	GameObject_t9 * ___m_PartnerChooseWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_ChooseItemTemplate
	GameObject_t9 * ___m_ChooseItemTemplate;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_ChooseItemGrid
	GameObject_t9 * ___m_ChooseItemGrid;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_OpButtons
	GameObject_t9 * ___m_OpButtons;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PushPartnerButton
	GameObject_t9 * ___m_PushPartnerButton;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PlayerFellowModel
	GameObject_t9 * ___m_PlayerFellowModel;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_FriendFellowModel
	GameObject_t9 * ___m_FriendFellowModel;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_LockBreedingButton
	GameObject_t9 * ___m_LockBreedingButton;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_UnLockBreedingButton
	GameObject_t9 * ___m_UnLockBreedingButton;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_LookForBreedingButton
	GameObject_t9 * ___m_LookForBreedingButton;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_BeginBreedingButton
	GameObject_t9 * ___m_BeginBreedingButton;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PlayerTips
	GameObject_t9 * ___m_PlayerTips;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_FriendTips
	GameObject_t9 * ___m_FriendTips;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PlayerLockFlag
	GameObject_t9 * ___m_PlayerLockFlag;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_FriendLockFlag
	GameObject_t9 * ___m_FriendLockFlag;
	// UIViewport PartnerFrameLogic_Breeding::m_BreedingViewport
	UIViewport_t1631 * ___m_BreedingViewport;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_BreedingReadyWindow
	GameObject_t9 * ___m_BreedingReadyWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_BreedingGoingWindow
	GameObject_t9 * ___m_BreedingGoingWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_BreedingOverWindow
	GameObject_t9 * ___m_BreedingOverWindow;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_BreedingRuleWindow
	GameObject_t9 * ___m_BreedingRuleWindow;
	// UILabel PartnerFrameLogic_Breeding::m_RemainTime
	UILabel_t1176 * ___m_RemainTime;
	// UISprite PartnerFrameLogic_Breeding::m_RemainTimeSprite
	UISprite_t1202 * ___m_RemainTimeSprite;
	// UILabel PartnerFrameLogic_Breeding::m_ReceiveRemainTime
	UILabel_t1176 * ___m_ReceiveRemainTime;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_PartnerAttrWindow
	GameObject_t9 * ___m_PartnerAttrWindow;
	// UISprite PartnerFrameLogic_Breeding::m_PartnerAttr_HeadIcon
	UISprite_t1202 * ___m_PartnerAttr_HeadIcon;
	// UISprite PartnerFrameLogic_Breeding::m_PartnerAttr_Quality
	UISprite_t1202 * ___m_PartnerAttr_Quality;
	// UILabel PartnerFrameLogic_Breeding::m_PartnerAttr_Name
	UILabel_t1176 * ___m_PartnerAttr_Name;
	// UILabel PartnerFrameLogic_Breeding::m_PartnerAttr_Lucky
	UILabel_t1176 * ___m_PartnerAttr_Lucky;
	// UILabel PartnerFrameLogic_Breeding::m_PartnerAttr_Level
	UILabel_t1176 * ___m_PartnerAttr_Level;
	// UISprite PartnerFrameLogic_Breeding::m_PartnerAttr_TalentIcon
	UISprite_t1202 * ___m_PartnerAttr_TalentIcon;
	// UISprite PartnerFrameLogic_Breeding::m_PartnerAttr_TalentQuality
	UISprite_t1202 * ___m_PartnerAttr_TalentQuality;
	// UILabel PartnerFrameLogic_Breeding::m_PartnerAttr_TalentName
	UILabel_t1176 * ___m_PartnerAttr_TalentName;
	// UILabel PartnerFrameLogic_Breeding::m_PartnerAttr_TalentDesc
	UILabel_t1176 * ___m_PartnerAttr_TalentDesc;
	// PartnerFrameLogic_PublishConfirmDialog PartnerFrameLogic_Breeding::m_PublishConfirmDialog
	PartnerFrameLogic_PublishConfirmDialog_t1632 * ___m_PublishConfirmDialog;
	// Games.Fellow.Fellow PartnerFrameLogic_Breeding::m_BabyFellow
	Fellow_t1174 * ___m_BabyFellow;
	// Games.Fellow.Fellow PartnerFrameLogic_Breeding::m_BabyFellowBuffer
	Fellow_t1174 * ___m_BabyFellowBuffer;
	// System.Int32 PartnerFrameLogic_Breeding::m_FellowIndex
	int32_t ___m_FellowIndex;
	// System.Int32 PartnerFrameLogic_Breeding::m_FellowIndexBuffer
	int32_t ___m_FellowIndexBuffer;
	// Games.FakeObject.FakeObject PartnerFrameLogic_Breeding::m_ChoosePartnerFakeObj
	FakeObject_t1241 * ___m_ChoosePartnerFakeObj;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_ChooseFakeObjGameObject
	GameObject_t9 * ___m_ChooseFakeObjGameObject;
	// Games.FakeObject.FakeObject PartnerFrameLogic_Breeding::m_FriendPartnerFakeObj
	FakeObject_t1241 * ___m_FriendPartnerFakeObj;
	// UnityEngine.GameObject PartnerFrameLogic_Breeding::m_FriendFakeObjGameObject
	GameObject_t9 * ___m_FriendFakeObjGameObject;
	// System.Boolean PartnerFrameLogic_Breeding::m_LockBreeding
	bool ___m_LockBreeding;
};
struct PartnerFrameLogic_Breeding_t1630_StaticFields{
	// PartnerFrameLogic_Breeding PartnerFrameLogic_Breeding::m_Instance
	PartnerFrameLogic_Breeding_t1630 * ___m_Instance;
};
