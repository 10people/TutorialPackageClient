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
// UISlider
struct UISlider_t1219;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OnlineAwardLogic
struct OnlineAwardLogic_t1227  : public MonoBehaviour_t18
{
	// UILabel OnlineAwardLogic::m_LeftTimeText
	UILabel_t1176 * ___m_LeftTimeText;
	// UIGrid OnlineAwardLogic::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// System.Int32 OnlineAwardLogic::m_OnlineAwardID
	int32_t ___m_OnlineAwardID;
	// System.Int32 OnlineAwardLogic::m_LeftTime
	int32_t ___m_LeftTime;
	// UIImageButton OnlineAwardLogic::m_ButtonAward
	UIImageButton_t1204 * ___m_ButtonAward;
	// UISprite[] OnlineAwardLogic::m_SpritMin
	UISpriteU5BU5D_t1201* ___m_SpritMin;
	// UISprite[] OnlineAwardLogic::m_SpritSec
	UISpriteU5BU5D_t1201* ___m_SpritSec;
	// RewardAwardItem[] OnlineAwardLogic::m_AwardItem
	RewardAwardItemU5BU5D_t1375* ___m_AwardItem;
	// UISlider OnlineAwardLogic::sliderLoading
	UISlider_t1219 * ___sliderLoading;
};
