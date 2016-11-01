#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UIToggle
struct UIToggle_t1220;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildInviteFriendItem
struct GuildInviteFriendItem_t1441  : public MonoBehaviour_t18
{
	// UISprite GuildInviteFriendItem::m_HeadIcon
	UISprite_t1202 * ___m_HeadIcon;
	// UILabel GuildInviteFriendItem::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel GuildInviteFriendItem::m_LevelLabel
	UILabel_t1176 * ___m_LevelLabel;
	// UISprite GuildInviteFriendItem::m_ProIcon
	UISprite_t1202 * ___m_ProIcon;
	// UILabel GuildInviteFriendItem::m_CombatLabel
	UILabel_t1176 * ___m_CombatLabel;
	// UILabel GuildInviteFriendItem::m_VipLabel
	UILabel_t1176 * ___m_VipLabel;
	// UIToggle GuildInviteFriendItem::m_ChooseToggle
	UIToggle_t1220 * ___m_ChooseToggle;
	// System.UInt64 GuildInviteFriendItem::m_PlayerGuid
	uint64_t ___m_PlayerGuid;
};
