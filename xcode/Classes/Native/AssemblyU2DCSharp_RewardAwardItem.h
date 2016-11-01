#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// System.Int32[]
struct Int32U5BU5D_t116;
// UILabel
struct UILabel_t1176;
// DaySignAwardLogic
struct DaySignAwardLogic_t1228;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RewardAwardItem
struct RewardAwardItem_t1376  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject[] RewardAwardItem::m_ItemGrid
	GameObjectU5BU5D_t1200* ___m_ItemGrid;
	// UISprite[] RewardAwardItem::m_ItemIcon
	UISpriteU5BU5D_t1201* ___m_ItemIcon;
	// UILabel[] RewardAwardItem::m_ItemLabel
	UILabelU5BU5D_t1203* ___m_ItemLabel;
	// UnityEngine.GameObject[] RewardAwardItem::m_EffectPoint
	GameObjectU5BU5D_t1200* ___m_EffectPoint;
	// UISprite RewardAwardItem::m_HaveAwardSprite
	UISprite_t1202 * ___m_HaveAwardSprite;
	// UISprite RewardAwardItem::m_ChooseSprit
	UISprite_t1202 * ___m_ChooseSprit;
	// System.Int32 RewardAwardItem::m_ShowItemIndex
	int32_t ___m_ShowItemIndex;
	// System.Int32[] RewardAwardItem::m_ItemType
	Int32U5BU5D_t116* ___m_ItemType;
	// System.Int32[] RewardAwardItem::m_ItemDataID
	Int32U5BU5D_t116* ___m_ItemDataID;
	// System.Int32[] RewardAwardItem::m_ItemCount
	Int32U5BU5D_t116* ___m_ItemCount;
	// UISprite RewardAwardItem::m_ChooseVipSprite
	UISprite_t1202 * ___m_ChooseVipSprite;
	// UISprite RewardAwardItem::m_VipDoubleSprite
	UISprite_t1202 * ___m_VipDoubleSprite;
	// UILabel RewardAwardItem::m_vipDoubleLable
	UILabel_t1176 * ___m_vipDoubleLable;
	// UISprite RewardAwardItem::m_vipHalfRewardedSp
	UISprite_t1202 * ___m_vipHalfRewardedSp;
	// System.Int32 RewardAwardItem::m_ItemIndex
	int32_t ___m_ItemIndex;
	// System.Boolean RewardAwardItem::vipChooseSpriteInstead
	bool ___vipChooseSpriteInstead;
	// DaySignAwardLogic RewardAwardItem::signAwardLogicInstance
	DaySignAwardLogic_t1228 * ___signAwardLogicInstance;
};
