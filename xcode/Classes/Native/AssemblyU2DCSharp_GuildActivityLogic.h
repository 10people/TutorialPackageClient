#pragma once
#include <stdint.h>
// GuildActivityLogic
struct GuildActivityLogic_t1433;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildActivityLogic
struct GuildActivityLogic_t1433  : public MonoBehaviour_t18
{
	// TabController GuildActivityLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject GuildActivityLogic::m_GuildRewardWindow
	GameObject_t9 * ___m_GuildRewardWindow;
	// UILabel GuildActivityLogic::m_LastWeekContri
	UILabel_t1176 * ___m_LastWeekContri;
	// UnityEngine.GameObject GuildActivityLogic::m_GuildRuleWindow
	GameObject_t9 * ___m_GuildRuleWindow;
	// UIImageButton GuildActivityLogic::m_GetRewardBtn
	UIImageButton_t1204 * ___m_GetRewardBtn;
	// UILabel GuildActivityLogic::m_GetRewardBtnLabel
	UILabel_t1176 * ___m_GetRewardBtnLabel;
	// UnityEngine.GameObject GuildActivityLogic::m_HideAndSeekRule
	GameObject_t9 * ___m_HideAndSeekRule;
	// UnityEngine.GameObject GuildActivityLogic::m_HideAndSeekProgress
	GameObject_t9 * ___m_HideAndSeekProgress;
	// UIImageButton GuildActivityLogic::m_OpenHideAndSeekBtn
	UIImageButton_t1204 * ___m_OpenHideAndSeekBtn;
	// UILabel GuildActivityLogic::m_HideAndSeekTimeLabel
	UILabel_t1176 * ___m_HideAndSeekTimeLabel;
	// UILabel[] GuildActivityLogic::m_HideAndSeedNpcLabel
	UILabelU5BU5D_t1203* ___m_HideAndSeedNpcLabel;
	// UnityEngine.GameObject GuildActivityLogic::m_HideAndSeekDifficultyChoose
	GameObject_t9 * ___m_HideAndSeekDifficultyChoose;
	// TabController GuildActivityLogic::m_HideAndSeekTabController
	TabController_t1209 * ___m_HideAndSeekTabController;
};
struct GuildActivityLogic_t1433_StaticFields{
	// GuildActivityLogic GuildActivityLogic::m_Instance
	GuildActivityLogic_t1433 * ___m_Instance;
};
