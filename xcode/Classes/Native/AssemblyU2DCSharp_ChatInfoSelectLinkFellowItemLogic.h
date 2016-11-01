#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// ChatInfoSelectLinkItemLogic
#include "AssemblyU2DCSharp_ChatInfoSelectLinkItemLogic.h"
// ChatInfoSelectLinkFellowItemLogic
struct ChatInfoSelectLinkFellowItemLogic_t1312  : public ChatInfoSelectLinkItemLogic_t1309
{
	// UISprite ChatInfoSelectLinkFellowItemLogic::m_fellowIcon
	UISprite_t1202 * ___m_fellowIcon;
	// UILabel ChatInfoSelectLinkFellowItemLogic::m_fellowName
	UILabel_t1176 * ___m_fellowName;
	// UILabel ChatInfoSelectLinkFellowItemLogic::m_combatValue
	UILabel_t1176 * ___m_combatValue;
	// UILabel ChatInfoSelectLinkFellowItemLogic::m_level
	UILabel_t1176 * ___m_level;
	// UISprite ChatInfoSelectLinkFellowItemLogic::m_fellowQuality
	UISprite_t1202 * ___m_fellowQuality;
	// System.UInt64 ChatInfoSelectLinkFellowItemLogic::m_fellowGuid
	uint64_t ___m_fellowGuid;
};
