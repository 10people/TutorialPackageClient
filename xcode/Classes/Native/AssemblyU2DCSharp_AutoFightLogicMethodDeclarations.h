#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoFightLogic
struct AutoFightLogic_t1218;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// AutoitemLogicEx
struct AutoitemLogicEx_t1222;

// System.Void AutoFightLogic::.ctor()
 void AutoFightLogic__ctor_m7198 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::.cctor()
 void AutoFightLogic__cctor_m7199 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoFightLogic AutoFightLogic::Instance()
 AutoFightLogic_t1218 * AutoFightLogic_Instance_m7200 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::Awake()
 void AutoFightLogic_Awake_m7201 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::initSkillFirst()
 void AutoFightLogic_initSkillFirst_m7202 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::Start()
 void AutoFightLogic_Start_m7203 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnEnable()
 void AutoFightLogic_OnEnable_m7204 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::updateRemindPoint()
 void AutoFightLogic_updateRemindPoint_m7205 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnDestroy()
 void AutoFightLogic_OnDestroy_m7206 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::AutoFightOK()
 void AutoFightLogic_AutoFightOK_m7207 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnCloseClick()
 void AutoFightLogic_OnCloseClick_m7208 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::AutoFightInfoHpSlider()
 void AutoFightLogic_AutoFightInfoHpSlider_m7209 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::AutoFightInfoMppSlider()
 void AutoFightLogic_AutoFightInfoMppSlider_m7210 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnAutoFihtHpClick()
 void AutoFightLogic_OnAutoFihtHpClick_m7211 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnAutoFihtMpClick()
 void AutoFightLogic_OnAutoFihtMpClick_m7212 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnOpenDrugWindowHp(System.Boolean,System.Object)
 void AutoFightLogic_OnOpenDrugWindowHp_m7213 (AutoFightLogic_t1218 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnOpenDrugWindowMp(System.Boolean,System.Object)
 void AutoFightLogic_OnOpenDrugWindowMp_m7214 (AutoFightLogic_t1218 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnAutoEquipClick()
 void AutoFightLogic_OnAutoEquipClick_m7215 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnOpenDrugWindowEquip(System.Boolean,System.Object)
 void AutoFightLogic_OnOpenDrugWindowEquip_m7216 (AutoFightLogic_t1218 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::UpdateDrug()
 void AutoFightLogic_UpdateDrug_m7217 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::ToggleButtonClick()
 void AutoFightLogic_ToggleButtonClick_m7218 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::Check_NewPlayerGuide()
 void AutoFightLogic_Check_NewPlayerGuide_m7219 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::NewPlayerGuide(System.Int32)
 void AutoFightLogic_NewPlayerGuide_m7220 (AutoFightLogic_t1218 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::RefreshPickUp()
 void AutoFightLogic_RefreshPickUp_m7221 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnLoadSelSkillItem(UnityEngine.GameObject,System.Object)
 void AutoFightLogic_OnLoadSelSkillItem_m7222 (AutoFightLogic_t1218 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::CreateAutoSelSkillItem(System.Int32,UnityEngine.GameObject,System.Int32,System.Int32,System.Boolean)
 void AutoFightLogic_CreateAutoSelSkillItem_m7223 (AutoFightLogic_t1218 * __this, int32_t ___iSkillClass, GameObject_t9 * ___resItem, int32_t ___iSkillIndex, int32_t ___iSkillId, bool ___IsToggle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::_initSkill()
 void AutoFightLogic__initSkill_m7224 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle0()
 void AutoFightLogic_onClickSkillToggle0_m7225 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle1()
 void AutoFightLogic_onClickSkillToggle1_m7226 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle2()
 void AutoFightLogic_onClickSkillToggle2_m7227 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle3()
 void AutoFightLogic_onClickSkillToggle3_m7228 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle4()
 void AutoFightLogic_onClickSkillToggle4_m7229 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle5()
 void AutoFightLogic_onClickSkillToggle5_m7230 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle6()
 void AutoFightLogic_onClickSkillToggle6_m7231 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle7()
 void AutoFightLogic_onClickSkillToggle7_m7232 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickSkillToggle8()
 void AutoFightLogic_onClickSkillToggle8_m7233 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoFightLogic::_getSkillIndexIdByActivieyId(System.Int32)
 int32_t AutoFightLogic__getSkillIndexIdByActivieyId_m7234 (AutoFightLogic_t1218 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AutoFightLogic::_getSkillBaseIconName(System.Int32)
 String_t* AutoFightLogic__getSkillBaseIconName_m7235 (AutoFightLogic_t1218 * __this, int32_t ___SkillActiveId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickMedicineAndSkill()
 void AutoFightLogic_onClickMedicineAndSkill_m7236 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onClickTeamAndStreng()
 void AutoFightLogic_onClickTeamAndStreng_m7237 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::onAutoFightChange()
 void AutoFightLogic_onAutoFightChange_m7238 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnClickSelectItem(AutoitemLogicEx)
 void AutoFightLogic_OnClickSelectItem_m7239 (AutoFightLogic_t1218 * __this, AutoitemLogicEx_t1222 * ___temSelectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::OnCloseClickMedicine()
 void AutoFightLogic_OnCloseClickMedicine_m7240 (AutoFightLogic_t1218 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::_doingWhat(System.Int32,System.Int32)
 void AutoFightLogic__doingWhat_m7241 (AutoFightLogic_t1218 * __this, int32_t ___indexArray, int32_t ___skillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoFightLogic::CreateItem(System.Int32)
 void AutoFightLogic_CreateItem_m7242 (AutoFightLogic_t1218 * __this, int32_t ___curType, MethodInfo* method) IL2CPP_METHOD_ATTR;
