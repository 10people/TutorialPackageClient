#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ItemTooltipsLogic
struct ItemTooltipsLogic_t1496;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// Games.Item.GameItem
struct GameItem_t1172;
// ItemTooltipsLogic/VoidBuyDelegate
struct VoidBuyDelegate_t1495;
// System.Object
struct Object_t;
// ItemTooltipsLogic/ShowType
#include "AssemblyU2DCSharp_ItemTooltipsLogic_ShowType.h"

// System.Void ItemTooltipsLogic::.ctor()
 void ItemTooltipsLogic__ctor_m9109 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::.cctor()
 void ItemTooltipsLogic__cctor_m9110 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ItemTooltipsLogic ItemTooltipsLogic::Instance()
 ItemTooltipsLogic_t1496 * ItemTooltipsLogic_Instance_m9111 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShowItemTooltip(System.Int32,ItemTooltipsLogic/ShowType,ItemSlotLogic)
 void ItemTooltipsLogic_ShowItemTooltip_m9112 (Object_t * __this/* static, unused */, int32_t ___dataId, int32_t ___type, ItemSlotLogic_t1237 * ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShowItemTooltip(Games.Item.GameItem,ItemTooltipsLogic/ShowType,ItemSlotLogic)
 void ItemTooltipsLogic_ShowItemTooltip_m9113 (Object_t * __this/* static, unused */, GameItem_t1172 * ___equip, int32_t ___type, ItemSlotLogic_t1237 * ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetDelegateBuyClick(ItemTooltipsLogic/VoidBuyDelegate,ItemTooltipsLogic/VoidBuyDelegate)
 void ItemTooltipsLogic_SetDelegateBuyClick_m9114 (Object_t * __this/* static, unused */, VoidBuyDelegate_t1495 * ___clickBuyBatchDelegate, VoidBuyDelegate_t1495 * ___clickBuyDelegate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnShowItemTip(System.Boolean,System.Object)
 void ItemTooltipsLogic_OnShowItemTip_m9115 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::Awake()
 void ItemTooltipsLogic_Awake_m9116 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::Start()
 void ItemTooltipsLogic_Start_m9117 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnDestroy()
 void ItemTooltipsLogic_OnDestroy_m9118 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShowTooltips(Games.Item.GameItem,ItemTooltipsLogic/ShowType)
 void ItemTooltipsLogic_ShowTooltips_m9119 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemSellInfo(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemSellInfo_m9120 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemIcon(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemIcon_m9121 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemDisableSprite(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemDisableSprite_m9122 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemQualityGrid(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemQualityGrid_m9123 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemName(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemName_m9124 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemType(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemType_m9125 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemUseLevel(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemUseLevel_m9126 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemBind(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemBind_m9127 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemPrice(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemPrice_m9128 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemDesc(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemDesc_m9129 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemDynamicDesc(Games.Item.GameItem,ItemTooltipsLogic/ShowType)
 void ItemTooltipsLogic_SetItemDynamicDesc_m9130 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShowRemainTime(Games.Item.GameItem)
 void ItemTooltipsLogic_ShowRemainTime_m9131 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::SetItemMaxNum(Games.Item.GameItem)
 void ItemTooltipsLogic_SetItemMaxNum_m9132 (ItemTooltipsLogic_t1496 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::CloseWindow()
 void ItemTooltipsLogic_CloseWindow_m9133 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemSell()
 void ItemTooltipsLogic_ItemSell_m9134 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemSellOK()
 void ItemTooltipsLogic_ItemSellOK_m9135 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemThrow()
 void ItemTooltipsLogic_ItemThrow_m9136 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemThrowOK()
 void ItemTooltipsLogic_ItemThrowOK_m9137 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemUse()
 void ItemTooltipsLogic_ItemUse_m9138 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemBatchUse()
 void ItemTooltipsLogic_ItemBatchUse_m9139 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnBatchUseNumChoose(System.Int32)
 void ItemTooltipsLogic_OnBatchUseNumChoose_m9140 (ItemTooltipsLogic_t1496 * __this, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ItemShareLink()
 void ItemTooltipsLogic_ItemShareLink_m9141 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::PutInQianKunDai()
 void ItemTooltipsLogic_PutInQianKunDai_m9142 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::Check_NewPlayerGuide()
 void ItemTooltipsLogic_Check_NewPlayerGuide_m9143 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::NewPlayerGuide(System.Int32)
 void ItemTooltipsLogic_NewPlayerGuide_m9144 (ItemTooltipsLogic_t1496 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnBuyClick_Normal()
 void ItemTooltipsLogic_OnBuyClick_Normal_m9145 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnBuyBatchClick_Normal()
 void ItemTooltipsLogic_OnBuyBatchClick_Normal_m9146 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnBuyClick()
 void ItemTooltipsLogic_OnBuyClick_m9147 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnBuyBatchClick()
 void ItemTooltipsLogic_OnBuyBatchClick_m9148 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShareLinkDirectChatInfo()
 void ItemTooltipsLogic_ShareLinkDirectChatInfo_m9149 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void ItemTooltipsLogic_ShowChatInfoRootOver_m9150 (ItemTooltipsLogic_t1496 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ConsignSaleBuyBt()
 void ItemTooltipsLogic_ConsignSaleBuyBt_m9151 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::BuyItemOpenConsignSale(System.Boolean,System.Object)
 void ItemTooltipsLogic_BuyItemOpenConsignSale_m9152 (ItemTooltipsLogic_t1496 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::CangKuIn()
 void ItemTooltipsLogic_CangKuIn_m9153 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::CangKuOut()
 void ItemTooltipsLogic_CangKuOut_m9154 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::AbsorbOnClick()
 void ItemTooltipsLogic_AbsorbOnClick_m9155 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::FlowerItemUse()
 void ItemTooltipsLogic_FlowerItemUse_m9156 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::OnFlowerUseNumChoose(System.Int32)
 void ItemTooltipsLogic_OnFlowerUseNumChoose_m9157 (ItemTooltipsLogic_t1496 * __this, int32_t ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemTooltipsLogic::ComposeOnClick()
 void ItemTooltipsLogic_ComposeOnClick_m9158 (ItemTooltipsLogic_t1496 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
