#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// SysShopPageItem/ItemClickDelegate
struct ItemClickDelegate_t1946;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SysShopPageItem
struct SysShopPageItem_t1846  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SysShopPageItem::SprHighLight
	GameObject_t9 * ___SprHighLight;
	// UILabel SysShopPageItem::LabelMoney
	UILabel_t1176 * ___LabelMoney;
	// UILabel SysShopPageItem::LabelName
	UILabel_t1176 * ___LabelName;
	// UISprite SysShopPageItem::sprIcon
	UISprite_t1202 * ___sprIcon;
	// UISprite SysShopPageItem::MoneyIcon
	UISprite_t1202 * ___MoneyIcon;
	// UISprite SysShopPageItem::QualitySprite
	UISprite_t1202 * ___QualitySprite;
	// SysShopPageItem/ItemClickDelegate SysShopPageItem::delItemClick
	ItemClickDelegate_t1946 * ___delItemClick;
	// SysShopPageItem/ItemClickDelegate SysShopPageItem::delItemDoubleClick
	ItemClickDelegate_t1946 * ___delItemDoubleClick;
	// SysShopPageItem/ItemClickDelegate SysShopPageItem::delItemIconClick
	ItemClickDelegate_t1946 * ___delItemIconClick;
	// Games.Item.GameItem SysShopPageItem::m_curGameItem
	GameItem_t1172 * ___m_curGameItem;
};
