#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BackPackLogic
struct BackPackLogic_t1240;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;

// System.Void BackPackLogic::.ctor()
 void BackPackLogic__ctor_m7323 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::.cctor()
 void BackPackLogic__cctor_m7324 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BackPackLogic BackPackLogic::Instance()
 BackPackLogic_t1240 * BackPackLogic_Instance_m7325 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 BackPackLogic::get_TakeOffGuid()
 uint64_t BackPackLogic_get_TakeOffGuid_m7326 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::set_TakeOffGuid(System.UInt64)
 void BackPackLogic_set_TakeOffGuid_m7327 (BackPackLogic_t1240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BackPackLogic::get_NewPlayerGuideFlag_Step()
 int32_t BackPackLogic_get_NewPlayerGuideFlag_Step_m7328 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::set_NewPlayerGuideFlag_Step(System.Int32)
 void BackPackLogic_set_NewPlayerGuideFlag_Step_m7329 (BackPackLogic_t1240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::Awake()
 void BackPackLogic_Awake_m7330 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnEnable()
 void BackPackLogic_OnEnable_m7331 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnDisable()
 void BackPackLogic_OnDisable_m7332 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::Init()
 void BackPackLogic_Init_m7333 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::UpdatePlayerInfo()
 void BackPackLogic_UpdatePlayerInfo_m7334 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::InitEquipPack()
 void BackPackLogic_InitEquipPack_m7335 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::UpdateEquipPack()
 void BackPackLogic_UpdateEquipPack_m7336 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BackPackLogic::GetEquipSlotByIndex(System.Int32)
 int32_t BackPackLogic_GetEquipSlotByIndex_m7337 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::InitBackPack()
 void BackPackLogic_InitBackPack_m7338 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::InitBackPackItem()
 void BackPackLogic_InitBackPackItem_m7339 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::UpdateBackPack()
 void BackPackLogic_UpdateBackPack_m7340 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPack_All()
 void BackPackLogic_ShowBackPack_All_m7341 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPack_Equip()
 void BackPackLogic_ShowBackPack_Equip_m7342 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPack_Material()
 void BackPackLogic_ShowBackPack_Material_m7343 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPack_Fellow()
 void BackPackLogic_ShowBackPack_Fellow_m7344 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPack_Other()
 void BackPackLogic_ShowBackPack_Other_m7345 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::ShowBackPackItemList(System.Collections.Generic.List`1<Games.Item.GameItem>)
 void BackPackLogic_ShowBackPackItemList_m7346 (BackPackLogic_t1240 * __this, List_1_t1244 * ___itemlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::CloseWindow()
 void BackPackLogic_CloseWindow_m7347 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::UpdateMoneyInfo()
 void BackPackLogic_UpdateMoneyInfo_m7348 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_TabAll()
 void BackPackLogic_OnClick_TabAll_m7349 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_TabEquip()
 void BackPackLogic_OnClick_TabEquip_m7350 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_TabMaterial()
 void BackPackLogic_OnClick_TabMaterial_m7351 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_TabFellow()
 void BackPackLogic_OnClick_TabFellow_m7352 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_TabOther()
 void BackPackLogic_OnClick_TabOther_m7353 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_SellBeginButton()
 void BackPackLogic_OnClick_SellBeginButton_m7354 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_PayButton()
 void BackPackLogic_OnClick_PayButton_m7355 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_UnLockButton()
 void BackPackLogic_OnClick_UnLockButton_m7356 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_WEAPON()
 void BackPackLogic_OnClick_Equip_WEAPON_m7357 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_HEAD()
 void BackPackLogic_OnClick_Equip_HEAD_m7358 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_ARMOR()
 void BackPackLogic_OnClick_Equip_ARMOR_m7359 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_LEG_GUARD()
 void BackPackLogic_OnClick_Equip_LEG_GUARD_m7360 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_CUFF()
 void BackPackLogic_OnClick_Equip_CUFF_m7361 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_SHOES()
 void BackPackLogic_OnClick_Equip_SHOES_m7362 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_NECK()
 void BackPackLogic_OnClick_Equip_NECK_m7363 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_RING()
 void BackPackLogic_OnClick_Equip_RING_m7364 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_AMULET()
 void BackPackLogic_OnClick_Equip_AMULET_m7365 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClick_Equip_BELT()
 void BackPackLogic_OnClick_Equip_BELT_m7366 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnItemDragFinished()
 void BackPackLogic_OnItemDragFinished_m7367 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::DestroyPartnerFakeObj()
 void BackPackLogic_DestroyPartnerFakeObj_m7368 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::CreatePartnerFakeObj(System.Int32)
 void BackPackLogic_CreatePartnerFakeObj_m7369 (BackPackLogic_t1240 * __this, int32_t ___pro, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::InitStartAndEnd()
 void BackPackLogic_InitStartAndEnd_m7370 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::Check_NewPlayerGuide()
 void BackPackLogic_Check_NewPlayerGuide_m7371 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::NewPlayerGuide(System.Int32)
 void BackPackLogic_NewPlayerGuide_m7372 (BackPackLogic_t1240 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::SwitchQianKunDaiViewPutInDirectly(System.Boolean,System.Object)
 void BackPackLogic_SwitchQianKunDaiViewPutInDirectly_m7373 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::SwitchQianKunDaiView(System.Boolean,System.Object)
 void BackPackLogic_SwitchQianKunDaiView_m7374 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::SwitchQianKunDaiViewFromChristmas(System.Boolean,System.Object)
 void BackPackLogic_SwitchQianKunDaiViewFromChristmas_m7375 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::SwitchEquipPackView(System.Boolean,System.Object)
 void BackPackLogic_SwitchEquipPackView_m7376 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::UpdatePlayerEquipView()
 void BackPackLogic_UpdatePlayerEquipView_m7377 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::CancelItemSlotChoose(System.UInt64)
 void BackPackLogic_CancelItemSlotChoose_m7378 (BackPackLogic_t1240 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClickBackPack()
 void BackPackLogic_OnClickBackPack_m7379 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClickCombine()
 void BackPackLogic_OnClickCombine_m7380 (BackPackLogic_t1240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackPackLogic::OnClickFilter(TabButton)
 void BackPackLogic_OnClickFilter_m7381 (BackPackLogic_t1240 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
