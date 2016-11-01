#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EquipTooltipsLogic
struct EquipTooltipsLogic_t1399;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// Games.Item.GameItem
struct GameItem_t1172;
// EquipTooltipsLogic/VoidBuyDelegate
struct VoidBuyDelegate_t1398;
// System.Object
struct Object_t;
// EquipTooltipsLogic/ShowType
#include "AssemblyU2DCSharp_EquipTooltipsLogic_ShowType.h"

// System.Void EquipTooltipsLogic::.ctor()
 void EquipTooltipsLogic__ctor_m8412 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::.cctor()
 void EquipTooltipsLogic__cctor_m8413 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// EquipTooltipsLogic EquipTooltipsLogic::Instance()
 EquipTooltipsLogic_t1399 * EquipTooltipsLogic_Instance_m8414 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipTooltip(System.Int32,EquipTooltipsLogic/ShowType,ItemSlotLogic)
 void EquipTooltipsLogic_ShowEquipTooltip_m8415 (Object_t * __this/* static, unused */, int32_t ___dataId, int32_t ___type, ItemSlotLogic_t1237 * ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipTooltip(Games.Item.GameItem,EquipTooltipsLogic/ShowType,ItemSlotLogic)
 void EquipTooltipsLogic_ShowEquipTooltip_m8416 (Object_t * __this/* static, unused */, GameItem_t1172 * ___equip, int32_t ___type, ItemSlotLogic_t1237 * ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::SetDelegateBuyClick(EquipTooltipsLogic/VoidBuyDelegate,EquipTooltipsLogic/VoidBuyDelegate)
 void EquipTooltipsLogic_SetDelegateBuyClick_m8417 (Object_t * __this/* static, unused */, VoidBuyDelegate_t1398 * ___clickBuyBatchDelegate, VoidBuyDelegate_t1398 * ___clickBuyDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnShowEquipTip(System.Boolean,System.Object)
 void EquipTooltipsLogic_OnShowEquipTip_m8418 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::Awake()
 void EquipTooltipsLogic_Awake_m8419 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::Start()
 void EquipTooltipsLogic_Start_m8420 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnDestroy()
 void EquipTooltipsLogic_OnDestroy_m8421 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowTooltips(Games.Item.GameItem,EquipTooltipsLogic/ShowType)
 void EquipTooltipsLogic_ShowTooltips_m8422 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::HideAllButtons()
 void EquipTooltipsLogic_HideAllButtons_m8423 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::SetEquipSellInfo(Games.Item.GameItem)
 void EquipTooltipsLogic_SetEquipSellInfo_m8424 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipIcon(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipIcon_m8425 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipDisableSprite(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipDisableSprite_m8426 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipName(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipName_m8427 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipQualityGrid(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipQualityGrid_m8428 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipPro(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipPro_m8429 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipLevel(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipLevel_m8430 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipBind(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipBind_m8431 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipStarLevel(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipStarLevel_m8432 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipStrengthenLevel(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipStrengthenLevel_m8433 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipPower(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipPower_m8434 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowPowerArrow(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowPowerArrow_m8435 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowRemainTime(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowRemainTime_m8436 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipAttrInfo(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipAttrInfo_m8437 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipSetAttrInfo(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipSetAttrInfo_m8438 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipGemInfo(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipGemInfo_m8439 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipDesc(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipDesc_m8440 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipPrice(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipPrice_m8441 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnSuitClick()
 void EquipTooltipsLogic_OnSuitClick_m8442 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnSuitBackClick()
 void EquipTooltipsLogic_OnSuitBackClick_m8443 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowEquipStrenExp(Games.Item.GameItem)
 void EquipTooltipsLogic_ShowEquipStrenExp_m8444 (EquipTooltipsLogic_t1399 * __this, GameItem_t1172 * ___equip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::CloseWindow()
 void EquipTooltipsLogic_CloseWindow_m8445 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OpenCompare(System.Int32)
 void EquipTooltipsLogic_OpenCompare_m8446 (EquipTooltipsLogic_t1399 * __this, int32_t ___nEquipSloct, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::CloseCompare()
 void EquipTooltipsLogic_CloseCompare_m8447 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipSell()
 void EquipTooltipsLogic_EquipSell_m8448 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipSellOK()
 void EquipTooltipsLogic_EquipSellOK_m8449 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipUse()
 void EquipTooltipsLogic_EquipUse_m8450 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipUseOK()
 void EquipTooltipsLogic_EquipUseOK_m8451 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipTakeOff()
 void EquipTooltipsLogic_EquipTakeOff_m8452 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipShareLink()
 void EquipTooltipsLogic_EquipShareLink_m8453 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::PutInQianKunDai()
 void EquipTooltipsLogic_PutInQianKunDai_m8454 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::EquipEnchance()
 void EquipTooltipsLogic_EquipEnchance_m8455 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnShowEquipEnchance(System.Boolean,System.Object)
 void EquipTooltipsLogic_OnShowEquipEnchance_m8456 (EquipTooltipsLogic_t1399 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnBuyClick_Normal()
 void EquipTooltipsLogic_OnBuyClick_Normal_m8457 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnBuyBatchClick_Normal()
 void EquipTooltipsLogic_OnBuyBatchClick_Normal_m8458 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnBuyClick()
 void EquipTooltipsLogic_OnBuyClick_m8459 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::OnBuyBatchClick()
 void EquipTooltipsLogic_OnBuyBatchClick_m8460 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShareLinkDirectChatInfo()
 void EquipTooltipsLogic_ShareLinkDirectChatInfo_m8461 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ConsignSaleBuyBt()
 void EquipTooltipsLogic_ConsignSaleBuyBt_m8462 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::BuyItemOpenConsignSale(System.Boolean,System.Object)
 void EquipTooltipsLogic_BuyItemOpenConsignSale_m8463 (EquipTooltipsLogic_t1399 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void EquipTooltipsLogic_ShowChatInfoRootOver_m8464 (EquipTooltipsLogic_t1399 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::CangKuIn()
 void EquipTooltipsLogic_CangKuIn_m8465 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::CangKuOut()
 void EquipTooltipsLogic_CangKuOut_m8466 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipTooltipsLogic::AbsorbOnClick()
 void EquipTooltipsLogic_AbsorbOnClick_m8467 (EquipTooltipsLogic_t1399 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
