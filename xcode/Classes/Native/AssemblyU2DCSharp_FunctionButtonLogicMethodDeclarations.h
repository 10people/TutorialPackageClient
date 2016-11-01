#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FunctionButtonLogic
struct FunctionButtonLogic_t1415;
// UnityEngine.GameObject
struct GameObject_t9;
// MailData/MailUpdateType
#include "AssemblyU2DCSharp_MailData_MailUpdateType.h"
// FunctionButtonLogic/DynamicButton
#include "AssemblyU2DCSharp_FunctionButtonLogic_DynamicButton.h"

// System.Void FunctionButtonLogic::.ctor()
 void FunctionButtonLogic__ctor_m8618 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::.cctor()
 void FunctionButtonLogic__cctor_m8619 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FunctionButtonLogic FunctionButtonLogic::Instance()
 FunctionButtonLogic_t1415 * FunctionButtonLogic_Instance_m8620 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FunctionButtonLogic::get_NewPlayerGuide_Step()
 int32_t FunctionButtonLogic_get_NewPlayerGuide_Step_m8621 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::set_NewPlayerGuide_Step(System.Int32)
 void FunctionButtonLogic_set_NewPlayerGuide_Step_m8622 (FunctionButtonLogic_t1415 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FunctionButtonLogic::get_ExitTime()
 int32_t FunctionButtonLogic_get_ExitTime_m8623 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::set_ExitTime(System.Int32)
 void FunctionButtonLogic_set_ExitTime_m8624 (FunctionButtonLogic_t1415 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::Awake()
 void FunctionButtonLogic_Awake_m8625 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::Start()
 void FunctionButtonLogic_Start_m8626 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::TickOnMinute()
 void FunctionButtonLogic_TickOnMinute_m8627 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::TickOnSecond()
 void FunctionButtonLogic_TickOnSecond_m8628 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::FixedUpdate()
 void FunctionButtonLogic_FixedUpdate_m8629 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnDestroy()
 void FunctionButtonLogic_OnDestroy_m8630 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateExitTime()
 void FunctionButtonLogic_UpdateExitTime_m8631 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::PlayTween(System.Boolean)
 void FunctionButtonLogic_PlayTween_m8632 (FunctionButtonLogic_t1415 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::InitUITweenerWhenChangeScene()
 void FunctionButtonLogic_InitUITweenerWhenChangeScene_m8633 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ShowSceneMap()
 void FunctionButtonLogic_ShowSceneMap_m8634 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateActionButtonTip()
 void FunctionButtonLogic_UpdateActionButtonTip_m8635 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnShopClick()
 void FunctionButtonLogic_OnShopClick_m8636 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnAchievementClick()
 void FunctionButtonLogic_OnAchievementClick_m8637 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnRankClick()
 void FunctionButtonLogic_OnRankClick_m8638 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateDoubleExpTimer()
 void FunctionButtonLogic_UpdateDoubleExpTimer_m8639 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::initAwardActivityTips()
 void FunctionButtonLogic_initAwardActivityTips_m8640 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::CleanUpAwardActivityTips()
 void FunctionButtonLogic_CleanUpAwardActivityTips_m8641 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateButtonAwardTips()
 void FunctionButtonLogic_UpdateButtonAwardTips_m8642 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ShowAwardUI()
 void FunctionButtonLogic_ShowAwardUI_m8643 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnActivityClick(UnityEngine.GameObject)
 void FunctionButtonLogic_OnActivityClick_m8644 (FunctionButtonLogic_t1415 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnPKClick()
 void FunctionButtonLogic_OnPKClick_m8645 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::NewPlayerGuide(System.Int32)
 void FunctionButtonLogic_NewPlayerGuide_m8646 (FunctionButtonLogic_t1415 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnMailUpdate(MailData/MailUpdateType,System.UInt64)
 void FunctionButtonLogic_OnMailUpdate_m8647 (FunctionButtonLogic_t1415 * __this, int32_t ___curUpdateType, uint64_t ___curKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnMailTipClick()
 void FunctionButtonLogic_OnMailTipClick_m8648 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnDailyLuckyDrawClick()
 void FunctionButtonLogic_OnDailyLuckyDrawClick_m8649 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateMoneyTreeButton()
 void FunctionButtonLogic_UpdateMoneyTreeButton_m8650 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnExitFBClick()
 void FunctionButtonLogic_OnExitFBClick_m8651 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnLeaveCopySceneOK()
 void FunctionButtonLogic_OnLeaveCopySceneOK_m8652 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnLEaveCopySceneNO()
 void FunctionButtonLogic_OnLEaveCopySceneNO_m8653 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OpenFunction(System.Int32)
 void FunctionButtonLogic_OpenFunction_m8654 (FunctionButtonLogic_t1415 * __this, int32_t ___nType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::LevelUpButtonActive()
 void FunctionButtonLogic_LevelUpButtonActive_m8655 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ShowNewServerActivity()
 void FunctionButtonLogic_ShowNewServerActivity_m8656 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::InitButtonActive()
 void FunctionButtonLogic_InitButtonActive_m8657 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateDynamicState()
 void FunctionButtonLogic_UpdateDynamicState_m8658 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::StopNewButtonEffect()
 void FunctionButtonLogic_StopNewButtonEffect_m8659 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::PlayNewButtonEffect()
 void FunctionButtonLogic_PlayNewButtonEffect_m8660 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnWuLinClick()
 void FunctionButtonLogic_OnWuLinClick_m8661 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnWorldBossClick()
 void FunctionButtonLogic_OnWorldBossClick_m8662 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnWorldBossDead()
 void FunctionButtonLogic_OnWorldBossDead_m8663 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnWorldBossStateChange(System.Int32)
 void FunctionButtonLogic_OnWorldBossStateChange_m8664 (FunctionButtonLogic_t1415 * __this, int32_t ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ZhenQiAssistState(System.Int32,System.Int32)
 void FunctionButtonLogic_ZhenQiAssistState_m8665 (FunctionButtonLogic_t1415 * __this, int32_t ___state, int32_t ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ZhenQiAssistButtonClick()
 void FunctionButtonLogic_ZhenQiAssistButtonClick_m8666 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnDoAutoFightClick()
 void FunctionButtonLogic_OnDoAutoFightClick_m8667 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnDoAutoStopFightClick()
 void FunctionButtonLogic_OnDoAutoStopFightClick_m8668 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ShowFunctionButtons(System.Boolean)
 void FunctionButtonLogic_ShowFunctionButtons_m8669 (FunctionButtonLogic_t1415 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateAutoFightBtnState(System.Boolean)
 void FunctionButtonLogic_UpdateAutoFightBtnState_m8670 (FunctionButtonLogic_t1415 * __this, bool ___ignoreCutScene, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateDaliyLuckNum()
 void FunctionButtonLogic_UpdateDaliyLuckNum_m8671 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateDailyLuckyButton()
 void FunctionButtonLogic_UpdateDailyLuckyButton_m8672 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnShowDetailButtons()
 void FunctionButtonLogic_OnShowDetailButtons_m8673 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnHideDetailButtions()
 void FunctionButtonLogic_OnHideDetailButtions_m8674 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateAutoTeamCue()
 void FunctionButtonLogic_UpdateAutoTeamCue_m8675 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::ShowDynamicButton(FunctionButtonLogic/DynamicButton,System.Boolean)
 void FunctionButtonLogic_ShowDynamicButton_m8676 (FunctionButtonLogic_t1415 * __this, int32_t ___id, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateChristmasButton()
 void FunctionButtonLogic_UpdateChristmasButton_m8677 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnClickChristmas()
 void FunctionButtonLogic_OnClickChristmas_m8678 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnClickHuaShan()
 void FunctionButtonLogic_OnClickHuaShan_m8679 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnClickPrecious()
 void FunctionButtonLogic_OnClickPrecious_m8680 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnClickWar()
 void FunctionButtonLogic_OnClickWar_m8681 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdatePresentButtonShow()
 void FunctionButtonLogic_UpdatePresentButtonShow_m8682 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::PresentRemindOnClick()
 void FunctionButtonLogic_PresentRemindOnClick_m8683 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateFestivalButton()
 void FunctionButtonLogic_UpdateFestivalButton_m8684 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnClickFestival()
 void FunctionButtonLogic_OnClickFestival_m8685 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FunctionButtonLogic::getAutoFightObj()
 GameObject_t9 * FunctionButtonLogic_getAutoFightObj_m8686 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::showHideGuaJi()
 void FunctionButtonLogic_showHideGuaJi_m8687 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateFestivalTip()
 void FunctionButtonLogic_UpdateFestivalTip_m8688 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::UpdateSecondDayAwardTime()
 void FunctionButtonLogic_UpdateSecondDayAwardTime_m8689 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnOpenShop()
 void FunctionButtonLogic_OnOpenShop_m8690 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FunctionButtonLogic::OnOpenVip()
 void FunctionButtonLogic_OnOpenVip_m8691 (FunctionButtonLogic_t1415 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
