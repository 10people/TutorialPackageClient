#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ConsignSaleBag/ITEM_TAB_PAGE
#include "AssemblyU2DCSharp_ConsignSaleBag_ITEM_TAB_PAGE.h"
// ConsignSaleBag
struct ConsignSaleBag_t1339  : public MonoBehaviour_t18
{
	// ConsignSaleBag/ITEM_TAB_PAGE ConsignSaleBag::m_CurTabPage
	int32_t ___m_CurTabPage;
	// UnityEngine.GameObject ConsignSaleBag::m_InfoLable
	GameObject_t9 * ___m_InfoLable;
	// UnityEngine.GameObject ConsignSaleBag::m_BackPackItems
	GameObject_t9 * ___m_BackPackItems;
	// UnityEngine.GameObject ConsignSaleBag::m_BackPackItemGrid
	GameObject_t9 * ___m_BackPackItemGrid;
	// UnityEngine.GameObject ConsignSaleBag::m_NoCanSaleItemLable
	GameObject_t9 * ___m_NoCanSaleItemLable;
	// UISprite[] ConsignSaleBag::m_TabPage_HighLight
	UISpriteU5BU5D_t1201* ___m_TabPage_HighLight;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ConsignSaleBag::m_ItemInfo_HighLight
	List_1_t1289 * ___m_ItemInfo_HighLight;
	// UnityEngine.GameObject ConsignSaleBag::m_BagSaleUI
	GameObject_t9 * ___m_BagSaleUI;
	// System.Int32 ConsignSaleBag::m_Cur_StartItem
	int32_t ___m_Cur_StartItem;
	// System.Int32 ConsignSaleBag::m_Cur_EndItem
	int32_t ___m_Cur_EndItem;
	// System.Collections.Generic.List`1<Games.Item.GameItem> ConsignSaleBag::CurItemList
	List_1_t1244 * ___CurItemList;
	// System.Boolean ConsignSaleBag::m_bLoadItem
	bool ___m_bLoadItem;
};
