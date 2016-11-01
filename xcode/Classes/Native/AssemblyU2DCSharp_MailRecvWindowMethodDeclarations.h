#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MailRecvWindow
struct MailRecvWindow_t1899;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// MailListItem
struct MailListItem_t1900;
// MailData/UserMail
struct UserMail_t1901;
// RewardItem
struct RewardItem_t1842;
// MailData/MailUpdateType
#include "AssemblyU2DCSharp_MailData_MailUpdateType.h"

// System.Void MailRecvWindow::.ctor()
 void MailRecvWindow__ctor_m13412 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::.cctor()
 void MailRecvWindow__cctor_m13413 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::Awake()
 void MailRecvWindow_Awake_m13414 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::Start()
 void MailRecvWindow_Start_m13415 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnEnable()
 void MailRecvWindow_OnEnable_m13416 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnDisable()
 void MailRecvWindow_OnDisable_m13417 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::Update()
 void MailRecvWindow_Update_m13418 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickDelCur()
 void MailRecvWindow_OnClickDelCur_m13419 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::DoDeleteCurMail()
 void MailRecvWindow_DoDeleteCurMail_m13420 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickDelAll()
 void MailRecvWindow_OnClickDelAll_m13421 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::TryDeleteAll()
 void MailRecvWindow_TryDeleteAll_m13422 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::DoDeleteAll()
 void MailRecvWindow_DoDeleteAll_m13423 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickGetCur()
 void MailRecvWindow_OnClickGetCur_m13424 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickGetAll()
 void MailRecvWindow_OnClickGetAll_m13425 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickReply()
 void MailRecvWindow_OnClickReply_m13426 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::InitItems()
 void MailRecvWindow_InitItems_m13427 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnLoadItem(UnityEngine.GameObject,System.Object)
 void MailRecvWindow_OnLoadItem_m13428 (MailRecvWindow_t1899 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::UpdateMailData(MailData/MailUpdateType,System.UInt64)
 void MailRecvWindow_UpdateMailData_m13429 (MailRecvWindow_t1899 * __this, int32_t ___curUpdateType, uint64_t ___curKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::UpdateMailItems()
 void MailRecvWindow_UpdateMailItems_m13430 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::ShowMailItem(MailListItem)
 void MailRecvWindow_ShowMailItem_m13431 (MailRecvWindow_t1899 * __this, MailListItem_t1900 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MailData/UserMail MailRecvWindow::GetMailByItem(MailListItem)
 UserMail_t1901 * MailRecvWindow_GetMailByItem_m13432 (MailRecvWindow_t1899 * __this, MailListItem_t1900 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnRewardItemClick(RewardItem)
 void MailRecvWindow_OnRewardItemClick_m13433 (MailRecvWindow_t1899 * __this, RewardItem_t1842 * ___curItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnClickReport()
 void MailRecvWindow_OnClickReport_m13434 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnReportOK()
 void MailRecvWindow_OnReportOK_m13435 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailRecvWindow::OnReportCancel()
 void MailRecvWindow_OnReportCancel_m13436 (MailRecvWindow_t1899 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
