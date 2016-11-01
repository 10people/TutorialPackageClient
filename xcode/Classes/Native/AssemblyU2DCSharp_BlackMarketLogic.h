#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// TabController
struct TabController_t1209;
// BlackMarketLogic
struct BlackMarketLogic_t1248;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BlackMarketLogic
struct BlackMarketLogic_t1248  : public MonoBehaviour_t18
{
	// UILabel BlackMarketLogic::m_YuanBaoNumLable
	UILabel_t1176 * ___m_YuanBaoNumLable;
	// UILabel BlackMarketLogic::m_BindYBNumLable
	UILabel_t1176 * ___m_BindYBNumLable;
	// UILabel BlackMarketLogic::m_PageLable
	UILabel_t1176 * ___m_PageLable;
	// UnityEngine.GameObject BlackMarketLogic::m_GoodItem
	GameObject_t9 * ___m_GoodItem;
	// UnityEngine.GameObject BlackMarketLogic::m_GoodGird
	GameObject_t9 * ___m_GoodGird;
	// UIGrid BlackMarketLogic::m_UIGrid
	UIGrid_t1199 * ___m_UIGrid;
	// UnityEngine.GameObject[] BlackMarketLogic::m_GoodItemGameObj
	GameObjectU5BU5D_t1200* ___m_GoodItemGameObj;
	// TabController BlackMarketLogic::m_BuyTypeController
	TabController_t1209 * ___m_BuyTypeController;
	// UnityEngine.GameObject BlackMarketLogic::m_BindBuy
	GameObject_t9 * ___m_BindBuy;
	// UnityEngine.GameObject BlackMarketLogic::m_UnBindBuy
	GameObject_t9 * ___m_UnBindBuy;
	// System.Int32 BlackMarketLogic::m_nCurPage
	int32_t ___m_nCurPage;
	// System.Int32 BlackMarketLogic::m_nUseYBType
	int32_t ___m_nUseYBType;
	// System.Int32 BlackMarketLogic::m_nMaxPage
	int32_t ___m_nMaxPage;
};
struct BlackMarketLogic_t1248_StaticFields{
	// BlackMarketLogic BlackMarketLogic::m_Instance
	BlackMarketLogic_t1248 * ___m_Instance;
};
