#pragma once
#include <stdint.h>
// GuildShopLogic
struct GuildShopLogic_t1461;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIImageButton[]
struct UIImageButtonU5BU5D_t1462;
// UISprite
struct UISprite_t1202;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuildShopLogic
struct GuildShopLogic_t1461  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject GuildShopLogic::m_GuildShopItem
	GameObject_t9 * ___m_GuildShopItem;
	// UnityEngine.GameObject GuildShopLogic::m_GuildShopPreviewItem
	GameObject_t9 * ___m_GuildShopPreviewItem;
	// UnityEngine.GameObject GuildShopLogic::m_GuildShopItemGrid
	GameObject_t9 * ___m_GuildShopItemGrid;
	// UnityEngine.GameObject GuildShopLogic::m_DragFlag
	GameObject_t9 * ___m_DragFlag;
	// UILabel GuildShopLogic::m_GuildDKPLabel
	UILabel_t1176 * ___m_GuildDKPLabel;
	// UnityEngine.GameObject GuildShopLogic::m_GuildShopBuildWindow
	GameObject_t9 * ___m_GuildShopBuildWindow;
	// UnityEngine.GameObject GuildShopLogic::m_GuildShopPreviewItemGrid
	GameObject_t9 * ___m_GuildShopPreviewItemGrid;
	// UILabel GuildShopLogic::m_ShopBuildTitleLabel
	UILabel_t1176 * ___m_ShopBuildTitleLabel;
	// UILabel GuildShopLogic::m_ShopBuildSlotLabel
	UILabel_t1176 * ___m_ShopBuildSlotLabel;
	// UIImageButton[] GuildShopLogic::m_GuildShopBuildLevelBtn
	UIImageButtonU5BU5D_t1462* ___m_GuildShopBuildLevelBtn;
	// UISprite GuildShopLogic::m_GuildShopLevelProgress
	UISprite_t1202 * ___m_GuildShopLevelProgress;
	// System.Single[] GuildShopLogic::m_LevelProgressValue
	SingleU5BU5D_t744* ___m_LevelProgressValue;
};
struct GuildShopLogic_t1461_StaticFields{
	// GuildShopLogic GuildShopLogic::m_Instance
	GuildShopLogic_t1461 * ___m_Instance;
};
