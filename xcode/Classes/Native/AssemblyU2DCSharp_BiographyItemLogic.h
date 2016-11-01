#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BiographyItemLogic
struct BiographyItemLogic_t1245  : public MonoBehaviour_t18
{
	// UILabel BiographyItemLogic::m_LevelRangeName
	UILabel_t1176 * ___m_LevelRangeName;
	// UISprite BiographyItemLogic::m_isAlreadyReach
	UISprite_t1202 * ___m_isAlreadyReach;
	// UILabel BiographyItemLogic::m_LevelRangeContent
	UILabel_t1176 * ___m_LevelRangeContent;
	// UISprite BiographyItemLogic::m_ContentBackSp
	UISprite_t1202 * ___m_ContentBackSp;
	// UISprite BiographyItemLogic::m_ContentIconSp
	UISprite_t1202 * ___m_ContentIconSp;
	// System.Int32 BiographyItemLogic::rangeStart
	int32_t ___rangeStart;
	// System.Int32 BiographyItemLogic::rangeEnd
	int32_t ___rangeEnd;
};
