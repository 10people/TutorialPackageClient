#pragma once
#include <stdint.h>
// PartnerFrameLogic_Breeding
struct PartnerFrameLogic_Breeding_t1630;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UIPathData
struct UIPathData_t1177;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NewplayerGuidPartnerBd
struct NewplayerGuidPartnerBd_t4726  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PartnerChooseWindow
	GameObject_t9 * ___m_PartnerChooseWindow;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_ChooseItemTemplate
	GameObject_t9 * ___m_ChooseItemTemplate;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_ChooseItemGrid
	GameObject_t9 * ___m_ChooseItemGrid;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_OpButtons
	GameObject_t9 * ___m_OpButtons;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PushPartnerButton
	GameObject_t9 * ___m_PushPartnerButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_LockBreedingButton
	GameObject_t9 * ___m_LockBreedingButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_UnLockBreedingButton
	GameObject_t9 * ___m_UnLockBreedingButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_LookForBreedingButton
	GameObject_t9 * ___m_LookForBreedingButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BeginBreedingButton
	GameObject_t9 * ___m_BeginBreedingButton;
	// UISprite NewplayerGuidPartnerBd::m_PlayerFellowSprite
	UISprite_t1202 * ___m_PlayerFellowSprite;
	// UISprite NewplayerGuidPartnerBd::m_FriendFellowSprite
	UISprite_t1202 * ___m_FriendFellowSprite;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PlayerTips
	GameObject_t9 * ___m_PlayerTips;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_FriendTips
	GameObject_t9 * ___m_FriendTips;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PlayerLockFlag
	GameObject_t9 * ___m_PlayerLockFlag;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_FriendLockFlag
	GameObject_t9 * ___m_FriendLockFlag;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BreedingReadyWindow
	GameObject_t9 * ___m_BreedingReadyWindow;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BreedingGoingWindow
	GameObject_t9 * ___m_BreedingGoingWindow;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BreedingOverWindow
	GameObject_t9 * ___m_BreedingOverWindow;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BreedingRuleWindow
	GameObject_t9 * ___m_BreedingRuleWindow;
	// UILabel NewplayerGuidPartnerBd::m_RemainTime
	UILabel_t1176 * ___m_RemainTime;
	// UISprite NewplayerGuidPartnerBd::m_RemainTimeSprite
	UISprite_t1202 * ___m_RemainTimeSprite;
	// UILabel NewplayerGuidPartnerBd::m_ReceiveRemainTime
	UILabel_t1176 * ___m_ReceiveRemainTime;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_BreedingGuidePoint
	GameObject_t9 * ___m_BreedingGuidePoint;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PartnerChooseButton
	GameObject_t9 * ___m_PartnerChooseButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PartnerChooseClose
	GameObject_t9 * ___m_PartnerChooseClose;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PublishConfirmDialog
	GameObject_t9 * ___m_PublishConfirmDialog;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PublishConfirmButton
	GameObject_t9 * ___m_PublishConfirmButton;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_PublishFellowIntro
	GameObject_t9 * ___m_PublishFellowIntro;
	// UnityEngine.GameObject NewplayerGuidPartnerBd::m_ReciveFellowButton
	GameObject_t9 * ___m_ReciveFellowButton;
	// System.Single NewplayerGuidPartnerBd::m_LastAutoFillTime
	float ___m_LastAutoFillTime;
	// System.Int32 NewplayerGuidPartnerBd::m_step
	int32_t ___m_step;
	// System.Boolean NewplayerGuidPartnerBd::m_LockBreeding
	bool ___m_LockBreeding;
};
struct NewplayerGuidPartnerBd_t4726_StaticFields{
	// System.Int32 NewplayerGuidPartnerBd::MAX_STEPS
	int32_t ___MAX_STEPS;
	// System.Single NewplayerGuidPartnerBd::FillSpritIncDeta
	float ___FillSpritIncDeta;
	// PartnerFrameLogic_Breeding NewplayerGuidPartnerBd::m_Instance
	PartnerFrameLogic_Breeding_t1630 * ___m_Instance;
	// UIPathData NewplayerGuidPartnerBd::NewPlayerGuidPartnerBdWindow
	UIPathData_t1177 * ___NewPlayerGuidPartnerBdWindow;
};
