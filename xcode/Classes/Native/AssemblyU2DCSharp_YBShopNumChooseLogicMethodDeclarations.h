#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// YBShopNumChooseLogic
struct YBShopNumChooseLogic_t2095;
// System.String
struct String_t;
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"
// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS_DEADLINE_TYPE.h"

// System.Void YBShopNumChooseLogic::.ctor()
 void YBShopNumChooseLogic__ctor_m14223 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::Start()
 void YBShopNumChooseLogic_Start_m14224 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::InitInfo(System.Int32,ItemSlotLogic/SLOT_TYPE,System.Int32,System.Int32,System.Int32,System.Boolean,CG_BUY_YUANBAOGOODS/DEADLINE_TYPE,System.String)
 void YBShopNumChooseLogic_InitInfo_m14225 (YBShopNumChooseLogic_t2095 * __this, int32_t ___nGoodsId, int32_t ___eSlotType, int32_t ___nItemID, int32_t ___nGoodsNum, int32_t ___nPrice, bool ___bBind, int32_t ___eDeadlineType, String_t* ___strItemName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::GoodsOnClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void YBShopNumChooseLogic_GoodsOnClick_m14226 (YBShopNumChooseLogic_t2095 * __this, int32_t ___nItemID, int32_t ___eSlotType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::AddNum()
 void YBShopNumChooseLogic_AddNum_m14227 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::SubNum()
 void YBShopNumChooseLogic_SubNum_m14228 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::NumChooseSubmit()
 void YBShopNumChooseLogic_NumChooseSubmit_m14229 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::ChargeOnClick()
 void YBShopNumChooseLogic_ChargeOnClick_m14230 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::BuyOnClick()
 void YBShopNumChooseLogic_BuyOnClick_m14231 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::BuyChargeOK()
 void YBShopNumChooseLogic_BuyChargeOK_m14232 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::DoPay()
 void YBShopNumChooseLogic_DoPay_m14233 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::BuyChargeCancel()
 void YBShopNumChooseLogic_BuyChargeCancel_m14234 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::RepairYuanBaoOK()
 void YBShopNumChooseLogic_RepairYuanBaoOK_m14235 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::RepairYuanBaoCancel()
 void YBShopNumChooseLogic_RepairYuanBaoCancel_m14236 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::UpdateSumPrice()
 void YBShopNumChooseLogic_UpdateSumPrice_m14237 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::SendBuyGoodsPacket()
 void YBShopNumChooseLogic_SendBuyGoodsPacket_m14238 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::CloseWindow()
 void YBShopNumChooseLogic_CloseWindow_m14239 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::PlayGoodsSoundEffect()
 void YBShopNumChooseLogic_PlayGoodsSoundEffect_m14240 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::UpdatePresentButton(System.Int32)
 void YBShopNumChooseLogic_UpdatePresentButton_m14241 (YBShopNumChooseLogic_t2095 * __this, int32_t ___nGoodsId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void YBShopNumChooseLogic::PresentOnClick()
 void YBShopNumChooseLogic_PresentOnClick_m14242 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean YBShopNumChooseLogic::IsLimitVipBox()
 bool YBShopNumChooseLogic_IsLimitVipBox_m14243 (YBShopNumChooseLogic_t2095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
