#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UIImageButton
struct UIImageButton_t1204;
// System.Collections.Generic.List`1<PriorityInfo>
struct List_1_t2076;
// SwordsManShopItem
struct SwordsManShopItem_t1945;
// SwordsManShop
struct SwordsManShop_t1944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SwordsManShop/TAB_PAGE
#include "AssemblyU2DCSharp_SwordsManShop_TAB_PAGE.h"
// SwordsManShop
struct SwordsManShop_t1944  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SwordsManShop::m_ShopSwordsManGrid
	GameObject_t9 * ___m_ShopSwordsManGrid;
	// UILabel SwordsManShop::m_LableScore
	UILabel_t1176 * ___m_LableScore;
	// UnityEngine.GameObject[] SwordsManShop::m_TabPage_HighLight
	GameObjectU5BU5D_t1200* ___m_TabPage_HighLight;
	// UIImageButton SwordsManShop::m_BuyButton
	UIImageButton_t1204 * ___m_BuyButton;
	// System.Collections.Generic.List`1<PriorityInfo> SwordsManShop::m_DaXiaListPriority
	List_1_t2076 * ___m_DaXiaListPriority;
	// System.Collections.Generic.List`1<PriorityInfo> SwordsManShop::m_JuXiaListPriority
	List_1_t2076 * ___m_JuXiaListPriority;
	// SwordsManShopItem SwordsManShop::m_SelectShopSwordsManItem
	SwordsManShopItem_t1945 * ___m_SelectShopSwordsManItem;
	// SwordsManShop/TAB_PAGE SwordsManShop::m_CurTabPage
	int32_t ___m_CurTabPage;
};
struct SwordsManShop_t1944_StaticFields{
	// SwordsManShop SwordsManShop::m_Instance
	SwordsManShop_t1944 * ___m_Instance;
};
