#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// AutoDrugWindow
struct AutoDrugWindow_t1215;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoDrugItem
struct AutoDrugItem_t1860  : public MonoBehaviour_t18
{
	// UILabel AutoDrugItem::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UISprite AutoDrugItem::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UISprite AutoDrugItem::m_SelectIcon
	UISprite_t1202 * ___m_SelectIcon;
	// UISprite AutoDrugItem::m_BackgroundSprite
	UISprite_t1202 * ___m_BackgroundSprite;
	// UISprite AutoDrugItem::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// System.Int32 AutoDrugItem::m_nId
	int32_t ___m_nId;
	// System.UInt64 AutoDrugItem::m_ItemGuid
	uint64_t ___m_ItemGuid;
	// AutoDrugWindow AutoDrugItem::m_parent
	AutoDrugWindow_t1215 * ___m_parent;
};
