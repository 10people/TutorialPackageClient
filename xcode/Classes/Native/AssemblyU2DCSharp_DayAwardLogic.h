#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// UIImageButton
struct UIImageButton_t1204;
// RewardAwardItem[]
struct RewardAwardItemU5BU5D_t1375;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DayAwardLogic
struct DayAwardLogic_t1226  : public MonoBehaviour_t18
{
	// UIGrid DayAwardLogic::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// System.Int32 DayAwardLogic::m_WeekDay
	int32_t ___m_WeekDay;
	// System.Boolean DayAwardLogic::m_DayAwardFlag
	bool ___m_DayAwardFlag;
	// UIImageButton DayAwardLogic::m_ButtonAward
	UIImageButton_t1204 * ___m_ButtonAward;
	// RewardAwardItem[] DayAwardLogic::m_AwardItem
	RewardAwardItemU5BU5D_t1375* ___m_AwardItem;
};
