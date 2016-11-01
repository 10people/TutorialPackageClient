#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BlackMarketItemInfo
#include "AssemblyU2DCSharp_BlackMarketItemInfo.h"
// BlackMarketItemLogic
struct BlackMarketItemLogic_t1246  : public MonoBehaviour_t18
{
	// UISprite BlackMarketItemLogic::m_ItemIconSprite
	UISprite_t1202 * ___m_ItemIconSprite;
	// UISprite BlackMarketItemLogic::m_ItemQualitySprite
	UISprite_t1202 * ___m_ItemQualitySprite;
	// UILabel BlackMarketItemLogic::m_ItemNameLable
	UILabel_t1176 * ___m_ItemNameLable;
	// UILabel BlackMarketItemLogic::m_ItemCountLable
	UILabel_t1176 * ___m_ItemCountLable;
	// UISprite BlackMarketItemLogic::m_MoneySprite
	UISprite_t1202 * ___m_MoneySprite;
	// UILabel BlackMarketItemLogic::m_MoneyNumLable
	UILabel_t1176 * ___m_MoneyNumLable;
	// BlackMarketItemInfo BlackMarketItemLogic::m_GoodInfo
	BlackMarketItemInfo_t1247  ___m_GoodInfo;
};
