#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SysShopController
struct SysShopController_t1843;
// UnityEngine.GameObject
struct GameObject_t9;
// SysShopPage
struct SysShopPage_t1845;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// SysShopPageItem
struct SysShopPageItem_t1846;
// RewardItem
struct RewardItem_t1842;

// System.Void SysShopController::.ctor()
 void SysShopController__ctor_m12160 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::.cctor()
 void SysShopController__cctor_m12161 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SysShopController::get_NewPlayerGuide_Step()
 int32_t SysShopController_get_NewPlayerGuide_Step_m12162 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::set_NewPlayerGuide_Step(System.Int32)
 void SysShopController_set_NewPlayerGuide_Step_m12163 (SysShopController_t1843 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnEnable()
 void SysShopController_OnEnable_m12164 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnDisable()
 void SysShopController_OnDisable_m12165 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::Awake()
 void SysShopController_Awake_m12166 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::Start()
 void SysShopController_Start_m12167 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::SetCurPageNum(UnityEngine.GameObject)
 void SysShopController_SetCurPageNum_m12168 (SysShopController_t1843 * __this, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::SetToCurPage()
 void SysShopController_SetToCurPage_m12169 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SysShopPage SysShopController::GetCurShowShopPage()
 SysShopPage_t1845 * SysShopController_GetCurShowShopPage_m12170 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnLoadPageItem(UnityEngine.GameObject,System.Object)
 void SysShopController_OnLoadPageItem_m12171 (SysShopController_t1843 * __this, GameObject_t9 * ___pageItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnLoadShopItem(UnityEngine.GameObject,System.Object)
 void SysShopController_OnLoadShopItem_m12172 (SysShopController_t1843 * __this, GameObject_t9 * ___shopItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::ShowPage(System.Int32)
 void SysShopController_ShowPage_m12173 (SysShopController_t1843 * __this, int32_t ___page, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::BuyItem(System.String,System.Int32)
 void SysShopController_BuyItem_m12174 (Object_t * __this/* static, unused */, String_t* ___strItemIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::SellItem(System.Int32,System.Collections.Generic.List`1<System.UInt64>)
 void SysShopController_SellItem_m12175 (Object_t * __this/* static, unused */, int32_t ___packet, List_1_t1393 * ___packetGUIDList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::BuyBack(System.UInt64)
 void SysShopController_BuyBack_m12176 (Object_t * __this/* static, unused */, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::UpdateBuyBackItems()
 void SysShopController_UpdateBuyBackItems_m12177 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::BuyCurItem()
 void SysShopController_BuyCurItem_m12178 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::BuyBatchCurItem()
 void SysShopController_BuyBatchCurItem_m12179 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::ShowCurItemTip()
 void SysShopController_ShowCurItemTip_m12180 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::EquipBuyBatchClick()
 void SysShopController_EquipBuyBatchClick_m12181 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::EquipBuyClick()
 void SysShopController_EquipBuyClick_m12182 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::ItemBuyBatchClick()
 void SysShopController_ItemBuyBatchClick_m12183 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::ItemBuyClick()
 void SysShopController_ItemBuyClick_m12184 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::CloseCurItemTip()
 void SysShopController_CloseCurItemTip_m12185 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SysShopPageItem SysShopController::GetSelectedItem()
 SysShopPageItem_t1846 * SysShopController_GetSelectedItem_m12186 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnNextPageClick()
 void SysShopController_OnNextPageClick_m12187 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnPrevPageClick()
 void SysShopController_OnPrevPageClick_m12188 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnCancelClick()
 void SysShopController_OnCancelClick_m12189 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnBuyBackClick(RewardItem)
 void SysShopController_OnBuyBackClick_m12190 (SysShopController_t1843 * __this, RewardItem_t1842 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnBuyClick()
 void SysShopController_OnBuyClick_m12191 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnBuyBatch()
 void SysShopController_OnBuyBatch_m12192 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnNumChoose(System.Int32)
 void SysShopController_OnNumChoose_m12193 (SysShopController_t1843 * __this, int32_t ___curNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::UpdateMoney()
 void SysShopController_UpdateMoney_m12194 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::Check_NewPlayerGuide()
 void SysShopController_Check_NewPlayerGuide_m12195 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::NewPlayerGuide(System.Int32)
 void SysShopController_NewPlayerGuide_m12196 (SysShopController_t1843 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnOpenBuyBackWindow()
 void SysShopController_OnOpenBuyBackWindow_m12197 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnCloseBuyBackWindow()
 void SysShopController_OnCloseBuyBackWindow_m12198 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::OnClickBuyBackAll()
 void SysShopController_OnClickBuyBackAll_m12199 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::UpdateGoldMoneyShopItem()
 void SysShopController_UpdateGoldMoneyShopItem_m12200 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::UpdateGoldMoneyShopTime()
 void SysShopController_UpdateGoldMoneyShopTime_m12201 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::SetLeftTime()
 void SysShopController_SetLeftTime_m12202 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SysShopController::UpdateTime()
 void SysShopController_UpdateTime_m12203 (SysShopController_t1843 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
