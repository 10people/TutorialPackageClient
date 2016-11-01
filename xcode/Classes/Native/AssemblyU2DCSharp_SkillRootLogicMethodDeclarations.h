#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SkillRootLogic
struct SkillRootLogic_t1749;
// SkillRootButtonItemLogic
struct SkillRootButtonItemLogic_t1745;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SKILLDELANDGAINTYPE
#include "AssemblyU2DCSharp_SKILLDELANDGAINTYPE.h"

// System.Void SkillRootLogic::.ctor()
 void SkillRootLogic__ctor_m11422 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::.cctor()
 void SkillRootLogic__cctor_m11423 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillRootButtonItemLogic SkillRootLogic::get_CurClickBtItem()
 SkillRootButtonItemLogic_t1745 * SkillRootLogic_get_CurClickBtItem_m11424 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::set_CurClickBtItem(SkillRootButtonItemLogic)
 void SkillRootLogic_set_CurClickBtItem_m11425 (SkillRootLogic_t1749 * __this, SkillRootButtonItemLogic_t1745 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillRootLogic::get_SelectSkillIndex()
 int32_t SkillRootLogic_get_SelectSkillIndex_m11426 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::set_SelectSkillIndex(System.Int32)
 void SkillRootLogic_set_SelectSkillIndex_m11427 (SkillRootLogic_t1749 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillRootLogic::get_NewPlayerGuide_Step()
 int32_t SkillRootLogic_get_NewPlayerGuide_Step_m11428 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::set_NewPlayerGuide_Step(System.Int32)
 void SkillRootLogic_set_NewPlayerGuide_Step_m11429 (SkillRootLogic_t1749 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillRootLogic SkillRootLogic::Instance()
 SkillRootLogic_t1749 * SkillRootLogic_Instance_m11430 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::Awake()
 void SkillRootLogic_Awake_m11431 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnEnable()
 void SkillRootLogic_OnEnable_m11432 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnDestroy()
 void SkillRootLogic_OnDestroy_m11433 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::Start()
 void SkillRootLogic_Start_m11434 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnLoadButtonItem()
 void SkillRootLogic_OnLoadButtonItem_m11435 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::PlaySkillLevelUpEffect()
 void SkillRootLogic_PlaySkillLevelUpEffect_m11436 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillRootLogic::GetPreskillActiveLevel(System.Int32)
 int32_t SkillRootLogic_GetPreskillActiveLevel_m11437 (SkillRootLogic_t1749 * __this, int32_t ___nPreSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillRootLogic::IsPreSkillIsOwn(System.Int32)
 bool SkillRootLogic_IsPreSkillIsOwn_m11438 (SkillRootLogic_t1749 * __this, int32_t ___nPreSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::SkillLevelUpEffectOver()
 void SkillRootLogic_SkillLevelUpEffectOver_m11439 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnLoadBarItem(UnityEngine.GameObject,System.Object)
 void SkillRootLogic_OnLoadBarItem_m11440 (SkillRootLogic_t1749 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::SaveSkillBarSetInfo()
 void SkillRootLogic_SaveSkillBarSetInfo_m11441 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ReleaseButtonDragSprite(System.Int32)
 void SkillRootLogic_ReleaseButtonDragSprite_m11442 (SkillRootLogic_t1749 * __this, int32_t ___nSkillIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnCloseClick()
 void SkillRootLogic_OnCloseClick_m11443 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::UpdateSkillInfo()
 void SkillRootLogic_UpdateSkillInfo_m11444 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ShowSkillInfo()
 void SkillRootLogic_ShowSkillInfo_m11445 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ShowNoStudySkillInfo(System.Int32)
 void SkillRootLogic_ShowNoStudySkillInfo_m11446 (SkillRootLogic_t1749 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillRootLogic::GetCanLevUpSkillCount()
 int32_t SkillRootLogic_GetCanLevUpSkillCount_m11447 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillRootLogic::IsCanLevelUpSkill(System.Int32)
 bool SkillRootLogic_IsCanLevelUpSkill_m11448 (Object_t * __this/* static, unused */, int32_t ___nCurSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillRootLogic::IsCanLevelUpMasterSkill(System.Int32)
 bool SkillRootLogic_IsCanLevelUpMasterSkill_m11449 (Object_t * __this/* static, unused */, int32_t ___nCurSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillRootLogic::GetTypeDesc(SKILLDELANDGAINTYPE,System.Int32)
 String_t* SkillRootLogic_GetTypeDesc_m11450 (SkillRootLogic_t1749 * __this, int32_t ___nType, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ClickLevelUp()
 void SkillRootLogic_ClickLevelUp_m11451 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnClickLevelUp2Max()
 void SkillRootLogic_OnClickLevelUp2Max_m11452 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::onClickLevelUpDetail()
 void SkillRootLogic_onClickLevelUpDetail_m11453 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnClickCancel()
 void SkillRootLogic_OnClickCancel_m11454 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ClickLeftSkillInfo()
 void SkillRootLogic_ClickLeftSkillInfo_m11455 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ClickRightSkillInfo()
 void SkillRootLogic_ClickRightSkillInfo_m11456 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::Check_NewPlayerGuide()
 void SkillRootLogic_Check_NewPlayerGuide_m11457 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::NewPlayerGuide(System.Int32)
 void SkillRootLogic_NewPlayerGuide_m11458 (SkillRootLogic_t1749 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::SkillLevelUpGuide()
 void SkillRootLogic_SkillLevelUpGuide_m11459 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::ClickButton(UnityEngine.GameObject)
 void SkillRootLogic_ClickButton_m11460 (SkillRootLogic_t1749 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::OnClickSkillIntro()
 void SkillRootLogic_OnClickSkillIntro_m11461 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillRootLogic::UpdateRedRemindPoint()
 void SkillRootLogic_UpdateRedRemindPoint_m11462 (SkillRootLogic_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
