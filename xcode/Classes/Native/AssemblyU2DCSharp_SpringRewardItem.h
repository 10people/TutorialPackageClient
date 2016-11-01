#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"
// SpringRewardItem
struct SpringRewardItem_t2072  : public MonoBehaviour_t18
{
	// UISprite SpringRewardItem::m_ChooseSprite
	UISprite_t1202 * ___m_ChooseSprite;
	// UISprite SpringRewardItem::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UILabel SpringRewardItem::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// UISprite SpringRewardItem::m_GuoQiSprite
	UISprite_t1202 * ___m_GuoQiSprite;
	// UISprite SpringRewardItem::m_KeLinQuSprite
	UISprite_t1202 * ___m_KeLinQuSprite;
	// UISprite SpringRewardItem::m_YiLingQuSprite
	UISprite_t1202 * ___m_YiLingQuSprite;
	// UILabel SpringRewardItem::m_TimeLabel
	UILabel_t1176 * ___m_TimeLabel;
	// UISprite SpringRewardItem::m_DisableSprite
	UISprite_t1202 * ___m_DisableSprite;
	// Games.AwardActivity.ActivityRewardData SpringRewardItem::m_RewardData
	ActivityRewardData_t2067  ___m_RewardData;
	// System.Int32 SpringRewardItem::m_RewardItem
	int32_t ___m_RewardItem;
	// System.Boolean SpringRewardItem::m_IsChoose
	bool ___m_IsChoose;
};
