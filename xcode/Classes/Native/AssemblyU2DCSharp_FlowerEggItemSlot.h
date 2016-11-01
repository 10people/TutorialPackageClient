#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// GCGame.Table.Tab_CharmItem
struct Tab_CharmItem_t395;
// FlowerEggWindow
struct FlowerEggWindow_t1408;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FlowerEggItemSlot
struct FlowerEggItemSlot_t1409  : public MonoBehaviour_t18
{
	// UISprite FlowerEggItemSlot::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UISprite FlowerEggItemSlot::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UILabel FlowerEggItemSlot::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// UISprite FlowerEggItemSlot::m_DisableSprite
	UISprite_t1202 * ___m_DisableSprite;
	// UISprite FlowerEggItemSlot::m_ChooseSprite
	UISprite_t1202 * ___m_ChooseSprite;
	// UILabel FlowerEggItemSlot::m_LableCharmValue
	UILabel_t1176 * ___m_LableCharmValue;
	// GCGame.Table.Tab_CharmItem FlowerEggItemSlot::m_tabItem
	Tab_CharmItem_t395 * ___m_tabItem;
	// FlowerEggWindow FlowerEggItemSlot::m_Parent
	FlowerEggWindow_t1408 * ___m_Parent;
};
