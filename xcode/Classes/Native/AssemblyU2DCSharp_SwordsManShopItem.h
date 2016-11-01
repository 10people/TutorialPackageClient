#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// SwordsManShop
struct SwordsManShop_t1944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SwordsManShopItem
struct SwordsManShopItem_t1945  : public MonoBehaviour_t18
{
	// UILabel SwordsManShopItem::m_LableName
	UILabel_t1176 * ___m_LableName;
	// UILabel SwordsManShopItem::m_LabelDesc
	UILabel_t1176 * ___m_LabelDesc;
	// UILabel SwordsManShopItem::m_LabelPrice
	UILabel_t1176 * ___m_LabelPrice;
	// UnityEngine.GameObject SwordsManShopItem::m_HightLightBkSprite
	GameObject_t9 * ___m_HightLightBkSprite;
	// UISprite SwordsManShopItem::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite SwordsManShopItem::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// System.Int32 SwordsManShopItem::m_nPrice
	int32_t ___m_nPrice;
	// System.String SwordsManShopItem::m_strName
	String_t* ___m_strName;
	// SwordsManShop SwordsManShopItem::m_Parent
	SwordsManShop_t1944 * ___m_Parent;
	// System.Int32 SwordsManShopItem::m_SwordsManDataID
	int32_t ___m_SwordsManDataID;
};
