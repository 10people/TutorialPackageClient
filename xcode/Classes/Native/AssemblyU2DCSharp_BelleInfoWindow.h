#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UICabalGrid
struct UICabalGrid_t1791;
// BelleInfoWindow
struct BelleInfoWindow_t1883;
// GCGame.Table.Tab_Belle
struct Tab_Belle_t351;
// BelleShowItem
struct BelleShowItem_t1884;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleInfoWindow
struct BelleInfoWindow_t1883  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BelleInfoWindow::m_belleItem
	GameObject_t9 * ___m_belleItem;
	// UICabalGrid BelleInfoWindow::m_belleGrid
	UICabalGrid_t1791 * ___m_belleGrid;
	// UnityEngine.GameObject BelleInfoWindow::m_ownBelleWin
	GameObject_t9 * ___m_ownBelleWin;
	// UnityEngine.GameObject BelleInfoWindow::m_unOwnBelleWin
	GameObject_t9 * ___m_unOwnBelleWin;
	// GCGame.Table.Tab_Belle BelleInfoWindow::m_curSelectedBelleData
	Tab_Belle_t351 * ___m_curSelectedBelleData;
	// BelleShowItem BelleInfoWindow::m_curSelectBelle
	BelleShowItem_t1884 * ___m_curSelectBelle;
};
struct BelleInfoWindow_t1883_StaticFields{
	// BelleInfoWindow BelleInfoWindow::m_Instance
	BelleInfoWindow_t1883 * ___m_Instance;
	// System.Collections.Generic.List`1<System.Int32> BelleInfoWindow::m_belleList
	List_1_t90 * ___m_belleList;
};
