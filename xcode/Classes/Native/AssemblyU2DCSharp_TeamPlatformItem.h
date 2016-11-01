#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TeamPlatformItem
struct TeamPlatformItem_t1947  : public MonoBehaviour_t18
{
	// System.UInt64 TeamPlatformItem::playerGUID
	uint64_t ___playerGUID;
	// System.Int32 TeamPlatformItem::teamID
	int32_t ___teamID;
	// UILabel TeamPlatformItem::m_playerName
	UILabel_t1176 * ___m_playerName;
	// UILabel[] TeamPlatformItem::m_playerLevel
	UILabelU5BU5D_t1203* ___m_playerLevel;
	// UILabel[] TeamPlatformItem::m_playerProf
	UILabelU5BU5D_t1203* ___m_playerProf;
	// UILabel[] TeamPlatformItem::m_playerCombat
	UILabelU5BU5D_t1203* ___m_playerCombat;
	// UISprite TeamPlatformItem::m_playerHead
	UISprite_t1202 * ___m_playerHead;
};
