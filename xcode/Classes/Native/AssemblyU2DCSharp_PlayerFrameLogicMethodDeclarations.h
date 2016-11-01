#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerFrameLogic
struct PlayerFrameLogic_t1653;
// System.String
struct String_t;

// System.Void PlayerFrameLogic::.ctor()
 void PlayerFrameLogic__ctor_m10528 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::.cctor()
 void PlayerFrameLogic__cctor_m10529 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerFrameLogic PlayerFrameLogic::Instance()
 PlayerFrameLogic_t1653 * PlayerFrameLogic_Instance_m10530 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerFrameLogic::get_Fold()
 bool PlayerFrameLogic_get_Fold_m10531 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::Awake()
 void PlayerFrameLogic_Awake_m10532 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::Start()
 void PlayerFrameLogic_Start_m10533 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::HideHPAndMPText()
 void PlayerFrameLogic_HideHPAndMPText_m10534 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::GetWifiGameObject()
 void PlayerFrameLogic_GetWifiGameObject_m10535 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::Update()
 void PlayerFrameLogic_Update_m10536 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::OnDestroy()
 void PlayerFrameLogic_OnDestroy_m10537 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::PlayerFrameHeadOnClick()
 void PlayerFrameLogic_PlayerFrameHeadOnClick_m10538 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::PlayTween()
 void PlayerFrameLogic_PlayTween_m10539 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeHP(System.Int32,System.Int32)
 void PlayerFrameLogic_ChangeHP_m10540 (PlayerFrameLogic_t1653 * __this, int32_t ___nCurHp, int32_t ___nMaxHp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeMP(System.Int32,System.Int32)
 void PlayerFrameLogic_ChangeMP_m10541 (PlayerFrameLogic_t1653 * __this, int32_t ___nCurMp, int32_t ___nMaxMp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeLev(System.Int32)
 void PlayerFrameLogic_ChangeLev_m10542 (PlayerFrameLogic_t1653 * __this, int32_t ___nLev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeHeadPic(System.String)
 void PlayerFrameLogic_ChangeHeadPic_m10543 (PlayerFrameLogic_t1653 * __this, String_t* ___strPic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeName(System.String)
 void PlayerFrameLogic_ChangeName_m10544 (PlayerFrameLogic_t1653 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeCombatValue(System.Int32)
 void PlayerFrameLogic_ChangeCombatValue_m10545 (PlayerFrameLogic_t1653 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::UpdateData()
 void PlayerFrameLogic_UpdateData_m10546 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::AfterPlayTweenFold()
 void PlayerFrameLogic_AfterPlayTweenFold_m10547 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::InitUITweenerWhenChangeScene()
 void PlayerFrameLogic_InitUITweenerWhenChangeScene_m10548 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::NewPlayerGuide(System.Int32)
 void PlayerFrameLogic_NewPlayerGuide_m10549 (PlayerFrameLogic_t1653 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::InitAutoFight()
 void PlayerFrameLogic_InitAutoFight_m10550 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::UpdateCD()
 void PlayerFrameLogic_UpdateCD_m10551 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::OnItemHPClick()
 void PlayerFrameLogic_OnItemHPClick_m10552 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::OnItemMPClick()
 void PlayerFrameLogic_OnItemMPClick_m10553 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ChangeXPEnergy(System.Int32,System.Int32)
 void PlayerFrameLogic_ChangeXPEnergy_m10554 (PlayerFrameLogic_t1653 * __this, int32_t ___nValue, int32_t ___maxXP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::PlayXPEffect(System.Boolean)
 void PlayerFrameLogic_PlayXPEffect_m10555 (Object_t * __this/* static, unused */, bool ___showEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::RefreshVIP()
 void PlayerFrameLogic_RefreshVIP_m10556 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::OnVipCostChange(System.Int32)
 void PlayerFrameLogic_OnVipCostChange_m10557 (PlayerFrameLogic_t1653 * __this, int32_t ___nCost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::AddRemindNum()
 void PlayerFrameLogic_AddRemindNum_m10558 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerFrameLogic::GetPartnerTipCount()
 int32_t PlayerFrameLogic_GetPartnerTipCount_m10559 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerFrameLogic::GetMasterAndGuildTipCount()
 int32_t PlayerFrameLogic_GetMasterAndGuildTipCount_m10560 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::UpdateRemainNum()
 void PlayerFrameLogic_UpdateRemainNum_m10561 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::UpdateBuffIcon()
 void PlayerFrameLogic_UpdateBuffIcon_m10562 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::SwitchAllWhenPopUIShow(System.Boolean)
 void PlayerFrameLogic_SwitchAllWhenPopUIShow_m10563 (PlayerFrameLogic_t1653 * __this, bool ___isShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::SetTeamCaptain(System.Boolean)
 void PlayerFrameLogic_SetTeamCaptain_m10564 (PlayerFrameLogic_t1653 * __this, bool ___bActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::GetWifiInfo(System.Single)
 void PlayerFrameLogic_GetWifiInfo_m10565 (PlayerFrameLogic_t1653 * __this, float ___tagSpeed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::SetWifiStatic(System.Int32)
 void PlayerFrameLogic_SetWifiStatic_m10566 (PlayerFrameLogic_t1653 * __this, int32_t ___wifiStatic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::UpdateFunctionCD()
 void PlayerFrameLogic_UpdateFunctionCD_m10567 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerFrameLogic::GetSystemLogicTipCount()
 int32_t PlayerFrameLogic_GetSystemLogicTipCount_m10568 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerFrameLogic::GetGemHoleCanOpenCount(System.Int32)
 int32_t PlayerFrameLogic_GetGemHoleCanOpenCount_m10569 (PlayerFrameLogic_t1653 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerFrameLogic::GetPartnerSkillCanLevelUpCount()
 int32_t PlayerFrameLogic_GetPartnerSkillCanLevelUpCount_m10570 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFrameLogic::ShowFightObj()
 void PlayerFrameLogic_ShowFightObj_m10571 (PlayerFrameLogic_t1653 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
