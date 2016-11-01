#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MenuBarLogic
struct MenuBarLogic_t1544;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;

// System.Void MenuBarLogic::.ctor()
 void MenuBarLogic__ctor_m9538 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::.cctor()
 void MenuBarLogic__cctor_m9539 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MenuBarLogic MenuBarLogic::Instance()
 MenuBarLogic_t1544 * MenuBarLogic_Instance_m9540 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MenuBarLogic::get_NewPlayerGuideIndex()
 int32_t MenuBarLogic_get_NewPlayerGuideIndex_m9541 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::set_NewPlayerGuideIndex(System.Int32)
 void MenuBarLogic_set_NewPlayerGuideIndex_m9542 (MenuBarLogic_t1544 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MenuBarLogic::get_Fold()
 bool MenuBarLogic_get_Fold_m9543 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::set_Fold(System.Boolean)
 void MenuBarLogic_set_Fold_m9544 (MenuBarLogic_t1544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::Awake()
 void MenuBarLogic_Awake_m9545 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::Start()
 void MenuBarLogic_Start_m9546 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::Update()
 void MenuBarLogic_Update_m9547 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnEnable()
 void MenuBarLogic_OnEnable_m9548 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnDestroy()
 void MenuBarLogic_OnDestroy_m9549 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateScaleAni()
 void MenuBarLogic_UpdateScaleAni_m9550 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::PlayTween(System.Boolean)
 void MenuBarLogic_PlayTween_m9551 (MenuBarLogic_t1544 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::PlayScaleAni(System.Boolean)
 void MenuBarLogic_PlayScaleAni_m9552 (MenuBarLogic_t1544 * __this, bool ___bDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::ReturnTween()
 void MenuBarLogic_ReturnTween_m9553 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::AfterPlayTweenPosition()
 void MenuBarLogic_AfterPlayTweenPosition_m9554 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::ShowNewPlayerGuide()
 void MenuBarLogic_ShowNewPlayerGuide_m9555 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::NewPlayerGuide(System.Int32)
 void MenuBarLogic_NewPlayerGuide_m9556 (MenuBarLogic_t1544 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnNoticeClick()
 void MenuBarLogic_OnNoticeClick_m9557 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnBackPackClick()
 void MenuBarLogic_OnBackPackClick_m9558 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnFellowClick(UnityEngine.GameObject)
 void MenuBarLogic_OnFellowClick_m9559 (MenuBarLogic_t1544 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnSocialClick()
 void MenuBarLogic_OnSocialClick_m9560 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnSkillClick()
 void MenuBarLogic_OnSkillClick_m9561 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnBelleClick(UnityEngine.GameObject)
 void MenuBarLogic_OnBelleClick_m9562 (MenuBarLogic_t1544 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnStrenClick(UnityEngine.GameObject)
 void MenuBarLogic_OnStrenClick_m9563 (MenuBarLogic_t1544 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnConsignSaleClick()
 void MenuBarLogic_OnConsignSaleClick_m9564 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnMissionLogClick()
 void MenuBarLogic_OnMissionLogClick_m9565 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnRoleClick()
 void MenuBarLogic_OnRoleClick_m9566 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnSetupClick()
 void MenuBarLogic_OnSetupClick_m9567 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnBiographyClick()
 void MenuBarLogic_OnBiographyClick_m9568 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnRestaurantClick(UnityEngine.GameObject)
 void MenuBarLogic_OnRestaurantClick_m9569 (MenuBarLogic_t1544 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnGuildClick()
 void MenuBarLogic_OnGuildClick_m9570 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnSysShopClick()
 void MenuBarLogic_OnSysShopClick_m9571 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OpenFunction(System.Int32)
 void MenuBarLogic_OpenFunction_m9572 (MenuBarLogic_t1544 * __this, int32_t ___nType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::LevelUpButtonActive()
 void MenuBarLogic_LevelUpButtonActive_m9573 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::InitButtonActive()
 void MenuBarLogic_InitButtonActive_m9574 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MenuBarLogic::get_NewButtonEffectFlag()
 bool MenuBarLogic_get_NewButtonEffectFlag_m9575 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::set_NewButtonEffectFlag(System.Boolean)
 void MenuBarLogic_set_NewButtonEffectFlag_m9576 (MenuBarLogic_t1544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::StopNewButtonEffect()
 void MenuBarLogic_StopNewButtonEffect_m9577 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::PlayNewButtonEffect()
 void MenuBarLogic_PlayNewButtonEffect_m9578 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateBelleTip()
 void MenuBarLogic_UpdateBelleTip_m9579 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateRestaurantTips()
 void MenuBarLogic_UpdateRestaurantTips_m9580 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnLivingSkillClick()
 void MenuBarLogic_OnLivingSkillClick_m9581 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnVipClick()
 void MenuBarLogic_OnVipClick_m9582 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnQianKunDaiClick()
 void MenuBarLogic_OnQianKunDaiClick_m9583 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnSNSClick()
 void MenuBarLogic_OnSNSClick_m9584 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnRankClick()
 void MenuBarLogic_OnRankClick_m9585 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnShowRankWindow(System.Boolean,System.Object)
 void MenuBarLogic_OnShowRankWindow_m9586 (MenuBarLogic_t1544 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnClickXiake(UnityEngine.GameObject)
 void MenuBarLogic_OnClickXiake_m9587 (MenuBarLogic_t1544 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateGuildAndMasterReserveMember()
 void MenuBarLogic_UpdateGuildAndMasterReserveMember_m9588 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdatePartnerTip()
 void MenuBarLogic_UpdatePartnerTip_m9589 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateSkillTip()
 void MenuBarLogic_UpdateSkillTip_m9590 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::CloseWindow()
 void MenuBarLogic_CloseWindow_m9591 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnClickWing()
 void MenuBarLogic_OnClickWing_m9592 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnClickSuperWeapon()
 void MenuBarLogic_OnClickSuperWeapon_m9593 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::OnClickRide()
 void MenuBarLogic_OnClickRide_m9594 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateSystemCountTip()
 void MenuBarLogic_UpdateSystemCountTip_m9595 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateRoleCountTip()
 void MenuBarLogic_UpdateRoleCountTip_m9596 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MenuBarLogic::UpdateMountRemindPoint()
 void MenuBarLogic_UpdateMountRemindPoint_m9597 (MenuBarLogic_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
