#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RelationFriendWindow
struct RelationFriendWindow_t1658;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;
// PlayerListItemLogic
struct PlayerListItemLogic_t1660;
// System.String
struct String_t;

// System.Void RelationFriendWindow::.ctor()
 void RelationFriendWindow__ctor_m13731 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::.cctor()
 void RelationFriendWindow__cctor_m13732 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationFriendWindow RelationFriendWindow::Instance()
 RelationFriendWindow_t1658 * RelationFriendWindow_Instance_m13733 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::Awake()
 void RelationFriendWindow_Awake_m13734 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnEnable()
 void RelationFriendWindow_OnEnable_m13735 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnDisable()
 void RelationFriendWindow_OnDisable_m13736 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnDestroy()
 void RelationFriendWindow_OnDestroy_m13737 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::UpdateData()
 void RelationFriendWindow_UpdateData_m13738 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::UpdateFriendListData()
 void RelationFriendWindow_UpdateFriendListData_m13739 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnLoadFriendItem(UnityEngine.GameObject,System.Object)
 void RelationFriendWindow_OnLoadFriendItem_m13740 (RelationFriendWindow_t1658 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::UpdateBlackList()
 void RelationFriendWindow_UpdateBlackList_m13741 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnLoadBlackItem(UnityEngine.GameObject,System.Object)
 void RelationFriendWindow_OnLoadBlackItem_m13742 (RelationFriendWindow_t1658 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::UpdateHateList()
 void RelationFriendWindow_UpdateHateList_m13743 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnLoadHateItem(UnityEngine.GameObject,System.Object)
 void RelationFriendWindow_OnLoadHateItem_m13744 (RelationFriendWindow_t1658 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnTabChanged(TabButton)
 void RelationFriendWindow_OnTabChanged_m13745 (RelationFriendWindow_t1658 * __this, TabButton_t1210 * ___curButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::ReqUpdateFriendUserInfo()
 void RelationFriendWindow_ReqUpdateFriendUserInfo_m13746 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::ReqUpdateBlackUserInfo()
 void RelationFriendWindow_ReqUpdateBlackUserInfo_m13747 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::ReqUpdateHateUserInfo()
 void RelationFriendWindow_ReqUpdateHateUserInfo_m13748 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnClickPlayerListItem(PlayerListItemLogic)
 void RelationFriendWindow_OnClickPlayerListItem_m13749 (RelationFriendWindow_t1658 * __this, PlayerListItemLogic_t1660 * ___selectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::SelectPlayerListItem(PlayerListItemLogic)
 void RelationFriendWindow_SelectPlayerListItem_m13750 (RelationFriendWindow_t1658 * __this, PlayerListItemLogic_t1660 * ___selectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::HandleRetTrail(System.Int32,System.Int32,System.Int32,System.Int32)
 void RelationFriendWindow_HandleRetTrail_m13751 (RelationFriendWindow_t1658 * __this, int32_t ___nSceneClass, int32_t ___nSceneInst, int32_t ___nPosX, int32_t ___nPosZ, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::TrailOK()
 void RelationFriendWindow_TrailOK_m13752 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::TrailCancel()
 void RelationFriendWindow_TrailCancel_m13753 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::ShowFrinedNum(System.Boolean)
 void RelationFriendWindow_ShowFrinedNum_m13754 (RelationFriendWindow_t1658 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnClickShareFB()
 void RelationFriendWindow_OnClickShareFB_m13755 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::_initCablePlayerList()
 void RelationFriendWindow__initCablePlayerList_m13756 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::showOtherWin(System.UInt64,System.String)
 void RelationFriendWindow_showOtherWin_m13757 (RelationFriendWindow_t1658 * __this, uint64_t ___guid, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::hideOtherWindows()
 void RelationFriendWindow_hideOtherWindows_m13758 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onFlower()
 void RelationFriendWindow_onFlower_m13759 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onEgg()
 void RelationFriendWindow_onEgg_m13760 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onDeleteFriend()
 void RelationFriendWindow_onDeleteFriend_m13761 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::DelFriendNO()
 void RelationFriendWindow_DelFriendNO_m13762 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::DelFriendOK()
 void RelationFriendWindow_DelFriendOK_m13763 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onSecretChat()
 void RelationFriendWindow_onSecretChat_m13764 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::ShowChatInfoRootOver(System.Boolean,System.Object)
 void RelationFriendWindow_ShowChatInfoRootOver_m13765 (RelationFriendWindow_t1658 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onShowOtherPlayer()
 void RelationFriendWindow_onShowOtherPlayer_m13766 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::showFriendStr(System.Int32)
 void RelationFriendWindow_showFriendStr_m13767 (RelationFriendWindow_t1658 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onCancelDeletLotHate()
 void RelationFriendWindow_onCancelDeletLotHate_m13768 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onDeleteLotHate()
 void RelationFriendWindow_onDeleteLotHate_m13769 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::_clearDelHateList()
 void RelationFriendWindow__clearDelHateList_m13770 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::_resetHateBtnNum()
 void RelationFriendWindow__resetHateBtnNum_m13771 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::recordHateFriendGuid(System.UInt64)
 void RelationFriendWindow_recordHateFriendGuid_m13772 (RelationFriendWindow_t1658 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::removeDelHateGuid(System.UInt64)
 void RelationFriendWindow_removeDelHateGuid_m13773 (RelationFriendWindow_t1658 * __this, uint64_t ___guid1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::OnClickRelationDel()
 void RelationFriendWindow_OnClickRelationDel_m13774 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::DelHateOK()
 void RelationFriendWindow_DelHateOK_m13775 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::DelHateNO()
 void RelationFriendWindow_DelHateNO_m13776 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::onClickFriendWin()
 void RelationFriendWindow_onClickFriendWin_m13777 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::showFindFriendWin()
 void RelationFriendWindow_showFindFriendWin_m13778 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationFriendWindow::hideFindFriendWin()
 void RelationFriendWindow_hideFindFriendWin_m13779 (RelationFriendWindow_t1658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
