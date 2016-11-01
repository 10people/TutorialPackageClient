#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// ItemSlotLogic[]
struct ItemSlotLogicU5BU5D_t1679;
// UnityEngine.GameObject
struct GameObject_t9;
// RestaurantFoodWindow
struct RestaurantFoodWindow_t1928;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// RestaurantFoodItem
struct RestaurantFoodItem_t1929  : public MonoBehaviour_t18
{
	// UILabel RestaurantFoodItem::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// UILabel RestaurantFoodItem::m_LabelDuraion
	UILabel_t1176 * ___m_LabelDuraion;
	// UILabel RestaurantFoodItem::m_LabelRrewardCoin
	UILabel_t1176 * ___m_LabelRrewardCoin;
	// UILabel RestaurantFoodItem::m_LabelRrewardPlayerExp
	UILabel_t1176 * ___m_LabelRrewardPlayerExp;
	// UILabel RestaurantFoodItem::m_LabelRrewardRestaurantExp
	UILabel_t1176 * ___m_LabelRrewardRestaurantExp;
	// UILabel RestaurantFoodItem::m_LabelFoodLevel
	UILabel_t1176 * ___m_LabelFoodLevel;
	// ItemSlotLogic[] RestaurantFoodItem::m_ItemSlotLogic
	ItemSlotLogicU5BU5D_t1679* ___m_ItemSlotLogic;
	// UILabel RestaurantFoodItem::m_LabelFoodLevelTitle
	UILabel_t1176 * ___m_LabelFoodLevelTitle;
	// UILabel RestaurantFoodItem::m_LabelDuraionTitle
	UILabel_t1176 * ___m_LabelDuraionTitle;
	// UILabel RestaurantFoodItem::m_LabelRrewardCoinTitle
	UILabel_t1176 * ___m_LabelRrewardCoinTitle;
	// UILabel RestaurantFoodItem::m_LabelRrewardPlayerExpTitle
	UILabel_t1176 * ___m_LabelRrewardPlayerExpTitle;
	// UILabel RestaurantFoodItem::m_LabelRrewardRestaurantExpTitle
	UILabel_t1176 * ___m_LabelRrewardRestaurantExpTitle;
	// UnityEngine.GameObject RestaurantFoodItem::m_BGSprite
	GameObject_t9 * ___m_BGSprite;
	// UnityEngine.GameObject RestaurantFoodItem::m_GrayBGSprite
	GameObject_t9 * ___m_GrayBGSprite;
	// UnityEngine.GameObject RestaurantFoodItem::m_RrewardCoinGameobject
	GameObject_t9 * ___m_RrewardCoinGameobject;
	// UnityEngine.GameObject RestaurantFoodItem::m_RrewardPlayerExpGameobject
	GameObject_t9 * ___m_RrewardPlayerExpGameobject;
	// UnityEngine.Color RestaurantFoodItem::m_GrayColor
	Color_t939  ___m_GrayColor;
	// UnityEngine.Color RestaurantFoodItem::m_GrayRewardColor
	Color_t939  ___m_GrayRewardColor;
	// UnityEngine.Color RestaurantFoodItem::m_NormalColor
	Color_t939  ___m_NormalColor;
	// UnityEngine.Color RestaurantFoodItem::m_NormalRewardTitleColor
	Color_t939  ___m_NormalRewardTitleColor;
	// UnityEngine.Color RestaurantFoodItem::m_NormalRewardColor
	Color_t939  ___m_NormalRewardColor;
	// RestaurantFoodWindow RestaurantFoodItem::m_parentWindow
	RestaurantFoodWindow_t1928 * ___m_parentWindow;
	// System.Int32 RestaurantFoodItem::m_foodID
	int32_t ___m_foodID;
	// System.Int32 RestaurantFoodItem::m_nIndex
	int32_t ___m_nIndex;
};
