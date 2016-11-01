#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject
struct GameObject_t9;
// RestaurantFoodItem[]
struct RestaurantFoodItemU5BU5D_t2047;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel
struct UILabel_t1176;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// TestDragPanel
struct TestDragPanel_t1166;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood>
struct List_1_t608;
// System.Collections.Generic.List`1<RestaurantFoodItem>
struct List_1_t2048;
// RestaurantFoodItem
struct RestaurantFoodItem_t1929;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RestaurantFoodWindow/FILTERMETHOD
#include "AssemblyU2DCSharp_RestaurantFoodWindow_FILTERMETHOD.h"
// RestaurantFoodWindow
struct RestaurantFoodWindow_t1928  : public MonoBehaviour_t18
{
	// UIGrid RestaurantFoodWindow::m_FoodListGrid
	UIGrid_t1199 * ___m_FoodListGrid;
	// UnityEngine.GameObject RestaurantFoodWindow::m_FoodFilterPanel
	GameObject_t9 * ___m_FoodFilterPanel;
	// RestaurantFoodItem[] RestaurantFoodWindow::m_FoodItemWindow
	RestaurantFoodItemU5BU5D_t2047* ___m_FoodItemWindow;
	// UnityEngine.GameObject[] RestaurantFoodWindow::m_FoodItemSelectBG
	GameObjectU5BU5D_t1200* ___m_FoodItemSelectBG;
	// UnityEngine.GameObject[] RestaurantFoodWindow::m_FoodItemBG
	GameObjectU5BU5D_t1200* ___m_FoodItemBG;
	// UILabel RestaurantFoodWindow::m_PageLable
	UILabel_t1176 * ___m_PageLable;
	// UIDraggablePanel RestaurantFoodWindow::FoodListDraggablePanel
	UIDraggablePanel_t1165 * ___FoodListDraggablePanel;
	// TestDragPanel RestaurantFoodWindow::testDragPanel
	TestDragPanel_t1166 * ___testDragPanel;
	// System.Int32 RestaurantFoodWindow::addItemCount
	int32_t ___addItemCount;
	// RestaurantFoodWindow/FILTERMETHOD RestaurantFoodWindow::curFilterMethod
	int32_t ___curFilterMethod;
	// System.Boolean[] RestaurantFoodWindow::m_nFilterLevel
	BooleanU5BU5D_t102* ___m_nFilterLevel;
	// UnityEngine.GameObject RestaurantFoodWindow::m_RestaurantFoodItem
	GameObject_t9 * ___m_RestaurantFoodItem;
	// UnityEngine.GameObject RestaurantFoodWindow::m_RestaurantFoodListGrid
	GameObject_t9 * ___m_RestaurantFoodListGrid;
	// System.Boolean RestaurantFoodWindow::m_bFilterRewardExp
	bool ___m_bFilterRewardExp;
	// System.Boolean RestaurantFoodWindow::m_bFilterRewardCoin
	bool ___m_bFilterRewardCoin;
	// System.Boolean RestaurantFoodWindow::m_bFilterRewardMeterial
	bool ___m_bFilterRewardMeterial;
	// System.Collections.Generic.List`1<GCGame.Table.Tab_RestaurantFood> RestaurantFoodWindow::m_FoodList
	List_1_t608 * ___m_FoodList;
	// System.Collections.Generic.List`1<RestaurantFoodItem> RestaurantFoodWindow::m_gridFoodItemList
	List_1_t2048 * ___m_gridFoodItemList;
	// System.Int32 RestaurantFoodWindow::startIndex
	int32_t ___startIndex;
	// System.Int32 RestaurantFoodWindow::endIndex
	int32_t ___endIndex;
	// System.Int32 RestaurantFoodWindow::m_nCurPage
	int32_t ___m_nCurPage;
	// System.Int32 RestaurantFoodWindow::m_nMaxPageNum
	int32_t ___m_nMaxPageNum;
	// RestaurantFoodItem RestaurantFoodWindow::curSelectFoodItem
	RestaurantFoodItem_t1929 * ___curSelectFoodItem;
	// System.Int32 RestaurantFoodWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject RestaurantFoodWindow::m_BtnMarkFood
	GameObject_t9 * ___m_BtnMarkFood;
};
