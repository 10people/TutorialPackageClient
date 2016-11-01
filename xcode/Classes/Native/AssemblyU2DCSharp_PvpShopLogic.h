#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// pvpItemLogic
struct pvpItemLogic_t4801;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIControllerBase`1<PvpShopLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_52.h"
// PvpShopLogic
struct PvpShopLogic_t4802  : public UIControllerBase_1_t4803
{
	// UIGrid PvpShopLogic::m_GridRoot
	UIGrid_t1199 * ___m_GridRoot;
	// UIGrid PvpShopLogic::m_GridItemList
	UIGrid_t1199 * ___m_GridItemList;
	// pvpItemLogic PvpShopLogic::m_PvpItemLogic
	pvpItemLogic_t4801 * ___m_PvpItemLogic;
	// UnityEngine.GameObject PvpShopLogic::m_BuyContext
	GameObject_t9 * ___m_BuyContext;
	// UILabel PvpShopLogic::m_BuyItemName
	UILabel_t1176 * ___m_BuyItemName;
	// UILabel PvpShopLogic::m_BuyItemCount
	UILabel_t1176 * ___m_BuyItemCount;
	// UILabel PvpShopLogic::m_BuyItemPrice
	UILabel_t1176 * ___m_BuyItemPrice;
	// UILabel PvpShopLogic::m_JiFenNum
	UILabel_t1176 * ___m_JiFenNum;
	// UILabel PvpShopLogic::m_TimeLable
	UILabel_t1176 * ___m_TimeLable;
	// System.Int32 PvpShopLogic::m_RealPvpBlock
	int32_t ___m_RealPvpBlock;
	// System.Int32 PvpShopLogic::m_BuyItemNum
	int32_t ___m_BuyItemNum;
	// System.Int32 PvpShopLogic::m_BuyPvpId
	int32_t ___m_BuyPvpId;
	// UILabel PvpShopLogic::m_PageNum
	UILabel_t1176 * ___m_PageNum;
};
