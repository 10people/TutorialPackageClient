#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// GuildMakeItem
struct GuildMakeItem_t1447;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildShopMakeItem
#include "AssemblyU2DCSharp_GuildShopMakeItem.h"
// GuildMake
struct GuildMake_t1448  : public MonoBehaviour_t18
{
	// UILabel GuildMake::m_CurItemName
	UILabel_t1176 * ___m_CurItemName;
	// UILabel GuildMake::m_CurItemMakeNum
	UILabel_t1176 * ___m_CurItemMakeNum;
	// UILabel GuildMake::m_CurItemPrice
	UILabel_t1176 * ___m_CurItemPrice;
	// UILabel GuildMake::m_CurItemDesc
	UILabel_t1176 * ___m_CurItemDesc;
	// UILabel GuildMake::m_CurItemDesc2
	UILabel_t1176 * ___m_CurItemDesc2;
	// UnityEngine.GameObject GuildMake::m_MakeButton
	GameObject_t9 * ___m_MakeButton;
	// UnityEngine.GameObject GuildMake::m_ItemGrid
	GameObject_t9 * ___m_ItemGrid;
	// GuildShopMakeItem GuildMake::m_CurItemData
	GuildShopMakeItem_t1449  ___m_CurItemData;
	// GuildMakeItem GuildMake::m_curSelectItem
	GuildMakeItem_t1447 * ___m_curSelectItem;
};
