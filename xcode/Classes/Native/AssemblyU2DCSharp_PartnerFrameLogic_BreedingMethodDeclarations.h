#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PartnerFrameLogic_Breeding
struct PartnerFrameLogic_Breeding_t1630;
// System.Collections.Generic.List`1<Games.Fellow.Fellow>
struct List_1_t1633;
// Games.Fellow.Fellow
struct Fellow_t1174;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void PartnerFrameLogic_Breeding::.ctor()
 void PartnerFrameLogic_Breeding__ctor_m10298 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::.cctor()
 void PartnerFrameLogic_Breeding__cctor_m10299 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PartnerFrameLogic_Breeding PartnerFrameLogic_Breeding::Instance()
 PartnerFrameLogic_Breeding_t1630 * PartnerFrameLogic_Breeding_Instance_m10300 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PartnerFrameLogic_Breeding::get_LockBreeding()
 bool PartnerFrameLogic_Breeding_get_LockBreeding_m10301 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::set_LockBreeding(System.Boolean)
 void PartnerFrameLogic_Breeding_set_LockBreeding_m10302 (PartnerFrameLogic_Breeding_t1630 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::Start()
 void PartnerFrameLogic_Breeding_Start_m10303 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnEnable()
 void PartnerFrameLogic_Breeding_OnEnable_m10304 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnDisable()
 void PartnerFrameLogic_Breeding_OnDisable_m10305 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateFellowInfo_Button()
 void PartnerFrameLogic_Breeding_UpdateFellowInfo_Button_m10306 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateFellowInfo_Window(System.Boolean)
 void PartnerFrameLogic_Breeding_UpdateFellowInfo_Window_m10307 (PartnerFrameLogic_Breeding_t1630 * __this, bool ___updatemodel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateRemainTime()
 void PartnerFrameLogic_Breeding_UpdateRemainTime_m10308 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnChoosePartnerClick()
 void PartnerFrameLogic_Breeding_OnChoosePartnerClick_m10309 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::ShowChooseBabyFellow(System.Collections.Generic.List`1<Games.Fellow.Fellow>)
 void PartnerFrameLogic_Breeding_ShowChooseBabyFellow_m10310 (PartnerFrameLogic_Breeding_t1630 * __this, List_1_t1633 * ___babylist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateChooseFellowInfo(System.Boolean)
 void PartnerFrameLogic_Breeding_UpdateChooseFellowInfo_m10311 (PartnerFrameLogic_Breeding_t1630 * __this, bool ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPartnerChooseMinusClick()
 void PartnerFrameLogic_Breeding_OnPartnerChooseMinusClick_m10312 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPartnerChooseAddClick()
 void PartnerFrameLogic_Breeding_OnPartnerChooseAddClick_m10313 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPartnerChooseOKClick(Games.Fellow.Fellow)
 void PartnerFrameLogic_Breeding_OnPartnerChooseOKClick_m10314 (PartnerFrameLogic_Breeding_t1630 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPartnerChooseCancelClick()
 void PartnerFrameLogic_Breeding_OnPartnerChooseCancelClick_m10315 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateChooseFellowModel(System.Int32)
 void PartnerFrameLogic_Breeding_UpdateChooseFellowModel_m10316 (PartnerFrameLogic_Breeding_t1630 * __this, int32_t ___nChooseDataId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::DestroyPartnerFakeObj()
 void PartnerFrameLogic_Breeding_DestroyPartnerFakeObj_m10317 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnLockBreedingClick()
 void PartnerFrameLogic_Breeding_OnLockBreedingClick_m10318 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnUnLockBreedingClick()
 void PartnerFrameLogic_Breeding_OnUnLockBreedingClick_m10319 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnCancelBreedingClick()
 void PartnerFrameLogic_Breeding_OnCancelBreedingClick_m10320 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnBreedingRuleClick()
 void PartnerFrameLogic_Breeding_OnBreedingRuleClick_m10321 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::HideRuleDialog(UnityEngine.GameObject)
 void PartnerFrameLogic_Breeding_HideRuleDialog_m10322 (PartnerFrameLogic_Breeding_t1630 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::HandleFellowBreedingLock()
 void PartnerFrameLogic_Breeding_HandleFellowBreedingLock_m10323 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateBeginBreedingButtonShow()
 void PartnerFrameLogic_Breeding_UpdateBeginBreedingButtonShow_m10324 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::HandleFellowBreedingUnLock()
 void PartnerFrameLogic_Breeding_HandleFellowBreedingUnLock_m10325 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::HandleFellowFriendBreeding()
 void PartnerFrameLogic_Breeding_HandleFellowFriendBreeding_m10326 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::UpdateFriendFellowModel()
 void PartnerFrameLogic_Breeding_UpdateFriendFellowModel_m10327 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::DestroyFriendPartnerFakeObj()
 void PartnerFrameLogic_Breeding_DestroyFriendPartnerFakeObj_m10328 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnBeginBreedingClick()
 void PartnerFrameLogic_Breeding_OnBeginBreedingClick_m10329 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnSpeedBreedingClick()
 void PartnerFrameLogic_Breeding_OnSpeedBreedingClick_m10330 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::SpeedBreedingOK()
 void PartnerFrameLogic_Breeding_SpeedBreedingOK_m10331 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnReceiveBreedingClick()
 void PartnerFrameLogic_Breeding_OnReceiveBreedingClick_m10332 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnLookForFriendClick()
 void PartnerFrameLogic_Breeding_OnLookForFriendClick_m10333 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::LookingForMatching(UnityEngine.GameObject)
 void PartnerFrameLogic_Breeding_LookingForMatching_m10334 (PartnerFrameLogic_Breeding_t1630 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::CancelSearching(UnityEngine.GameObject)
 void PartnerFrameLogic_Breeding_CancelSearching_m10335 (PartnerFrameLogic_Breeding_t1630 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPlayerFellowPress()
 void PartnerFrameLogic_Breeding_OnPlayerFellowPress_m10336 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnPlayerFellowRelease()
 void PartnerFrameLogic_Breeding_OnPlayerFellowRelease_m10337 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnFriendFellowPress()
 void PartnerFrameLogic_Breeding_OnFriendFellowPress_m10338 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Breeding::OnFriendFellowRelease()
 void PartnerFrameLogic_Breeding_OnFriendFellowRelease_m10339 (PartnerFrameLogic_Breeding_t1630 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
