#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// NearbyPlayer
struct NearbyPlayer_t1211;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AroundPlayerItemLogic
struct AroundPlayerItemLogic_t1212  : public MonoBehaviour_t18
{
	// UISprite AroundPlayerItemLogic::m_PlayerProPic
	UISprite_t1202 * ___m_PlayerProPic;
	// UISprite AroundPlayerItemLogic::m_PlayerHeadPic
	UISprite_t1202 * ___m_PlayerHeadPic;
	// UILabel AroundPlayerItemLogic::m_PlayerNameLabel
	UILabel_t1176 * ___m_PlayerNameLabel;
	// UILabel AroundPlayerItemLogic::m_PlayerLevelLabel
	UILabel_t1176 * ___m_PlayerLevelLabel;
	// UILabel AroundPlayerItemLogic::m_PlayerCombatNumLabel
	UILabel_t1176 * ___m_PlayerCombatNumLabel;
	// UILabel AroundPlayerItemLogic::m_PlayerVipLevelLabel
	UILabel_t1176 * ___m_PlayerVipLevelLabel;
	// UILabel AroundPlayerItemLogic::m_PlayerGuildNameLabel
	UILabel_t1176 * ___m_PlayerGuildNameLabel;
	// NearbyPlayer AroundPlayerItemLogic::m_nearbyPlayer
	NearbyPlayer_t1211 * ___m_nearbyPlayer;
};
