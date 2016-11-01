#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// BelleGetItemWindow
struct BelleGetItemWindow_t1865;
// BelleItemGetShowItem
struct BelleItemGetShowItem_t1866;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleItemGetShowItem
struct BelleItemGetShowItem_t1866  : public MonoBehaviour_t18
{
	// UISprite BelleItemGetShowItem::m_getItemIcon
	UISprite_t1202 * ___m_getItemIcon;
	// UILabel BelleItemGetShowItem::m_belleItemGetDesc
	UILabel_t1176 * ___m_belleItemGetDesc;
	// BelleGetItemWindow BelleItemGetShowItem::m_parentWindow
	BelleGetItemWindow_t1865 * ___m_parentWindow;
};
struct BelleItemGetShowItem_t1866_StaticFields{
	// BelleItemGetShowItem BelleItemGetShowItem::m_instance
	BelleItemGetShowItem_t1866 * ___m_instance;
};
