#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MasterWindow
struct MasterWindow_t2021;
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

// System.Void MasterWindow::.ctor()
 void MasterWindow__ctor_m13483 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::.cctor()
 void MasterWindow__cctor_m13484 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MasterWindow::GetMasterRemainNum()
 int32_t MasterWindow_GetMasterRemainNum_m13485 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MasterWindow MasterWindow::Instance()
 MasterWindow_t2021 * MasterWindow_Instance_m13486 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::Awake()
 void MasterWindow_Awake_m13487 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::Start()
 void MasterWindow_Start_m13488 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnDestroy()
 void MasterWindow_OnDestroy_m13489 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnEnable()
 void MasterWindow_OnEnable_m13490 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnDisable()
 void MasterWindow_OnDisable_m13491 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowTab()
 void MasterWindow_ShowTab_m13492 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::UpdateData()
 void MasterWindow_UpdateData_m13493 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnTabChanged(TabButton)
 void MasterWindow_OnTabChanged_m13494 (MasterWindow_t2021 * __this, TabButton_t1210 * ___tableButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::LoadMasterShopItemOver(UnityEngine.GameObject,System.Object)
 void MasterWindow_LoadMasterShopItemOver_m13495 (MasterWindow_t2021 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::UpdateQingYi()
 void MasterWindow_UpdateQingYi_m13496 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::UpdateMasterShopGoodsInfo()
 void MasterWindow_UpdateMasterShopGoodsInfo_m13497 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnSelectMemberChange(System.UInt64,System.String)
 void MasterWindow_OnSelectMemberChange_m13498 (MasterWindow_t2021 * __this, uint64_t ___selectGuid, String_t* ___selectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnSelectReserveMemberChange(System.UInt64,System.String)
 void MasterWindow_OnSelectReserveMemberChange_m13499 (MasterWindow_t2021 * __this, uint64_t ___selectGuid, String_t* ___selectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnSelectMasterChange(System.UInt64)
 void MasterWindow_OnSelectMasterChange_m13500 (MasterWindow_t2021 * __this, uint64_t ___selectGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowInfoTabPage()
 void MasterWindow_ShowInfoTabPage_m13501 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowSkillInfo()
 void MasterWindow_ShowSkillInfo_m13502 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MasterWindow::GetSameBaseSkill(System.Collections.Generic.List`1<System.Int32>,System.Int32)
 int32_t MasterWindow_GetSameBaseSkill_m13503 (MasterWindow_t2021 * __this, List_1_t90 * ___ownSkillList, int32_t ___skillid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowMemberTabPage()
 void MasterWindow_ShowMemberTabPage_m13504 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnLoadMasterMemberItem(UnityEngine.GameObject,System.Object)
 void MasterWindow_OnLoadMasterMemberItem_m13505 (MasterWindow_t2021 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowCheckTabPage()
 void MasterWindow_ShowCheckTabPage_m13506 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnLoadMasterReserveMemberItem(UnityEngine.GameObject,System.Object)
 void MasterWindow_OnLoadMasterReserveMemberItem_m13507 (MasterWindow_t2021 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowJoinTabPage()
 void MasterWindow_ShowJoinTabPage_m13508 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnLoadMasterPreviewItem(UnityEngine.GameObject,System.Object)
 void MasterWindow_OnLoadMasterPreviewItem_m13509 (MasterWindow_t2021 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowCreateTabPage()
 void MasterWindow_ShowCreateTabPage_m13510 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ClearInfoTabPage()
 void MasterWindow_ClearInfoTabPage_m13511 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickCreateMaster()
 void MasterWindow_OnClickCreateMaster_m13512 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickJoinMaster()
 void MasterWindow_OnClickJoinMaster_m13513 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::AgreeChangeJoinMasterRequest()
 void MasterWindow_AgreeChangeJoinMasterRequest_m13514 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickReserveApprove()
 void MasterWindow_OnClickReserveApprove_m13515 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickReserveRefuse()
 void MasterWindow_OnClickReserveRefuse_m13516 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickReserveApproveAll()
 void MasterWindow_OnClickReserveApproveAll_m13517 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickReserveRefuseAll()
 void MasterWindow_OnClickReserveRefuseAll_m13518 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickKickMember()
 void MasterWindow_OnClickKickMember_m13519 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickDissolve()
 void MasterWindow_OnClickDissolve_m13520 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ClickDissolveOK()
 void MasterWindow_ClickDissolveOK_m13521 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickLevel()
 void MasterWindow_OnClickLevel_m13522 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill1()
 void MasterWindow_OnClickSkill1_m13523 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill2()
 void MasterWindow_OnClickSkill2_m13524 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill3()
 void MasterWindow_OnClickSkill3_m13525 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill4()
 void MasterWindow_OnClickSkill4_m13526 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill5()
 void MasterWindow_OnClickSkill5_m13527 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill6()
 void MasterWindow_OnClickSkill6_m13528 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkill(System.Int32)
 void MasterWindow_OnClickSkill_m13529 (MasterWindow_t2021 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ClearSkillChoose()
 void MasterWindow_ClearSkillChoose_m13530 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkillLearn()
 void MasterWindow_OnClickSkillLearn_m13531 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkillForget()
 void MasterWindow_OnClickSkillForget_m13532 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkillActive()
 void MasterWindow_OnClickSkillActive_m13533 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkillActive_OK()
 void MasterWindow_OnClickSkillActive_OK_m13534 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickSkillActive_Cancel()
 void MasterWindow_OnClickSkillActive_Cancel_m13535 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickChat()
 void MasterWindow_OnClickChat_m13536 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowChatInfoRootOver(System.Boolean,System.Object)
 void MasterWindow_ShowChatInfoRootOver_m13537 (MasterWindow_t2021 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickChat_Reserve()
 void MasterWindow_OnClickChat_Reserve_m13538 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::ShowChatInfoRootOver_Reserve(System.Boolean,System.Object)
 void MasterWindow_ShowChatInfoRootOver_Reserve_m13539 (MasterWindow_t2021 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickFriend()
 void MasterWindow_OnClickFriend_m13540 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickInviteTeam()
 void MasterWindow_OnClickInviteTeam_m13541 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickApplyTeam()
 void MasterWindow_OnClickApplyTeam_m13542 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::OnClickChangeNotice()
 void MasterWindow_OnClickChangeNotice_m13543 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MasterWindow::UpdateMasterReserverRemain()
 void MasterWindow_UpdateMasterReserverRemain_m13544 (MasterWindow_t2021 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
