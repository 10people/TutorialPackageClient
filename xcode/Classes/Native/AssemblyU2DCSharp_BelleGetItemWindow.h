#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UICabalGrid
struct UICabalGrid_t1791;
// BelleGetItemWindow
struct BelleGetItemWindow_t1865;
// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay>
struct List_1_t360;
// GCGame.Table.Tab_Belle
struct Tab_Belle_t351;
// BelleItemGetShowItem
struct BelleItemGetShowItem_t1866;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleGetItemWindow
struct BelleGetItemWindow_t1865  : public MonoBehaviour_t18
{
	// UISprite BelleGetItemWindow::m_belleItemIcon
	UISprite_t1202 * ___m_belleItemIcon;
	// UILabel BelleGetItemWindow::m_belleItemName
	UILabel_t1176 * ___m_belleItemName;
	// UILabel BelleGetItemWindow::m_belleItemCount
	UILabel_t1176 * ___m_belleItemCount;
	// UnityEngine.GameObject BelleGetItemWindow::m_belleItem
	GameObject_t9 * ___m_belleItem;
	// UICabalGrid BelleGetItemWindow::m_belleGrid
	UICabalGrid_t1791 * ___m_belleGrid;
	// System.Collections.Generic.List`1<GCGame.Table.Tab_BelleGetItemWay> BelleGetItemWindow::m_belleGetItemList
	List_1_t360 * ___m_belleGetItemList;
	// GCGame.Table.Tab_Belle BelleGetItemWindow::m_curSelectBelleTab
	Tab_Belle_t351 * ___m_curSelectBelleTab;
	// BelleItemGetShowItem BelleGetItemWindow::m_curSelectBelleItem
	BelleItemGetShowItem_t1866 * ___m_curSelectBelleItem;
};
struct BelleGetItemWindow_t1865_StaticFields{
	// BelleGetItemWindow BelleGetItemWindow::m_instance
	BelleGetItemWindow_t1865 * ___m_instance;
};
