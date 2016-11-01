#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// GuildMake
struct GuildMake_t1448;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildShopMakeItem
#include "AssemblyU2DCSharp_GuildShopMakeItem.h"
// GuildMakeItem
struct GuildMakeItem_t1447  : public MonoBehaviour_t18
{
	// UILabel GuildMakeItem::LabelName
	UILabel_t1176 * ___LabelName;
	// UILabel GuildMakeItem::LableDesc
	UILabel_t1176 * ___LableDesc;
	// UISprite GuildMakeItem::SpriteIcon
	UISprite_t1202 * ___SpriteIcon;
	// UISprite GuildMakeItem::SpriteQuality
	UISprite_t1202 * ___SpriteQuality;
	// UISprite GuildMakeItem::SprHightlight
	UISprite_t1202 * ___SprHightlight;
	// GuildMake GuildMakeItem::m_parent
	GuildMake_t1448 * ___m_parent;
	// GuildShopMakeItem GuildMakeItem::m_data
	GuildShopMakeItem_t1449  ___m_data;
};
