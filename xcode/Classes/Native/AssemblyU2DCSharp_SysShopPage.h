#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// SysShopPageItem
struct SysShopPageItem_t1846;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SysShopPage
struct SysShopPage_t1845  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SysShopPage::ShopItemGirdObject
	GameObject_t9 * ___ShopItemGirdObject;
	// System.Int32 SysShopPage::m_PageNum
	int32_t ___m_PageNum;
	// SysShopPageItem SysShopPage::m_curHighLightItem
	SysShopPageItem_t1846 * ___m_curHighLightItem;
};
