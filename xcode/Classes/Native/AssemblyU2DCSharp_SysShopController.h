#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// RewardItem[]
struct RewardItemU5BU5D_t1841;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// GCGame.Table.Tab_SystemShop
struct Tab_SystemShop_t679;
// UIControllerBase`1<SysShopController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_37.h"
// SysShopController
struct SysShopController_t1843  : public UIControllerBase_1_t1844
{
	// UnityEngine.GameObject SysShopController::shopPageRoot
	GameObject_t9 * ___shopPageRoot;
	// RewardItem[] SysShopController::recycleItems
	RewardItemU5BU5D_t1841* ___recycleItems;
	// UILabel SysShopController::LabelBuyTip
	UILabel_t1176 * ___LabelBuyTip;
	// UILabel SysShopController::LabelBuyBackTip
	UILabel_t1176 * ___LabelBuyBackTip;
	// UILabel SysShopController::LabelCoinNum
	UILabel_t1176 * ___LabelCoinNum;
	// UILabel SysShopController::LabelYuanbaoNum
	UILabel_t1176 * ___LabelYuanbaoNum;
	// UILabel SysShopController::LabelBindYuanbaoNum
	UILabel_t1176 * ___LabelBindYuanbaoNum;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SysShopController::m_pageList
	List_1_t1289 * ___m_pageList;
	// UnityEngine.GameObject SysShopController::m_curShowPage
	GameObject_t9 * ___m_curShowPage;
	// System.Int32 SysShopController::m_curPageNum
	int32_t ___m_curPageNum;
	// System.Collections.Generic.List`1<System.UInt64> SysShopController::m_recycleGUIDList
	List_1_t1393 * ___m_recycleGUIDList;
	// UILabel SysShopController::labelPage
	UILabel_t1176 * ___labelPage;
	// GCGame.Table.Tab_SystemShop SysShopController::m_curShopTable
	Tab_SystemShop_t679 * ___m_curShopTable;
	// UnityEngine.GameObject SysShopController::m_PageItem
	GameObject_t9 * ___m_PageItem;
	// UnityEngine.GameObject SysShopController::m_ShopItem
	GameObject_t9 * ___m_ShopItem;
	// UnityEngine.GameObject SysShopController::m_BuyBackWindow
	GameObject_t9 * ___m_BuyBackWindow;
	// UnityEngine.GameObject SysShopController::m_GoldMoneyShopItemGrid
	GameObject_t9 * ___m_GoldMoneyShopItemGrid;
	// UnityEngine.GameObject SysShopController::m_GoldMoneyShopItem
	GameObject_t9 * ___m_GoldMoneyShopItem;
	// System.Int32 SysShopController::m_LeftTime
	int32_t ___m_LeftTime;
	// UILabel SysShopController::m_LeftTimeLabel
	UILabel_t1176 * ___m_LeftTimeLabel;
	// System.Int32 SysShopController::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct SysShopController_t1843_StaticFields{
	// System.Int32 SysShopController::ITEMCOUNT_MIN
	int32_t ___ITEMCOUNT_MIN;
	// System.Int32 SysShopController::ITEMCOUNT_MAX
	int32_t ___ITEMCOUNT_MAX;
	// System.Int32 SysShopController::PAGEITEMCOUNT_MAX
	int32_t ___PAGEITEMCOUNT_MAX;
	// System.Int32 SysShopController::m_curShopID
	int32_t ___m_curShopID;
};
