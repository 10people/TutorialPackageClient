#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EquipStrengthenLogic
struct EquipStrengthenLogic_t1394;
// UIManager/OnOpenUIDelegate
struct OnOpenUIDelegate_t1396;
// Games.Item.GameItem
struct GameItem_t1172;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// EquipStrengthenItemLogic
struct EquipStrengthenItemLogic_t1389;
// System.String
struct String_t;
// EquipStrengthenLogic/TabPage
#include "AssemblyU2DCSharp_EquipStrengthenLogic_TabPage.h"
// ItemSlotLogic/SLOT_TYPE
#include "AssemblyU2DCSharp_ItemSlotLogic_SLOT_TYPE.h"

// System.Void EquipStrengthenLogic::.ctor()
 void EquipStrengthenLogic__ctor_m8322 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::.cctor()
 void EquipStrengthenLogic__cctor_m8323 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EquipStrengthenLogic::get_NewPlayerGuideFlag_Step()
 int32_t EquipStrengthenLogic_get_NewPlayerGuideFlag_Step_m8324 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::set_NewPlayerGuideFlag_Step(System.Int32)
 void EquipStrengthenLogic_set_NewPlayerGuideFlag_Step_m8325 (EquipStrengthenLogic_t1394 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ShowWindow(EquipStrengthenLogic/TabPage,UIManager/OnOpenUIDelegate)
 void EquipStrengthenLogic_ShowWindow_m8326 (Object_t * __this/* static, unused */, int32_t ___DefaultTab, OnOpenUIDelegate_t1396 * ___delOpenUI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EquipStrengthenLogic::IsAutoEnchanceMaterial(Games.Item.GameItem)
 bool EquipStrengthenLogic_IsAutoEnchanceMaterial_m8327 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnEnable()
 void EquipStrengthenLogic_OnEnable_m8328 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnDisable()
 void EquipStrengthenLogic_OnDisable_m8329 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnDestroy()
 void EquipStrengthenLogic_OnDestroy_m8330 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::SlowUpdate()
 void EquipStrengthenLogic_SlowUpdate_m8331 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnTabChanged(TabButton)
 void EquipStrengthenLogic_OnTabChanged_m8332 (EquipStrengthenLogic_t1394 * __this, TabButton_t1210 * ___tableButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab()
 void EquipStrengthenLogic_UpdateTab_m8333 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateMoneyInfo()
 void EquipStrengthenLogic_UpdateMoneyInfo_m8334 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EquipStrengthenLogic::IsCurEnchanceTab()
 bool EquipStrengthenLogic_IsCurEnchanceTab_m8335 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EquipStrengthenLogic::IsCurStarTab()
 bool EquipStrengthenLogic_IsCurStarTab_m8336 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Enchance()
 void EquipStrengthenLogic_UpdateTab_Enchance_m8337 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateItemStatus()
 void EquipStrengthenLogic_UpdateItemStatus_m8338 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Enchance_Equip()
 void EquipStrengthenLogic_UpdateTab_Enchance_Equip_m8339 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Enchance_Material()
 void EquipStrengthenLogic_UpdateTab_Enchance_Material_m8340 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnLoadItemEnchance_Material(UnityEngine.GameObject,System.Object)
 void EquipStrengthenLogic_OnLoadItemEnchance_Material_m8341 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Enchance_EquipInfo()
 void EquipStrengthenLogic_UpdateTab_Enchance_EquipInfo_m8342 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Star()
 void EquipStrengthenLogic_UpdateTab_Star_m8343 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Star_Equip()
 void EquipStrengthenLogic_UpdateTab_Star_Equip_m8344 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::UpdateTab_Star_EquipInfo()
 void EquipStrengthenLogic_UpdateTab_Star_EquipInfo_m8345 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ClearTab_Enchance()
 void EquipStrengthenLogic_ClearTab_Enchance_m8346 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ClearTab_Star()
 void EquipStrengthenLogic_ClearTab_Star_m8347 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip(System.Int32)
 void EquipStrengthenLogic_OnClickEquip_m8348 (EquipStrengthenLogic_t1394 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip0()
 void EquipStrengthenLogic_OnClickEquip0_m8349 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip1()
 void EquipStrengthenLogic_OnClickEquip1_m8350 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip2()
 void EquipStrengthenLogic_OnClickEquip2_m8351 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip3()
 void EquipStrengthenLogic_OnClickEquip3_m8352 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip4()
 void EquipStrengthenLogic_OnClickEquip4_m8353 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip5()
 void EquipStrengthenLogic_OnClickEquip5_m8354 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip6()
 void EquipStrengthenLogic_OnClickEquip6_m8355 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip7()
 void EquipStrengthenLogic_OnClickEquip7_m8356 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip8()
 void EquipStrengthenLogic_OnClickEquip8_m8357 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickEquip9()
 void EquipStrengthenLogic_OnClickEquip9_m8358 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ItemAfterChoose_Enchance_Metarial(Games.Item.GameItem)
 void EquipStrengthenLogic_ItemAfterChoose_Enchance_Metarial_m8359 (EquipStrengthenLogic_t1394 * __this, GameItem_t1172 * ___clickitem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ShowItemInfoObj(EquipStrengthenItemLogic)
 void EquipStrengthenLogic_ShowItemInfoObj_m8360 (EquipStrengthenLogic_t1394 * __this, EquipStrengthenItemLogic_t1389 * ___itemLogic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::CloseItemInfoObj()
 void EquipStrengthenLogic_CloseItemInfoObj_m8361 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ItemAfterCancel_Enchance_Metarial(Games.Item.GameItem)
 void EquipStrengthenLogic_ItemAfterCancel_Enchance_Metarial_m8362 (EquipStrengthenLogic_t1394 * __this, GameItem_t1172 * ___clickitem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseButtonClick()
 void EquipStrengthenLogic_OnCloseButtonClick_m8363 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ShowEnchanceChoose()
 void EquipStrengthenLogic_ShowEnchanceChoose_m8364 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Clear()
 void EquipStrengthenLogic_EnchanceChoose_Clear_m8365 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_DoNothing()
 void EquipStrengthenLogic_EnchanceChoose_DoNothing_m8366 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Green()
 void EquipStrengthenLogic_EnchanceChoose_Green_m8367 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Blue()
 void EquipStrengthenLogic_EnchanceChoose_Blue_m8368 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Purple()
 void EquipStrengthenLogic_EnchanceChoose_Purple_m8369 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Orange()
 void EquipStrengthenLogic_EnchanceChoose_Orange_m8370 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Red()
 void EquipStrengthenLogic_EnchanceChoose_Red_m8371 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_Gold()
 void EquipStrengthenLogic_EnchanceChoose_Gold_m8372 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceChoose_All()
 void EquipStrengthenLogic_EnchanceChoose_All_m8373 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnEnchanceButtonClick()
 void EquipStrengthenLogic_OnEnchanceButtonClick_m8374 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceEquip_ChekCombatValue()
 void EquipStrengthenLogic_EnchanceEquip_ChekCombatValue_m8375 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceEquip_CheckConsignSale()
 void EquipStrengthenLogic_EnchanceEquip_CheckConsignSale_m8376 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceEquipOk()
 void EquipStrengthenLogic_EnchanceEquipOk_m8377 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::EnchanceEquipCance()
 void EquipStrengthenLogic_EnchanceEquipCance_m8378 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickStarMode_Normal()
 void EquipStrengthenLogic_OnClickStarMode_Normal_m8379 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickStarMode_Cur12()
 void EquipStrengthenLogic_OnClickStarMode_Cur12_m8380 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickStarMode_Max12()
 void EquipStrengthenLogic_OnClickStarMode_Max12_m8381 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnStarConfirmOKClick()
 void EquipStrengthenLogic_OnStarConfirmOKClick_m8382 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnStarConfirmCancelClick()
 void EquipStrengthenLogic_OnStarConfirmCancelClick_m8383 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnStarButtonClick()
 void EquipStrengthenLogic_OnStarButtonClick_m8384 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::BeginEquipStar()
 void EquipStrengthenLogic_BeginEquipStar_m8385 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnClickStarMaterial()
 void EquipStrengthenLogic_OnClickStarMaterial_m8386 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnChangeValuableToggle()
 void EquipStrengthenLogic_OnChangeValuableToggle_m8387 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EquipStrengthenLogic::CalcTotalExpAfterEnchance()
 int32_t EquipStrengthenLogic_CalcTotalExpAfterEnchance_m8388 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem EquipStrengthenLogic::GetCurSelectEquip()
 GameItem_t1172 * EquipStrengthenLogic_GetCurSelectEquip_m8389 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::SetCurSelectEquip(Games.Item.GameItem)
 void EquipStrengthenLogic_SetCurSelectEquip_m8390 (EquipStrengthenLogic_t1394 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ClearCurSelectEquip()
 void EquipStrengthenLogic_ClearCurSelectEquip_m8391 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCurSelectEquipClick(System.Int32,ItemSlotLogic/SLOT_TYPE,System.String)
 void EquipStrengthenLogic_OnCurSelectEquipClick_m8392 (EquipStrengthenLogic_t1394 * __this, int32_t ___nItemID, int32_t ___eItemType, String_t* ___strSlotName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ShowNextStarLevel(System.Int32,System.Boolean)
 void EquipStrengthenLogic_ShowNextStarLevel_m8393 (EquipStrengthenLogic_t1394 * __this, int32_t ___curlevel, bool ___isMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::ScrollToFirstChooseItem(UnityEngine.GameObject)
 void EquipStrengthenLogic_ScrollToFirstChooseItem_m8394 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___gridObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::Check_NewPlayerGuide()
 void EquipStrengthenLogic_Check_NewPlayerGuide_m8395 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::NewPlayerGuide(System.Int32)
 void EquipStrengthenLogic_NewPlayerGuide_m8396 (EquipStrengthenLogic_t1394 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OpenStrengthMaterialChooseWindow()
 void EquipStrengthenLogic_OpenStrengthMaterialChooseWindow_m8397 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::Set_m_bSetItemCount(System.Boolean)
 void EquipStrengthenLogic_Set_m_bSetItemCount_m8398 (EquipStrengthenLogic_t1394 * __this, bool ___bSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EquipStrengthenLogic::Get_m_bSetItemCount()
 bool EquipStrengthenLogic_Get_m_bSetItemCount_m8399 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseChoosePanel()
 void EquipStrengthenLogic_OnCloseChoosePanel_m8400 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseEntrenthTips(UnityEngine.GameObject)
 void EquipStrengthenLogic_OnCloseEntrenthTips_m8401 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseStarExplainTips(UnityEngine.GameObject)
 void EquipStrengthenLogic_OnCloseStarExplainTips_m8402 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnOpenStarExplainTips()
 void EquipStrengthenLogic_OnOpenStarExplainTips_m8403 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseStrenExplainTips(UnityEngine.GameObject)
 void EquipStrengthenLogic_OnCloseStrenExplainTips_m8404 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnOpenStrenExplainTips()
 void EquipStrengthenLogic_OnOpenStrenExplainTips_m8405 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnCloseStarMenu(UnityEngine.GameObject)
 void EquipStrengthenLogic_OnCloseStarMenu_m8406 (EquipStrengthenLogic_t1394 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EquipStrengthenLogic::OnOpenStarMenu()
 void EquipStrengthenLogic_OnOpenStarMenu_m8407 (EquipStrengthenLogic_t1394 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
