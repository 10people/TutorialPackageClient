#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// MissionTooltipsLogic
struct MissionTooltipsLogic_t1575;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionTooltipsLogic
struct MissionTooltipsLogic_t1575  : public MonoBehaviour_t18
{
	// UISprite MissionTooltipsLogic::m_missionIcon
	UISprite_t1202 * ___m_missionIcon;
	// UILabel MissionTooltipsLogic::m_missionName
	UILabel_t1176 * ___m_missionName;
	// UILabel MissionTooltipsLogic::m_missionLevel
	UILabel_t1176 * ___m_missionLevel;
	// UILabel MissionTooltipsLogic::m_missionDesc
	UILabel_t1176 * ___m_missionDesc;
};
struct MissionTooltipsLogic_t1575_StaticFields{
	// MissionTooltipsLogic MissionTooltipsLogic::m_instance
	MissionTooltipsLogic_t1575 * ___m_instance;
};
