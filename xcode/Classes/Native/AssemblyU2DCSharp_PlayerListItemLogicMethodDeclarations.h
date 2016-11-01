#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerListItemLogic
struct PlayerListItemLogic_t1660;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// RelationFriendWindow
struct RelationFriendWindow_t1658;
// RelationTeamWindow
struct RelationTeamWindow_t1659;
// System.Object
struct Object_t;
// TeamMember
struct TeamMember_t1543;
// NearbyPlayer
struct NearbyPlayer_t1211;
// NearbyTeam
struct NearbyTeam_t1213;
// Relation
struct Relation_t1442;
// PlayerListItemLogic/PlayerListItemType
#include "AssemblyU2DCSharp_PlayerListItemLogic_PlayerListItemType.h"

// System.Void PlayerListItemLogic::.ctor()
 void PlayerListItemLogic__ctor_m10605 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::.cctor()
 void PlayerListItemLogic__cctor_m10606 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerListItemLogic::get_TeamID()
 int32_t PlayerListItemLogic_get_TeamID_m10607 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerListItemLogic::get_TeamPosIndex()
 int32_t PlayerListItemLogic_get_TeamPosIndex_m10608 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerListItemLogic::get_GUID()
 uint64_t PlayerListItemLogic_get_GUID_m10609 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerListItemLogic/PlayerListItemType PlayerListItemLogic::get_ItemType()
 int32_t PlayerListItemLogic_get_ItemType_m10610 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::set_ItemType(PlayerListItemLogic/PlayerListItemType)
 void PlayerListItemLogic_set_ItemType_m10611 (PlayerListItemLogic_t1660 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerListItemLogic PlayerListItemLogic::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,RelationFriendWindow)
 PlayerListItemLogic_t1660 * PlayerListItemLogic_CreateItem_m10612 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, RelationFriendWindow_t1658 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerListItemLogic PlayerListItemLogic::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,RelationTeamWindow)
 PlayerListItemLogic_t1660 * PlayerListItemLogic_CreateItem_m10613 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, RelationTeamWindow_t1659 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetParent(RelationFriendWindow)
 void PlayerListItemLogic_SetParent_m10614 (PlayerListItemLogic_t1660 * __this, RelationFriendWindow_t1658 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetParent(RelationTeamWindow)
 void PlayerListItemLogic_SetParent_m10615 (PlayerListItemLogic_t1660 * __this, RelationTeamWindow_t1659 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::HideAllUI()
 void PlayerListItemLogic_HideAllUI_m10616 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickLeaderBtn()
 void PlayerListItemLogic_OnClickLeaderBtn_m10617 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickFollowLeaderBtn()
 void PlayerListItemLogic_OnClickFollowLeaderBtn_m10618 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickKickBtn()
 void PlayerListItemLogic_OnClickKickBtn_m10619 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickLeaveBtn()
 void PlayerListItemLogic_OnClickLeaveBtn_m10620 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickDismissTeamBtn()
 void PlayerListItemLogic_OnClickDismissTeamBtn_m10621 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickInviteBtn()
 void PlayerListItemLogic_OnClickInviteBtn_m10622 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickJoinBtn()
 void PlayerListItemLogic_OnClickJoinBtn_m10623 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickRelationChat()
 void PlayerListItemLogic_OnClickRelationChat_m10624 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void PlayerListItemLogic_ShowChatInfoRootOver_m10625 (PlayerListItemLogic_t1660 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickRelationView()
 void PlayerListItemLogic_OnClickRelationView_m10626 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickRelationTeam()
 void PlayerListItemLogic_OnClickRelationTeam_m10627 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickRelationDel()
 void PlayerListItemLogic_OnClickRelationDel_m10628 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickAddFriendBtn()
 void PlayerListItemLogic_OnClickAddFriendBtn_m10629 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfo(TeamMember,System.Int32)
 void PlayerListItemLogic_InitPlayerListItemInfo_m10630 (PlayerListItemLogic_t1660 * __this, TeamMember_t1543 * ___member, int32_t ___nTeamPosIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfo(NearbyPlayer)
 void PlayerListItemLogic_InitPlayerListItemInfo_m10631 (PlayerListItemLogic_t1660 * __this, NearbyPlayer_t1211 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfo(NearbyTeam)
 void PlayerListItemLogic_InitPlayerListItemInfo_m10632 (PlayerListItemLogic_t1660 * __this, NearbyTeam_t1213 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfoFriend(Relation)
 void PlayerListItemLogic_InitPlayerListItemInfoFriend_m10633 (PlayerListItemLogic_t1660 * __this, Relation_t1442 * ___relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfoBlack(Relation)
 void PlayerListItemLogic_InitPlayerListItemInfoBlack_m10634 (PlayerListItemLogic_t1660 * __this, Relation_t1442 * ___relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::InitPlayerListItemInfoHate(Relation)
 void PlayerListItemLogic_InitPlayerListItemInfoHate_m10635 (PlayerListItemLogic_t1660 * __this, Relation_t1442 * ___relation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetTeamJob(System.Int32)
 void PlayerListItemLogic_SetTeamJob_m10636 (PlayerListItemLogic_t1660 * __this, int32_t ___nJob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetPro(System.Int32)
 void PlayerListItemLogic_SetPro_m10637 (PlayerListItemLogic_t1660 * __this, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetHeadPic(System.Int32)
 void PlayerListItemLogic_SetHeadPic_m10638 (PlayerListItemLogic_t1660 * __this, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetName(System.String)
 void PlayerListItemLogic_SetName_m10639 (PlayerListItemLogic_t1660 * __this, String_t* ___szName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetLevel(System.Int32)
 void PlayerListItemLogic_SetLevel_m10640 (PlayerListItemLogic_t1660 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetCombatNum(System.Int32)
 void PlayerListItemLogic_SetCombatNum_m10641 (PlayerListItemLogic_t1660 * __this, int32_t ___nCombatNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::SetState(System.Int32)
 void PlayerListItemLogic_SetState_m10642 (PlayerListItemLogic_t1660 * __this, int32_t ___nState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnClickPlayerListItem()
 void PlayerListItemLogic_OnClickPlayerListItem_m10643 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnSelectItem()
 void PlayerListItemLogic_OnSelectItem_m10644 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::OnCancelSelectItem()
 void PlayerListItemLogic_OnCancelSelectItem_m10645 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::onDelete()
 void PlayerListItemLogic_onDelete_m10646 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::DelFriendOK()
 void PlayerListItemLogic_DelFriendOK_m10647 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::DelFriendNO()
 void PlayerListItemLogic_DelFriendNO_m10648 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::toggltDelGuid()
 void PlayerListItemLogic_toggltDelGuid_m10649 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::onFellow()
 void PlayerListItemLogic_onFellow_m10650 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::onTher()
 void PlayerListItemLogic_onTher_m10651 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::_hideAllUIBtn()
 void PlayerListItemLogic__hideAllUIBtn_m10652 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::_showBtnByType()
 void PlayerListItemLogic__showBtnByType_m10653 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::showDeleteAllToggleBtn()
 void PlayerListItemLogic_showDeleteAllToggleBtn_m10654 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::hideDeleteAllToggleBtn()
 void PlayerListItemLogic_hideDeleteAllToggleBtn_m10655 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::onChatPrivate()
 void PlayerListItemLogic_onChatPrivate_m10656 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerListItemLogic::onQuesTeam()
 void PlayerListItemLogic_onQuesTeam_m10657 (PlayerListItemLogic_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
