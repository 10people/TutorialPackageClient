#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// Games.Item.GameItem
struct GameItem_t1172;
// UIInput
struct UIInput_t1231;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConsignSaleNum
struct ConsignSaleNum_t1353  : public MonoBehaviour_t18
{
	// UILabel ConsignSaleNum::m_ProfessionLabel
	UILabel_t1176 * ___m_ProfessionLabel;
	// UILabel ConsignSaleNum::m_LevelLabel
	UILabel_t1176 * ___m_LevelLabel;
	// UILabel ConsignSaleNum::m_ItemNameLabel
	UILabel_t1176 * ___m_ItemNameLabel;
	// UILabel ConsignSaleNum::m_FightValueLabel
	UILabel_t1176 * ___m_FightValueLabel;
	// UISprite ConsignSaleNum::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite ConsignSaleNum::m_QualityFrameSprite
	UISprite_t1202 * ___m_QualityFrameSprite;
	// UILabel ConsignSaleNum::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// Games.Item.GameItem ConsignSaleNum::m_itemInfo
	GameItem_t1172 * ___m_itemInfo;
	// System.Int32 ConsignSaleNum::m_ItemCount
	int32_t ___m_ItemCount;
	// System.Int32 ConsignSaleNum::m_itemPrice
	int32_t ___m_itemPrice;
	// UIInput ConsignSaleNum::m_CountInput
	UIInput_t1231 * ___m_CountInput;
	// UIInput ConsignSaleNum::m_PriceInput
	UIInput_t1231 * ___m_PriceInput;
};
