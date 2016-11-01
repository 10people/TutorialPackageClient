#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// Games.Item.GameItem
struct GameItem_t1172;
// ChatInfoSelectLinkItemLogic
#include "AssemblyU2DCSharp_ChatInfoSelectLinkItemLogic.h"
// ChatInfoSelectLinkCommonItemLogic
struct ChatInfoSelectLinkCommonItemLogic_t1308  : public ChatInfoSelectLinkItemLogic_t1309
{
	// UISprite ChatInfoSelectLinkCommonItemLogic::m_itemIcon
	UISprite_t1202 * ___m_itemIcon;
	// UISprite ChatInfoSelectLinkCommonItemLogic::m_itemQuality
	UISprite_t1202 * ___m_itemQuality;
	// UILabel ChatInfoSelectLinkCommonItemLogic::m_itemCount
	UILabel_t1176 * ___m_itemCount;
	// Games.Item.GameItem ChatInfoSelectLinkCommonItemLogic::m_item
	GameItem_t1172 * ___m_item;
};
