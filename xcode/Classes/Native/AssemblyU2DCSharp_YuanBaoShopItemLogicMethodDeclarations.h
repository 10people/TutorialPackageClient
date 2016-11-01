#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// YuanBaoShopItemLogic
struct YuanBaoShopItemLogic_t2100;
// GCGame.Table.Tab_YuanBaoShop
struct Tab_YuanBaoShop_t713;
// System.String
struct String_t;
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"
// YuanBaoShopItemLogic/ITEM_TYPE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_ITEM_TYPE.h"
// YuanBaoShopItemLogic/DEADLINE_PRICE
#include "AssemblyU2DCSharp_YuanBaoShopItemLogic_DEADLINE_PRICE.h"

// System.Void YuanBaoShopItemLogic::.ctor()
 void YuanBaoShopItemLogic__ctor_m14258 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::Start()
 void YuanBaoShopItemLogic_Start_m14259 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::Init(GCGame.Table.Tab_YuanBaoShop)
 void YuanBaoShopItemLogic_Init_m14260 (YuanBaoShopItemLogic_t2100 * __this, Tab_YuanBaoShop_t713 * ___tabYuanBaoShop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::GoodsOnClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void YuanBaoShopItemLogic_GoodsOnClick_m14261 (YuanBaoShopItemLogic_t2100 * __this, int32_t ___nItemID, int32_t ___eSlotType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ItemSlotLogic/SLOT_TYPE YuanBaoShopItemLogic::ConvertGoodsTypeToSlotType(YuanBaoShopItemLogic/ITEM_TYPE)
 int32_t YuanBaoShopItemLogic_ConvertGoodsTypeToSlotType_m14262 (YuanBaoShopItemLogic_t2100 * __this, int32_t ___eGoodsType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::BuyGoods()
 void YuanBaoShopItemLogic_BuyGoods_m14263 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::ChangePrice(YuanBaoShopItemLogic/DEADLINE_PRICE)
 void YuanBaoShopItemLogic_ChangePrice_m14264 (YuanBaoShopItemLogic_t2100 * __this, int32_t ___eDeadline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::SetNameLabel()
 void YuanBaoShopItemLogic_SetNameLabel_m14265 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::SetPriceLabel()
 void YuanBaoShopItemLogic_SetPriceLabel_m14266 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YuanBaoShopItemLogic::FitOn()
 void YuanBaoShopItemLogic_FitOn_m14267 (YuanBaoShopItemLogic_t2100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
