#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.ConsignSale.MyConsignSaleItemInfo
#include "AssemblyU2DCSharp_Games_ConsignSale_MyConsignSaleItemInfo.h"
// ConsignSaleMyItem
struct ConsignSaleMyItem_t1347  : public MonoBehaviour_t18
{
	// UISprite ConsignSaleMyItem::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite ConsignSaleMyItem::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UILabel ConsignSaleMyItem::m_NameLable
	UILabel_t1176 * ___m_NameLable;
	// UILabel ConsignSaleMyItem::m_RemainTimeLable
	UILabel_t1176 * ___m_RemainTimeLable;
	// UILabel ConsignSaleMyItem::m_CountLable
	UILabel_t1176 * ___m_CountLable;
	// UILabel ConsignSaleMyItem::m_PriceLable
	UILabel_t1176 * ___m_PriceLable;
	// System.Int32 ConsignSaleMyItem::m_nIndex
	int32_t ___m_nIndex;
	// Games.ConsignSale.MyConsignSaleItemInfo ConsignSaleMyItem::m_MyItemInfo
	MyConsignSaleItemInfo_t1352  ___m_MyItemInfo;
};
