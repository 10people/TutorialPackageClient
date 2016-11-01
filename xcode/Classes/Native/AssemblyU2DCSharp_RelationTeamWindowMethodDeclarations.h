#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RelationTeamWindow
struct RelationTeamWindow_t1659;
// TabButton
struct TabButton_t1210;
// TeamMember
struct TeamMember_t1543;
// GC_NEAR_TEAMLIST
struct GC_NEAR_TEAMLIST_t2041;
// GC_NEAR_PLAYERLIST
struct GC_NEAR_PLAYERLIST_t2042;
// PlayerListItemLogic
struct PlayerListItemLogic_t1660;
// RelationTeamWindow/TeamTab
#include "AssemblyU2DCSharp_RelationTeamWindow_TeamTab.h"

// System.Void RelationTeamWindow::.ctor()
 void RelationTeamWindow__ctor_m13780 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::.cctor()
 void RelationTeamWindow__cctor_m13781 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationTeamWindow RelationTeamWindow::Instance()
 RelationTeamWindow_t1659 * RelationTeamWindow_Instance_m13782 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::Awake()
 void RelationTeamWindow_Awake_m13783 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::Start()
 void RelationTeamWindow_Start_m13784 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnEnable()
 void RelationTeamWindow_OnEnable_m13785 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnDisable()
 void RelationTeamWindow_OnDisable_m13786 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ChangeTeamTab(RelationTeamWindow/TeamTab)
 void RelationTeamWindow_ChangeTeamTab_m13787 (RelationTeamWindow_t1659 * __this, int32_t ___Tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnTabChanged(TabButton)
 void RelationTeamWindow_OnTabChanged_m13788 (RelationTeamWindow_t1659 * __this, TabButton_t1210 * ___curButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnTeamInfoUpdate()
 void RelationTeamWindow_OnTeamInfoUpdate_m13789 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::UpdateTeamInfo(System.UInt64)
 void RelationTeamWindow_UpdateTeamInfo_m13790 (RelationTeamWindow_t1659 * __this, uint64_t ___oLastSelectMemberGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ShowTeamInfoContent(System.UInt64)
 void RelationTeamWindow_ShowTeamInfoContent_m13791 (RelationTeamWindow_t1659 * __this, uint64_t ___oLastSelectMemberGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ShowTeamMemberListMenu(System.UInt64,System.Int32)
 void RelationTeamWindow_ShowTeamMemberListMenu_m13792 (RelationTeamWindow_t1659 * __this, uint64_t ___guid, int32_t ___teamindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::CloseTeamMemberListMenu()
 void RelationTeamWindow_CloseTeamMemberListMenu_m13793 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnTeamMemberItemClick(TeamMember)
 void RelationTeamWindow_OnTeamMemberItemClick_m13794 (RelationTeamWindow_t1659 * __this, TeamMember_t1543 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::UpdateTeamMemberModel(TeamMember)
 void RelationTeamWindow_UpdateTeamMemberModel_m13795 (RelationTeamWindow_t1659 * __this, TeamMember_t1543 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::DestroyPartnerFakeObj()
 void RelationTeamWindow_DestroyPartnerFakeObj_m13796 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::UpdateNearbyTeam(GC_NEAR_TEAMLIST)
 void RelationTeamWindow_UpdateNearbyTeam_m13797 (RelationTeamWindow_t1659 * __this, GC_NEAR_TEAMLIST_t2041 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ShowNearByPlayerContent(GC_NEAR_TEAMLIST)
 void RelationTeamWindow_ShowNearByPlayerContent_m13798 (RelationTeamWindow_t1659 * __this, GC_NEAR_TEAMLIST_t2041 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::UpdateNearbyPlayer(GC_NEAR_PLAYERLIST)
 void RelationTeamWindow_UpdateNearbyPlayer_m13799 (RelationTeamWindow_t1659 * __this, GC_NEAR_PLAYERLIST_t2042 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ShowNearByPlayerContent(GC_NEAR_PLAYERLIST)
 void RelationTeamWindow_ShowNearByPlayerContent_m13800 (RelationTeamWindow_t1659 * __this, GC_NEAR_PLAYERLIST_t2042 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::dealWithTeamMemberSortSprites()
 void RelationTeamWindow_dealWithTeamMemberSortSprites_m13801 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::dealWithAroundPlayerSortSprites()
 void RelationTeamWindow_dealWithAroundPlayerSortSprites_m13802 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::dealWithAroundTeamSortSprites()
 void RelationTeamWindow_dealWithAroundTeamSortSprites_m13803 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickLevelSort()
 void RelationTeamWindow_OnClickLevelSort_m13804 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickCombatSort()
 void RelationTeamWindow_OnClickCombatSort_m13805 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickTeamCombatSort()
 void RelationTeamWindow_OnClickTeamCombatSort_m13806 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::SortItems()
 void RelationTeamWindow_SortItems_m13807 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ReqNearbyPlayer()
 void RelationTeamWindow_ReqNearbyPlayer_m13808 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::ReqNearbyTeam()
 void RelationTeamWindow_ReqNearbyTeam_m13809 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickCreateTeam()
 void RelationTeamWindow_OnClickCreateTeam_m13810 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickPlayerListItem(PlayerListItemLogic)
 void RelationTeamWindow_OnClickPlayerListItem_m13811 (RelationTeamWindow_t1659 * __this, PlayerListItemLogic_t1660 * ___selectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::SelectPlayerListItem(PlayerListItemLogic)
 void RelationTeamWindow_SelectPlayerListItem_m13812 (RelationTeamWindow_t1659 * __this, PlayerListItemLogic_t1660 * ___selectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::UpdateTeamMemberScenePos(System.Int32)
 void RelationTeamWindow_UpdateTeamMemberScenePos_m13813 (RelationTeamWindow_t1659 * __this, int32_t ___nTeamMemberPosIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnGatherTeam()
 void RelationTeamWindow_OnGatherTeam_m13814 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnTeamFollow()
 void RelationTeamWindow_OnTeamFollow_m13815 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationTeamWindow::OnClickDismissTeamBtn()
 void RelationTeamWindow_OnClickDismissTeamBtn_m13816 (RelationTeamWindow_t1659 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
