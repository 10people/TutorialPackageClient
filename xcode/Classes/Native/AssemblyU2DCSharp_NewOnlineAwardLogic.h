#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// UIImageButton
struct UIImageButton_t1204;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// RewardAwardItem[]
struct RewardAwardItemU5BU5D_t1375;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NewOnlineAwardLogic
struct NewOnlineAwardLogic_t1230  : public MonoBehaviour_t18
{
	// UILabel NewOnlineAwardLogic::m_LeftTimeText
	UILabel_t1176 * ___m_LeftTimeText;
	// UIGrid NewOnlineAwardLogic::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// System.Int32 NewOnlineAwardLogic::m_OnlineAwardID
	int32_t ___m_OnlineAwardID;
	// System.Int32 NewOnlineAwardLogic::m_LeftTime
	int32_t ___m_LeftTime;
	// UIImageButton NewOnlineAwardLogic::m_ButtonAward
	UIImageButton_t1204 * ___m_ButtonAward;
	// UISprite[] NewOnlineAwardLogic::m_SpritMin
	UISpriteU5BU5D_t1201* ___m_SpritMin;
	// UISprite[] NewOnlineAwardLogic::m_SpritSec
	UISpriteU5BU5D_t1201* ___m_SpritSec;
	// RewardAwardItem[] NewOnlineAwardLogic::m_AwardItem
	RewardAwardItemU5BU5D_t1375* ___m_AwardItem;
	// UILabel NewOnlineAwardLogic::m_DateText
	UILabel_t1176 * ___m_DateText;
};
