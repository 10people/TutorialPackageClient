#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel[]
struct UILabelU5BU5D_t1203;
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825;
// RestaurantData/DeskInfo
struct DeskInfo_t1927;
// GCGame.Table.Tab_RestaurantDesk
struct Tab_RestaurantDesk_t607;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// RestaurantDesk
struct RestaurantDesk_t1826  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RestaurantDesk::m_BtnNormal
	GameObject_t9 * ___m_BtnNormal;
	// UnityEngine.GameObject RestaurantDesk::m_BtnLock
	GameObject_t9 * ___m_BtnLock;
	// UILabel RestaurantDesk::m_LabelUnLockTip
	UILabel_t1176 * ___m_LabelUnLockTip;
	// UILabel RestaurantDesk::m_LabelStateDetail
	UILabel_t1176 * ___m_LabelStateDetail;
	// UnityEngine.GameObject[] RestaurantDesk::m_GuestWindows
	GameObjectU5BU5D_t1200* ___m_GuestWindows;
	// UILabel[] RestaurantDesk::m_GuestNameLable
	UILabelU5BU5D_t1203* ___m_GuestNameLable;
	// UnityEngine.GameObject[] RestaurantDesk::m_GuestSprites
	GameObjectU5BU5D_t1200* ___m_GuestSprites;
	// UnityEngine.GameObject RestaurantDesk::PreFoodDestBk
	GameObject_t9 * ___PreFoodDestBk;
	// UnityEngine.GameObject RestaurantDesk::EatFoodDestBk
	GameObject_t9 * ___EatFoodDestBk;
	// System.Int32 RestaurantDesk::m_curDeskIndex
	int32_t ___m_curDeskIndex;
	// RestaurantData/RestaurantInfo RestaurantDesk::m_curRestaurantData
	RestaurantInfo_t1825 * ___m_curRestaurantData;
	// RestaurantData/DeskInfo RestaurantDesk::m_curDestData
	DeskInfo_t1927 * ___m_curDestData;
	// GCGame.Table.Tab_RestaurantDesk RestaurantDesk::m_curTabDesk
	Tab_RestaurantDesk_t607 * ___m_curTabDesk;
	// System.String[] RestaurantDesk::m_strGuestIndexs
	StringU5BU5D_t333* ___m_strGuestIndexs;
	// UnityEngine.Color RestaurantDesk::m_WhiteQualityColor
	Color_t939  ___m_WhiteQualityColor;
	// UnityEngine.Color RestaurantDesk::m_GreenQualityColor
	Color_t939  ___m_GreenQualityColor;
	// UnityEngine.Color RestaurantDesk::m_BlueQualityColor
	Color_t939  ___m_BlueQualityColor;
	// UnityEngine.Color RestaurantDesk::m_PurpleQualityColor
	Color_t939  ___m_PurpleQualityColor;
	// UnityEngine.Color RestaurantDesk::m_OrangeQualityColor
	Color_t939  ___m_OrangeQualityColor;
};
