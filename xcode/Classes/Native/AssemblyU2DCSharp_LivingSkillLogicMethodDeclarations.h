#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LivingSkillLogic
struct LivingSkillLogic_t1511;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;
// LivingSkillLogic/FORMULA_TYPE
#include "AssemblyU2DCSharp_LivingSkillLogic_FORMULA_TYPE.h"

// System.Void LivingSkillLogic::.ctor()
 void LivingSkillLogic__ctor_m9279 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::Awake()
 void LivingSkillLogic_Awake_m9280 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::Start()
 void LivingSkillLogic_Start_m9281 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::OnDestroy()
 void LivingSkillLogic_OnDestroy_m9282 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::LoadFormulaItemOver(UnityEngine.GameObject,System.Object)
 void LivingSkillLogic_LoadFormulaItemOver_m9283 (LivingSkillLogic_t1511 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::LoadStuffItemOver(UnityEngine.GameObject,System.Object)
 void LivingSkillLogic_LoadStuffItemOver_m9284 (LivingSkillLogic_t1511 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::OnSkillTabClick(TabButton)
 void LivingSkillLogic_OnSkillTabClick_m9285 (LivingSkillLogic_t1511 * __this, TabButton_t1210 * ___curButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::UpdateLivingSkillInfo(LivingSkillLogic/FORMULA_TYPE)
 void LivingSkillLogic_UpdateLivingSkillInfo_m9286 (LivingSkillLogic_t1511 * __this, int32_t ___eType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::OnFormulaChoose(System.Int32)
 void LivingSkillLogic_OnFormulaChoose_m9287 (LivingSkillLogic_t1511 * __this, int32_t ___nFormulaID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::CloseWindow()
 void LivingSkillLogic_CloseWindow_m9288 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LivingSkillLogic::IsNeedWaringHaveLowShenQiEquip()
 bool LivingSkillLogic_IsNeedWaringHaveLowShenQiEquip_m9289 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::MakeItem()
 void LivingSkillLogic_MakeItem_m9290 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::MakeShenQi_CurEquip_Ok()
 void LivingSkillLogic_MakeShenQi_CurEquip_Ok_m9291 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::MakeShenQi_Bind_Ok()
 void LivingSkillLogic_MakeShenQi_Bind_Ok_m9292 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::MakeItemOK()
 void LivingSkillLogic_MakeItemOK_m9293 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::MakeItemCancel()
 void LivingSkillLogic_MakeItemCancel_m9294 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::BuyItem()
 void LivingSkillLogic_BuyItem_m9295 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::BuyItemOpenConsignSale(System.Boolean,System.Object)
 void LivingSkillLogic_BuyItemOpenConsignSale_m9296 (LivingSkillLogic_t1511 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::HandleUpdateItem()
 void LivingSkillLogic_HandleUpdateItem_m9297 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::ShowStuffCollectInfo(System.Int32)
 void LivingSkillLogic_ShowStuffCollectInfo_m9298 (LivingSkillLogic_t1511 * __this, int32_t ___nStuffDataID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::CloseStuffCollect()
 void LivingSkillLogic_CloseStuffCollect_m9299 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::UpdatePlayerStamina()
 void LivingSkillLogic_UpdatePlayerStamina_m9300 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::BuyStamina()
 void LivingSkillLogic_BuyStamina_m9301 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::BuyStaminaOK()
 void LivingSkillLogic_BuyStaminaOK_m9302 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::BuyStaminaCancel()
 void LivingSkillLogic_BuyStaminaCancel_m9303 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::UpdateCountDownLabel()
 void LivingSkillLogic_UpdateCountDownLabel_m9304 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::ShowStaminaTips()
 void LivingSkillLogic_ShowStaminaTips_m9305 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::HideStaminaTips()
 void LivingSkillLogic_HideStaminaTips_m9306 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::ShowHelpInfo(UnityEngine.GameObject)
 void LivingSkillLogic_ShowHelpInfo_m9307 (LivingSkillLogic_t1511 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::ShowGetInfo(System.Int32,System.Int32)
 void LivingSkillLogic_ShowGetInfo_m9308 (LivingSkillLogic_t1511 * __this, int32_t ___itemId, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::HideGetInfo(UnityEngine.GameObject)
 void LivingSkillLogic_HideGetInfo_m9309 (LivingSkillLogic_t1511 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LivingSkillLogic::CloseAllUI()
 void LivingSkillLogic_CloseAllUI_m9310 (LivingSkillLogic_t1511 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
