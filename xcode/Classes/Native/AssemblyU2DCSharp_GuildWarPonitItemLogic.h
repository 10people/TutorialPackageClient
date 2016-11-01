#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildWarPointInfo
#include "AssemblyU2DCSharp_GuildWarPointInfo.h"
// GuildWarPonitItemLogic
struct GuildWarPonitItemLogic_t1468  : public MonoBehaviour_t18
{
	// GuildWarPointInfo GuildWarPonitItemLogic::m_pointInfo
	GuildWarPointInfo_t1484  ___m_pointInfo;
	// UILabel GuildWarPonitItemLogic::m_PointNameLabel
	UILabel_t1176 * ___m_PointNameLabel;
	// UILabel GuildWarPonitItemLogic::m_PointScoreLabel
	UILabel_t1176 * ___m_PointScoreLabel;
	// UISprite GuildWarPonitItemLogic::m_StateSprite
	UISprite_t1202 * ___m_StateSprite;
	// UnityEngine.GameObject GuildWarPonitItemLogic::m_FightIcon
	GameObject_t9 * ___m_FightIcon;
};
