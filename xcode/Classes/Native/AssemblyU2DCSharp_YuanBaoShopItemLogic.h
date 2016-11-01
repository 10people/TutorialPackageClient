#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// YuanBaoShopItemLogic/ITEM_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_ITEM_TYPE.h"
// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS_DEADLINE_TYPE.h"
// YuanBaoShopItemLogic
struct YuanBaoShopItemLogic_t2100  : public MonoBehaviour_t18
{
	// ItemSlotLogic YuanBaoShopItemLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel YuanBaoShopItemLogic::m_NumContent
	UILabel_t1176 * ___m_NumContent;
	// UILabel YuanBaoShopItemLogic::m_PriceContent
	UILabel_t1176 * ___m_PriceContent;
	// UILabel YuanBaoShopItemLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// System.Int32 YuanBaoShopItemLogic::m_GoodsId
	int32_t ___m_GoodsId;
	// YuanBaoShopItemLogic/ITEM_TYPE YuanBaoShopItemLogic::m_eItemType
	int32_t ___m_eItemType;
	// System.Int32 YuanBaoShopItemLogic::m_ItemID
	int32_t ___m_ItemID;
	// System.Int32 YuanBaoShopItemLogic::m_Num
	int32_t ___m_Num;
	// System.String YuanBaoShopItemLogic::m_Name
	String_t* ___m_Name;
	// System.Int32 YuanBaoShopItemLogic::m_PriceWeek
	int32_t ___m_PriceWeek;
	// System.Int32 YuanBaoShopItemLogic::m_SaleWeek
	int32_t ___m_SaleWeek;
	// System.Int32 YuanBaoShopItemLogic::m_PriceMonth
	int32_t ___m_PriceMonth;
	// System.Int32 YuanBaoShopItemLogic::m_SaleMonth
	int32_t ___m_SaleMonth;
	// System.Int32 YuanBaoShopItemLogic::m_PriceForever
	int32_t ___m_PriceForever;
	// System.Int32 YuanBaoShopItemLogic::m_SaleForever
	int32_t ___m_SaleForever;
	// System.Int32 YuanBaoShopItemLogic::m_CurPrice
	int32_t ___m_CurPrice;
	// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE YuanBaoShopItemLogic::m_eDeadlineType
	int32_t ___m_eDeadlineType;
};
