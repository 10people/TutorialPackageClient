#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UICabalGrid
struct UICabalGrid_t1791;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.String
struct String_t;
// UIControllerBase`1<ServerListWindow>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_47.h"
// ServerListWindow
struct ServerListWindow_t2058  : public UIControllerBase_1_t2059
{
	// UnityEngine.GameObject ServerListWindow::m_ObjServerListItem
	GameObject_t9 * ___m_ObjServerListItem;
	// UnityEngine.GameObject ServerListWindow::m_ObjServerPageItem
	GameObject_t9 * ___m_ObjServerPageItem;
	// UICabalGrid ServerListWindow::ListItemParent
	UICabalGrid_t1791 * ___ListItemParent;
	// UICabalGrid ServerListWindow::ListPageParent
	UICabalGrid_t1791 * ___ListPageParent;
	// UILabel ServerListWindow::labelLastServer
	UILabel_t1176 * ___labelLastServer;
	// UISprite ServerListWindow::lastServerState
	UISprite_t1202 * ___lastServerState;
	// UISprite ServerListWindow::sprRecommand
	UISprite_t1202 * ___sprRecommand;
	// UILabel ServerListWindow::labelCurServerPageName
	UILabel_t1176 * ___labelCurServerPageName;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ServerListWindow::m_itemList
	List_1_t1289 * ___m_itemList;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ServerListWindow::m_pageList
	List_1_t1289 * ___m_pageList;
	// System.String ServerListWindow::m_curSelectItemName
	String_t* ___m_curSelectItemName;
};
