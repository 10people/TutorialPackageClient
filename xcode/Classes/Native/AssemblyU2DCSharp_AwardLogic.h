#pragma once
#include <stdint.h>
// TabController
struct TabController_t1209;
// TabButton
struct TabButton_t1210;
// DayAwardLogic
struct DayAwardLogic_t1226;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// OnlineAwardLogic
struct OnlineAwardLogic_t1227;
// AwardLogic/AfterCallDelegate
struct AfterCallDelegate_t1225;
// DaySignAwardLogic
struct DaySignAwardLogic_t1228;
// NewServerAwardLogic
struct NewServerAwardLogic_t1229;
// UIGrid
struct UIGrid_t1199;
// NewOnlineAwardLogic
struct NewOnlineAwardLogic_t1230;
// UIInput
struct UIInput_t1231;
// New7DayOnlineAwardLogic
struct New7DayOnlineAwardLogic_t1232;
// UIControllerBase`1<AwardLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_0.h"
// AwardLogic
struct AwardLogic_t1233  : public UIControllerBase_1_t1234
{
	// TabController AwardLogic::m_TabButton
	TabController_t1209 * ___m_TabButton;
	// TabButton AwardLogic::m_TabDayAward
	TabButton_t1210 * ___m_TabDayAward;
	// DayAwardLogic AwardLogic::m_DayAwardRoot
	DayAwardLogic_t1226 * ___m_DayAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_DayAwardTip
	GameObject_t9 * ___m_DayAwardTip;
	// UILabel AwardLogic::m_DayAwardTipText
	UILabel_t1176 * ___m_DayAwardTipText;
	// System.Int32 AwardLogic::m_WeekDay
	int32_t ___m_WeekDay;
	// System.Boolean AwardLogic::m_DayAwardFlag
	bool ___m_DayAwardFlag;
	// TabButton AwardLogic::m_TabOnlineAward
	TabButton_t1210 * ___m_TabOnlineAward;
	// OnlineAwardLogic AwardLogic::m_OnlineAwardRoot
	OnlineAwardLogic_t1227 * ___m_OnlineAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_OnlineAwardTip
	GameObject_t9 * ___m_OnlineAwardTip;
	// UILabel AwardLogic::m_OnlineAwardTipText
	UILabel_t1176 * ___m_OnlineAwardTipText;
	// System.Int32 AwardLogic::m_OnlineAwardID
	int32_t ___m_OnlineAwardID;
	// System.Int32 AwardLogic::m_LeftTime
	int32_t ___m_LeftTime;
	// UnityEngine.GameObject AwardLogic::m_SNSTab
	GameObject_t9 * ___m_SNSTab;
	// UnityEngine.GameObject AwardLogic::m_SNSAwardRoot
	GameObject_t9 * ___m_SNSAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_SNSAwardTip
	GameObject_t9 * ___m_SNSAwardTip;
	// UILabel AwardLogic::m_SNSAwardTipText
	UILabel_t1176 * ___m_SNSAwardTipText;
	// UnityEngine.GameObject AwardLogic::m_SNSShareBtnTip
	GameObject_t9 * ___m_SNSShareBtnTip;
	// AwardLogic/AfterCallDelegate AwardLogic::delegateAfterCall
	AfterCallDelegate_t1225 * ___delegateAfterCall;
	// TabButton AwardLogic::m_TabEveryDaySignInAward
	TabButton_t1210 * ___m_TabEveryDaySignInAward;
	// DaySignAwardLogic AwardLogic::m_DaySignInAwardRoot
	DaySignAwardLogic_t1228 * ___m_DaySignInAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_NewSignInAwardTip
	GameObject_t9 * ___m_NewSignInAwardTip;
	// TabButton AwardLogic::m_TabNewServerAward
	TabButton_t1210 * ___m_TabNewServerAward;
	// NewServerAwardLogic AwardLogic::m_NewServerAwardRoot
	NewServerAwardLogic_t1229 * ___m_NewServerAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_NewServerAwardTip
	GameObject_t9 * ___m_NewServerAwardTip;
	// UILabel AwardLogic::m_NewServerAwardTipText
	UILabel_t1176 * ___m_NewServerAwardTipText;
	// System.Int32 AwardLogic::m_NewServerDays
	int32_t ___m_NewServerDays;
	// UIGrid AwardLogic::m_ButtonGrid
	UIGrid_t1199 * ___m_ButtonGrid;
	// TabButton AwardLogic::m_TabNewOnlineAward
	TabButton_t1210 * ___m_TabNewOnlineAward;
	// NewOnlineAwardLogic AwardLogic::m_NewOnlineAwardRoot
	NewOnlineAwardLogic_t1230 * ___m_NewOnlineAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_NewOnlineAwardTip
	GameObject_t9 * ___m_NewOnlineAwardTip;
	// UILabel AwardLogic::m_NewOnlineAwardTipText
	UILabel_t1176 * ___m_NewOnlineAwardTipText;
	// System.Int32 AwardLogic::m_NewOnlineAwardID
	int32_t ___m_NewOnlineAwardID;
	// System.Int32 AwardLogic::m_NewLeftTime
	int32_t ___m_NewLeftTime;
	// System.Boolean AwardLogic::m_IsShowNewOnlineAward
	bool ___m_IsShowNewOnlineAward;
	// System.Boolean AwardLogic::m_IsNewOnlineAwardStart
	bool ___m_IsNewOnlineAwardStart;
	// System.Boolean AwardLogic::m_IsOpenSignInReward
	bool ___m_IsOpenSignInReward;
	// System.Boolean AwardLogic::m_IsOpenOldLoginReward
	bool ___m_IsOpenOldLoginReward;
	// TabButton AwardLogic::m_TabCDkey
	TabButton_t1210 * ___m_TabCDkey;
	// UnityEngine.GameObject AwardLogic::m_CDkeyWindow
	GameObject_t9 * ___m_CDkeyWindow;
	// UIInput AwardLogic::m_CDKeyInput
	UIInput_t1231 * ___m_CDKeyInput;
	// TabButton AwardLogic::m_TabNew7DayOnlineAward
	TabButton_t1210 * ___m_TabNew7DayOnlineAward;
	// New7DayOnlineAwardLogic AwardLogic::m_New7DayOnlineAwardRoot
	New7DayOnlineAwardLogic_t1232 * ___m_New7DayOnlineAwardRoot;
	// UnityEngine.GameObject AwardLogic::m_New7DayOnlineAwardTip
	GameObject_t9 * ___m_New7DayOnlineAwardTip;
	// UILabel AwardLogic::m_New7DayOnlineAwardTipText
	UILabel_t1176 * ___m_New7DayOnlineAwardTipText;
	// System.Int32 AwardLogic::m_New7DayOnlineAwardID
	int32_t ___m_New7DayOnlineAwardID;
	// System.Int32 AwardLogic::m_New7DayLeftTime
	int32_t ___m_New7DayLeftTime;
	// System.Boolean AwardLogic::m_IsShowNew7DayOnlineAward
	bool ___m_IsShowNew7DayOnlineAward;
	// System.Boolean AwardLogic::m_IsNew7DayOnlineAwardStart
	bool ___m_IsNew7DayOnlineAwardStart;
	// UnityEngine.GameObject AwardLogic::m_ReviewPanel
	GameObject_t9 * ___m_ReviewPanel;
	// TabButton AwardLogic::m_ReviewTab
	TabButton_t1210 * ___m_ReviewTab;
	// UnityEngine.GameObject AwardLogic::m_ReviewNumTip
	GameObject_t9 * ___m_ReviewNumTip;
	// UILabel AwardLogic::m_RewardNotice
	UILabel_t1176 * ___m_RewardNotice;
};
