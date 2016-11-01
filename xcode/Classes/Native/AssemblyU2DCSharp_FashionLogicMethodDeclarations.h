#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FashionLogic
struct FashionLogic_t1403;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_FashionData
struct Tab_FashionData_t453;

// System.Void FashionLogic::.ctor()
 void FashionLogic__ctor_m8490 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::.cctor()
 void FashionLogic__cctor_m8491 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FashionLogic FashionLogic::Instance()
 FashionLogic_t1403 * FashionLogic_Instance_m8492 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FashionLogic::get_IsFitOn()
 bool FashionLogic_get_IsFitOn_m8493 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::set_IsFitOn(System.Boolean)
 void FashionLogic_set_IsFitOn_m8494 (FashionLogic_t1403 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::CloseWindow()
 void FashionLogic_CloseWindow_m8495 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::OnEnable()
 void FashionLogic_OnEnable_m8496 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::OnDisable()
 void FashionLogic_OnDisable_m8497 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::Init()
 void FashionLogic_Init_m8498 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::OnTabChange(TabButton)
 void FashionLogic_OnTabChange_m8499 (FashionLogic_t1403 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::ShowBuySuitDialog(UnityEngine.GameObject)
 void FashionLogic_ShowBuySuitDialog_m8500 (FashionLogic_t1403 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::ShowRenewDialog(UnityEngine.GameObject)
 void FashionLogic_ShowRenewDialog_m8501 (FashionLogic_t1403 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::HideBuySuitDialog(UnityEngine.GameObject)
 void FashionLogic_HideBuySuitDialog_m8502 (FashionLogic_t1403 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::BuyFashion(UnityEngine.GameObject)
 void FashionLogic_BuyFashion_m8503 (FashionLogic_t1403 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::DestroyPartnerFakeObj()
 void FashionLogic_DestroyPartnerFakeObj_m8504 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::CreatePartnerFakeObj(System.Int32)
 void FashionLogic_CreatePartnerFakeObj_m8505 (FashionLogic_t1403 * __this, int32_t ___pro, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::FitOnFashion(System.Int32)
 void FashionLogic_FitOnFashion_m8506 (FashionLogic_t1403 * __this, int32_t ___nFashionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::SlowUpdate()
 void FashionLogic_SlowUpdate_m8507 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::HandleSendFashionInfo(System.Int32)
 void FashionLogic_HandleSendFashionInfo_m8508 (FashionLogic_t1403 * __this, int32_t ___nFashionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::HandleSendCurFashion(System.Int32)
 void FashionLogic_HandleSendCurFashion_m8509 (FashionLogic_t1403 * __this, int32_t ___nCurFashionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::ShowFashionChange()
 void FashionLogic_ShowFashionChange_m8510 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::ChooseFashionItem(System.Int32)
 void FashionLogic_ChooseFashionItem_m8511 (FashionLogic_t1403 * __this, int32_t ___nFashionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::ClearFashionItemChoose()
 void FashionLogic_ClearFashionItemChoose_m8512 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::InitFashionList()
 void FashionLogic_InitFashionList_m8513 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::AddFashionItem(GCGame.Table.Tab_FashionData,System.Boolean)
 void FashionLogic_AddFashionItem_m8514 (FashionLogic_t1403 * __this, Tab_FashionData_t453 * ___data, bool ___isObtained, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::EquipOnClick()
 void FashionLogic_EquipOnClick_m8515 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::TakeOffOnClick()
 void FashionLogic_TakeOffOnClick_m8516 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::UpdateCurChooseFashion()
 void FashionLogic_UpdateCurChooseFashion_m8517 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::HandleUpdateAttr()
 void FashionLogic_HandleUpdateAttr_m8518 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FashionLogic::UpdateFashionView()
 void FashionLogic_UpdateFashionView_m8519 (FashionLogic_t1403 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
