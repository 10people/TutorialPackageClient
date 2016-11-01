#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MissionDialogAndLeftTabsLogic
struct MissionDialogAndLeftTabsLogic_t1572;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;

// System.Void MissionDialogAndLeftTabsLogic::.ctor()
 void MissionDialogAndLeftTabsLogic__ctor_m9699 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::.cctor()
 void MissionDialogAndLeftTabsLogic__cctor_m9700 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MissionDialogAndLeftTabsLogic MissionDialogAndLeftTabsLogic::Instance()
 MissionDialogAndLeftTabsLogic_t1572 * MissionDialogAndLeftTabsLogic_Instance_m9701 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::Awake()
 void MissionDialogAndLeftTabsLogic_Awake_m9702 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OnDisable()
 void MissionDialogAndLeftTabsLogic_OnDisable_m9703 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::Start()
 void MissionDialogAndLeftTabsLogic_Start_m9704 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OnDestroy()
 void MissionDialogAndLeftTabsLogic_OnDestroy_m9705 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::TabOnClick(TabButton)
 void MissionDialogAndLeftTabsLogic_TabOnClick_m9706 (MissionDialogAndLeftTabsLogic_t1572 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::InitMissionFollow()
 void MissionDialogAndLeftTabsLogic_InitMissionFollow_m9707 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OnLoadMissionItem(UnityEngine.GameObject,System.Object)
 void MissionDialogAndLeftTabsLogic_OnLoadMissionItem_m9708 (MissionDialogAndLeftTabsLogic_t1572 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::ClearUpMissionFollow()
 void MissionDialogAndLeftTabsLogic_ClearUpMissionFollow_m9709 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MissionDialogAndLeftTabsLogic::GetColorByQuality(System.Byte)
 String_t* MissionDialogAndLeftTabsLogic_GetColorByQuality_m9710 (Object_t * __this/* static, unused */, uint8_t ___yQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MissionDialogAndLeftTabsLogic::AddMissionItem(System.Int32,UnityEngine.GameObject)
 bool MissionDialogAndLeftTabsLogic_AddMissionItem_m9711 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nMissionID, GameObject_t9 * ___resItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MissionDialogAndLeftTabsLogic::DelMissionItem(System.Int32)
 bool MissionDialogAndLeftTabsLogic_DelMissionItem_m9712 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MissionDialogAndLeftTabsLogic::UpdateMissionItem(System.Int32)
 bool MissionDialogAndLeftTabsLogic_UpdateMissionItem_m9713 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::UpDateMissionFollow(System.Int32,System.String)
 void MissionDialogAndLeftTabsLogic_UpDateMissionFollow_m9714 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nMissionID, String_t* ___strOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OnUpDateMissionFollowLoadItem(UnityEngine.GameObject,System.Object)
 void MissionDialogAndLeftTabsLogic_OnUpDateMissionFollowLoadItem_m9715 (MissionDialogAndLeftTabsLogic_t1572 * __this, GameObject_t9 * ___resItem, Object_t * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::ShowNewPlayerGuide(System.Int32)
 void MissionDialogAndLeftTabsLogic_ShowNewPlayerGuide_m9716 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::PlayTween(System.Boolean)
 void MissionDialogAndLeftTabsLogic_PlayTween_m9717 (MissionDialogAndLeftTabsLogic_t1572 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::SwitchToTeam()
 void MissionDialogAndLeftTabsLogic_SwitchToTeam_m9718 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::SwitchToMission()
 void MissionDialogAndLeftTabsLogic_SwitchToMission_m9719 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::UpdateMissionFollowBlink(System.Int32,System.Boolean)
 void MissionDialogAndLeftTabsLogic_UpdateMissionFollowBlink_m9720 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nIndex, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::AfterClickPlayerFrame()
 void MissionDialogAndLeftTabsLogic_AfterClickPlayerFrame_m9721 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::CloseMissionInfoRoot()
 void MissionDialogAndLeftTabsLogic_CloseMissionInfoRoot_m9722 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::AfterTabsControlButtonClicked()
 void MissionDialogAndLeftTabsLogic_AfterTabsControlButtonClicked_m9723 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::InitLeftTabControl(System.Int32)
 void MissionDialogAndLeftTabsLogic_InitLeftTabControl_m9724 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___nControl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::LeftControlClick()
 void MissionDialogAndLeftTabsLogic_LeftControlClick_m9725 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OpenTeamWindow()
 void MissionDialogAndLeftTabsLogic_OpenTeamWindow_m9726 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::UpdateTeamInfo()
 void MissionDialogAndLeftTabsLogic_UpdateTeamInfo_m9727 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::LeaveTeamOnClick()
 void MissionDialogAndLeftTabsLogic_LeaveTeamOnClick_m9728 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::LeaveTeamOK()
 void MissionDialogAndLeftTabsLogic_LeaveTeamOK_m9729 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::HandleSyncTeamInfo()
 void MissionDialogAndLeftTabsLogic_HandleSyncTeamInfo_m9730 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::InitMissionItemList(System.Collections.Generic.List`1<System.Int32>,UnityEngine.GameObject)
 void MissionDialogAndLeftTabsLogic_InitMissionItemList_m9731 (MissionDialogAndLeftTabsLogic_t1572 * __this, List_1_t90 * ___nMissionSortList, GameObject_t9 * ___resItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::UpDateMissionSortLst()
 void MissionDialogAndLeftTabsLogic_UpDateMissionSortLst_m9732 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::InitMissionScrollViewPos()
 void MissionDialogAndLeftTabsLogic_InitMissionScrollViewPos_m9733 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::DoRepotionLater()
 void MissionDialogAndLeftTabsLogic_DoRepotionLater_m9734 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::DoRepositionForce()
 void MissionDialogAndLeftTabsLogic_DoRepositionForce_m9735 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::UpdateButtonTeamFollow()
 void MissionDialogAndLeftTabsLogic_UpdateButtonTeamFollow_m9736 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::OnTeamFollow()
 void MissionDialogAndLeftTabsLogic_OnTeamFollow_m9737 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::SetPaoHuanAwardItemID()
 void MissionDialogAndLeftTabsLogic_SetPaoHuanAwardItemID_m9738 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::SortMissionItem()
 void MissionDialogAndLeftTabsLogic_SortMissionItem_m9739 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionDialogAndLeftTabsLogic::SetVictorNewGuild(System.Int32)
 void MissionDialogAndLeftTabsLogic_SetVictorNewGuild_m9740 (MissionDialogAndLeftTabsLogic_t1572 * __this, int32_t ___missionId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MissionDialogAndLeftTabsLogic::GetVictorNewGuild()
 bool MissionDialogAndLeftTabsLogic_GetVictorNewGuild_m9741 (MissionDialogAndLeftTabsLogic_t1572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
