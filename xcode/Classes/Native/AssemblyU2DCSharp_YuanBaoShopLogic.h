#pragma once
#include <stdint.h>
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UIPopupList
struct UIPopupList_t2074;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// ModelDragLogic
struct ModelDragLogic_t1242;
// YuanBaoShopItemLogic[]
struct YuanBaoShopItemLogicU5BU5D_t2108;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// System.Collections.Generic.List`1<PriorityInfo>
struct List_1_t2076;
// UIControllerBase`1<YuanBaoShopLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_50.h"
// YuanBaoShopLogic/OPEN_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopLogic_OPEN_TYPE.h"
// YuanBaoShopLogic/BUY_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopLogic_BUY_TYPE.h"
// YuanBaoShopItemLogic/DEADLINE_PRICE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_DEADLINE_PRICE.h"
// YuanBaoShopLogic/TAB_INDEX
#include "AssemblyU2DCSharp_YuanBaoShopLogic_TAB_INDEX.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// YuanBaoShopLogic/PageInfo
#include "AssemblyU2DCSharp_YuanBaoShopLogic_PageInfo.h"
// YuanBaoShopLogic/FitOnVisual
#include "AssemblyU2DCSharp_YuanBaoShopLogic_FitOnVisual.h"
// YuanBaoShopLogic
struct YuanBaoShopLogic_t2109  : public UIControllerBase_1_t2110
{
	// TabController YuanBaoShopLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject YuanBaoShopLogic::m_GoodsGrid
	GameObject_t9 * ___m_GoodsGrid;
	// UnityEngine.GameObject YuanBaoShopLogic::m_Deadline
	GameObject_t9 * ___m_Deadline;
	// UIPopupList YuanBaoShopLogic::m_DeadlinePopupList
	UIPopupList_t2074 * ___m_DeadlinePopupList;
	// UnityEngine.GameObject YuanBaoShopLogic::m_YBShopNumChoose
	GameObject_t9 * ___m_YBShopNumChoose;
	// TabController YuanBaoShopLogic::m_BuyTypeController
	TabController_t1209 * ___m_BuyTypeController;
	// UILabel YuanBaoShopLogic::m_UnBindYBNumLabel
	UILabel_t1176 * ___m_UnBindYBNumLabel;
	// UILabel YuanBaoShopLogic::m_BindYBNumLabel
	UILabel_t1176 * ___m_BindYBNumLabel;
	// UnityEngine.GameObject YuanBaoShopLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject YuanBaoShopLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// UnityEngine.GameObject YuanBaoShopLogic::m_BindBuy
	GameObject_t9 * ___m_BindBuy;
	// UnityEngine.GameObject YuanBaoShopLogic::m_UnBindBuy
	GameObject_t9 * ___m_UnBindBuy;
	// UIGrid YuanBaoShopLogic::m_TabGrid
	UIGrid_t1199 * ___m_TabGrid;
	// UnityEngine.GameObject YuanBaoShopLogic::m_BlackMarketTab
	GameObject_t9 * ___m_BlackMarketTab;
	// ModelDragLogic YuanBaoShopLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UnityEngine.GameObject YuanBaoShopLogic::m_VIPLabel
	GameObject_t9 * ___m_VIPLabel;
	// UnityEngine.GameObject YuanBaoShopLogic::m_Pages
	GameObject_t9 * ___m_Pages;
	// UILabel YuanBaoShopLogic::m_PageLabel
	UILabel_t1176 * ___m_PageLabel;
	// YuanBaoShopItemLogic[] YuanBaoShopLogic::m_GoodsArray
	YuanBaoShopItemLogicU5BU5D_t2108* ___m_GoodsArray;
	// UnityEngine.GameObject YuanBaoShopLogic::m_BindYuanBaoInfo
	GameObject_t9 * ___m_BindYuanBaoInfo;
	// UnityEngine.GameObject YuanBaoShopLogic::m_PreciousTabLabel
	GameObject_t9 * ___m_PreciousTabLabel;
	// YuanBaoShopLogic/BUY_TYPE YuanBaoShopLogic::m_eCurBuyType
	int32_t ___m_eCurBuyType;
	// Games.FakeObject.FakeObject YuanBaoShopLogic::m_FitOnFakeObj
	FakeObject_t1241 * ___m_FitOnFakeObj;
	// System.Int32 YuanBaoShopLogic::m_FakeObjID
	int32_t ___m_FakeObjID;
	// UnityEngine.GameObject YuanBaoShopLogic::m_FitOnGameObject
	GameObject_t9 * ___m_FitOnGameObject;
	// YuanBaoShopItemLogic/DEADLINE_PRICE YuanBaoShopLogic::m_eDeadline
	int32_t ___m_eDeadline;
	// YuanBaoShopLogic/TAB_INDEX YuanBaoShopLogic::m_CurTabIndex
	int32_t ___m_CurTabIndex;
	// System.Collections.Generic.List`1<PriorityInfo> YuanBaoShopLogic::m_ListPriority
	List_1_t2076 * ___m_ListPriority;
	// System.DateTime YuanBaoShopLogic::StandardDateTime
	DateTime_t1171  ___StandardDateTime;
	// YuanBaoShopLogic/PageInfo YuanBaoShopLogic::m_TabPageInfo
	PageInfo_t2106  ___m_TabPageInfo;
	// YuanBaoShopLogic/FitOnVisual YuanBaoShopLogic::m_FitOnVisual
	FitOnVisual_t2107  ___m_FitOnVisual;
};
struct YuanBaoShopLogic_t2109_StaticFields{
	// System.Int32 YuanBaoShopLogic::ItemCount_PerPage
	int32_t ___ItemCount_PerPage;
	// YuanBaoShopLogic/OPEN_TYPE YuanBaoShopLogic::m_YuanBaoShopOpenType
	int32_t ___m_YuanBaoShopOpenType;
};
