#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// YuanBaoShopLogic
struct YuanBaoShopLogic_t2109;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;
// GCGame.Table.Tab_YuanBaoShop
struct Tab_YuanBaoShop_t713;
// System.String
struct String_t;
// GCGame.Table.Tab_EquipAttr
struct Tab_EquipAttr_t437;
// YuanBaoShopLogic/OPEN_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopLogic_OPEN_TYPE.h"
// YuanBaoShopLogic/TAB_INDEX
#include "AssemblyU2DCSharp_YuanBaoShopLogic_TAB_INDEX.h"
// YuanBaoShopItemLogic/DEADLINE_PRICE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_DEADLINE_PRICE.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"
// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS_DEADLINE_TYPE.h"
// YuanBaoShopItemLogic/ITEM_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_ITEM_TYPE.h"

// System.Void YuanBaoShopLogic::.ctor()
 void YuanBaoShopLogic__ctor_m14274 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::.cctor()
 void YuanBaoShopLogic__cctor_m14275 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// YuanBaoShopLogic/OPEN_TYPE YuanBaoShopLogic::get_YuanBaoShopOpenType()
 int32_t YuanBaoShopLogic_get_YuanBaoShopOpenType_m14276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::set_YuanBaoShopOpenType(YuanBaoShopLogic/OPEN_TYPE)
 void YuanBaoShopLogic_set_YuanBaoShopOpenType_m14277 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::Awake()
 void YuanBaoShopLogic_Awake_m14278 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::Start()
 void YuanBaoShopLogic_Start_m14279 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::OnEnable()
 void YuanBaoShopLogic_OnEnable_m14280 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::OnDisable()
 void YuanBaoShopLogic_OnDisable_m14281 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::LoadAllGoodsDicPriority()
 void YuanBaoShopLogic_LoadAllGoodsDicPriority_m14282 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::OpenYuanBaoShop(YuanBaoShopLogic/OPEN_TYPE,System.Boolean)
 void YuanBaoShopLogic_OpenYuanBaoShop_m14283 (Object_t * __this/* static, unused */, int32_t ___openType, bool ___isShowBlackMarket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::OnYuanBaoShopLoad(System.Boolean,System.Object)
 void YuanBaoShopLogic_OnYuanBaoShopLoad_m14284 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::InitBuyTypeTabButtonChoose()
 void YuanBaoShopLogic_InitBuyTypeTabButtonChoose_m14285 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::UpdateYuanBaoInfo()
 void YuanBaoShopLogic_UpdateYuanBaoInfo_m14286 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::InitFakeObj()
 void YuanBaoShopLogic_InitFakeObj_m14287 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::DestroyPartnerFakeObj()
 void YuanBaoShopLogic_DestroyPartnerFakeObj_m14288 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::CreateFitOnFakeObj(System.Int32)
 void YuanBaoShopLogic_CreateFitOnFakeObj_m14289 (YuanBaoShopLogic_t2109 * __this, int32_t ___pro, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::TabOnClick(TabButton)
 void YuanBaoShopLogic_TabOnClick_m14290 (YuanBaoShopLogic_t2109 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ShowBindYuanBao()
 void YuanBaoShopLogic_ShowBindYuanBao_m14291 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HideBindYuanBao()
 void YuanBaoShopLogic_HideBindYuanBao_m14292 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::UpdateGoodsInfo(YuanBaoShopLogic/TAB_INDEX)
 void YuanBaoShopLogic_UpdateGoodsInfo_m14293 (YuanBaoShopLogic_t2109 * __this, int32_t ___eTabIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ShowNextPage()
 void YuanBaoShopLogic_ShowNextPage_m14294 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ShowPrePage()
 void YuanBaoShopLogic_ShowPrePage_m14295 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean YuanBaoShopLogic::IsTabNewGoods(GCGame.Table.Tab_YuanBaoShop)
 bool YuanBaoShopLogic_IsTabNewGoods_m14296 (YuanBaoShopLogic_t2109 * __this, Tab_YuanBaoShop_t713 * ___tabYuanBaoShop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean YuanBaoShopLogic::IsGoodsOnSell(GCGame.Table.Tab_YuanBaoShop)
 bool YuanBaoShopLogic_IsGoodsOnSell_m14297 (YuanBaoShopLogic_t2109 * __this, Tab_YuanBaoShop_t713 * ___tabYuanBaoShop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean YuanBaoShopLogic::HandleNewGoods(GCGame.Table.Tab_YuanBaoShop,System.Int32,System.Int32,System.Boolean)
 bool YuanBaoShopLogic_HandleNewGoods_m14298 (YuanBaoShopLogic_t2109 * __this, Tab_YuanBaoShop_t713 * ___tabYuanBaoShop, int32_t ___nPageItemIndex, int32_t ___nPriorityIndex, bool ___bNextPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::UpdateGoodsActive(System.Int32)
 void YuanBaoShopLogic_UpdateGoodsActive_m14299 (YuanBaoShopLogic_t2109 * __this, int32_t ___nPageItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::CloseWindow()
 void YuanBaoShopLogic_CloseWindow_m14300 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ChangeDeadline()
 void YuanBaoShopLogic_ChangeDeadline_m14301 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ChangeGoodsPrice(YuanBaoShopItemLogic/DEADLINE_PRICE)
 void YuanBaoShopLogic_ChangeGoodsPrice_m14302 (YuanBaoShopLogic_t2109 * __this, int32_t ___eDeadline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ShowYBShopNumChoose(System.Int32,ItemSlotLogic/SLOT_TYPE,System.Int32,System.Int32,System.Int32,CG_BUY_YUANBAOGOODS/DEADLINE_TYPE,System.String)
 void YuanBaoShopLogic_ShowYBShopNumChoose_m14303 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___eSlotType, int32_t ___nItemID, int32_t ___nGoodsNum, int32_t ___nPrice, int32_t ___eDeadlineType, String_t* ___strItemName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::BuyTypeOnClick(TabButton)
 void YuanBaoShopLogic_BuyTypeOnClick_m14304 (YuanBaoShopLogic_t2109 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOn(YuanBaoShopItemLogic/ITEM_TYPE,System.Int32,System.Int32)
 void YuanBaoShopLogic_HandleFitOn_m14305 (YuanBaoShopLogic_t2109 * __this, int32_t ___eItemType, int32_t ___nGoodsId, int32_t ___nItemID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnEquipment(System.Int32,System.Int32)
 void YuanBaoShopLogic_HandleFitOnEquipment_m14306 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nDataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnWeapon(System.Int32,System.Int32,GCGame.Table.Tab_EquipAttr)
 void YuanBaoShopLogic_HandleFitOnWeapon_m14307 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nDataID, Tab_EquipAttr_t437 * ___tabWeaponEquipAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnArmor(System.Int32,System.Int32,GCGame.Table.Tab_EquipAttr)
 void YuanBaoShopLogic_HandleFitOnArmor_m14308 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nDataID, Tab_EquipAttr_t437 * ___tabArmorEquipAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnFellow(System.Int32,System.Int32)
 void YuanBaoShopLogic_HandleFitOnFellow_m14309 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nFellowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnMount(System.Int32,System.Int32)
 void YuanBaoShopLogic_HandleFitOnMount_m14310 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::HandleFitOnFashion(System.Int32,System.Int32)
 void YuanBaoShopLogic_HandleFitOnFashion_m14311 (YuanBaoShopLogic_t2109 * __this, int32_t ___nGoodsId, int32_t ___nFashionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::ResetView()
 void YuanBaoShopLogic_ResetView_m14312 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::BuyView()
 void YuanBaoShopLogic_BuyView_m14313 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::BuyViewOK()
 void YuanBaoShopLogic_BuyViewOK_m14314 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::BuyViewCancel()
 void YuanBaoShopLogic_BuyViewCancel_m14315 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopLogic::OnClickChongZhi()
 void YuanBaoShopLogic_OnClickChongZhi_m14316 (YuanBaoShopLogic_t2109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
