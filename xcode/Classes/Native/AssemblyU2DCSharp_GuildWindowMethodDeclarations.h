#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildWindow
struct GuildWindow_t1989;
// System.String
struct String_t;
// TabController
struct TabController_t1209;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;

// System.Void GuildWindow::.ctor()
 void GuildWindow__ctor_m13176 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::.cctor()
 void GuildWindow__cctor_m13177 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::set_GuildWealthBak(System.Int32)
 void GuildWindow_set_GuildWealthBak_m13178 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWindow::get_GuildWealthBak()
 int32_t GuildWindow_get_GuildWealthBak_m13179 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GuildWindow::get_SelectMemberGuid()
 uint64_t GuildWindow_get_SelectMemberGuid_m13180 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildWindow GuildWindow::Instance()
 GuildWindow_t1989 * GuildWindow_Instance_m13181 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GuildWindow::get_CurChallengeGuildGuid()
 uint64_t GuildWindow_get_CurChallengeGuildGuid_m13182 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::set_CurChallengeGuildGuid(System.UInt64)
 void GuildWindow_set_CurChallengeGuildGuid_m13183 (GuildWindow_t1989 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::SetStartTab(System.String)
 void GuildWindow_SetStartTab_m13184 (Object_t * __this/* static, unused */, String_t* ___tabName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::TestStartTab(TabController)
 void GuildWindow_TestStartTab_m13185 (Object_t * __this/* static, unused */, TabController_t1209 * ___curTabController, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::Awake()
 void GuildWindow_Awake_m13186 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::Start()
 void GuildWindow_Start_m13187 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnDestroy()
 void GuildWindow_OnDestroy_m13188 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdateData()
 void GuildWindow_UpdateData_m13189 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::AskForGuildShopMakeItemList()
 void GuildWindow_AskForGuildShopMakeItemList_m13190 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildAttrAddition(System.Int32)
 void GuildWindow_ShowGuildAttrAddition_m13191 (GuildWindow_t1989 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnTabChanged(TabButton)
 void GuildWindow_OnTabChanged_m13192 (GuildWindow_t1989 * __this, TabButton_t1210 * ___curButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildList()
 void GuildWindow_ShowGuildList_m13193 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnLoadGuildListItem(UnityEngine.GameObject,System.Object)
 void GuildWindow_OnLoadGuildListItem_m13194 (GuildWindow_t1989 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ClickAskChallangeWarBt()
 void GuildWindow_ClickAskChallangeWarBt_m13195 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::AgreeChallengeGuildWar()
 void GuildWindow_AgreeChallengeGuildWar_m13196 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ClickAskWildWarBt()
 void GuildWindow_ClickAskWildWarBt_m13197 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::AgreeWildGuildWar()
 void GuildWindow_AgreeWildGuildWar_m13198 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowChallengeRoot()
 void GuildWindow_ShowChallengeRoot_m13199 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::CloseChallengeRoot()
 void GuildWindow_CloseChallengeRoot_m13200 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ClearGuildInfo()
 void GuildWindow_ClearGuildInfo_m13201 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildInfo()
 void GuildWindow_ShowGuildInfo_m13202 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdateGuildNotice()
 void GuildWindow_UpdateGuildNotice_m13203 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildMemberList()
 void GuildWindow_ShowGuildMemberList_m13204 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnLoadGuildMemberItem(UnityEngine.GameObject,System.Int32)
 void GuildWindow_OnLoadGuildMemberItem_m13205 (GuildWindow_t1989 * __this, GameObject_t9 * ___resItem, int32_t ___nPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildReserveMemberList()
 void GuildWindow_ShowGuildReserveMemberList_m13206 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdateGuildDeclaration()
 void GuildWindow_UpdateGuildDeclaration_m13207 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnLoadGuildReserveMemberItem(UnityEngine.GameObject,System.Object)
 void GuildWindow_OnLoadGuildReserveMemberItem_m13208 (GuildWindow_t1989 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickChangeNotice()
 void GuildWindow_OnBtnClickChangeNotice_m13209 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnChangeDeclarationClick()
 void GuildWindow_OnChangeDeclarationClick_m13210 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickCreate()
 void GuildWindow_OnBtnClickCreate_m13211 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildListPgUp()
 void GuildWindow_OnBtnClickGuildListPgUp_m13212 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildListPgDown()
 void GuildWindow_OnBtnClickGuildListPgDown_m13213 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildMemberPgUp()
 void GuildWindow_OnBtnClickGuildMemberPgUp_m13214 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildMemberPgDown()
 void GuildWindow_OnBtnClickGuildMemberPgDown_m13215 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::GuildMemberPageChanged(System.Int32)
 void GuildWindow_GuildMemberPageChanged_m13216 (GuildWindow_t1989 * __this, int32_t ___nPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnlyShowEnemyToggle()
 void GuildWindow_OnlyShowEnemyToggle_m13217 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::GuildListPageChanged(System.Int32)
 void GuildWindow_GuildListPageChanged_m13218 (GuildWindow_t1989 * __this, int32_t ___nPage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::LoadGuildListItemPageChange(UnityEngine.GameObject,System.Object)
 void GuildWindow_LoadGuildListItemPageChange_m13219 (GuildWindow_t1989 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnSelectMemberChange(System.UInt64)
 void GuildWindow_OnSelectMemberChange_m13220 (GuildWindow_t1989 * __this, uint64_t ___selectGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildLevelTipsClick()
 void GuildWindow_OnGuildLevelTipsClick_m13221 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildLevelTipsCloseClick()
 void GuildWindow_OnGuildLevelTipsCloseClick_m13222 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildRewardPgDown()
 void GuildWindow_OnBtnClickGuildRewardPgDown_m13223 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnBtnClickGuildRewardPgUp()
 void GuildWindow_OnBtnClickGuildRewardPgUp_m13224 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnClickRecruitment()
 void GuildWindow_OnClickRecruitment_m13225 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::ShowGuildMail()
 void GuildWindow_ShowGuildMail_m13226 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::HideGuildMail()
 void GuildWindow_HideGuildMail_m13227 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::SendGuildMail()
 void GuildWindow_SendGuildMail_m13228 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdatePaoShangTip()
 void GuildWindow_UpdatePaoShangTip_m13229 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildRulesClick()
 void GuildWindow_OnGuildRulesClick_m13230 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnOpenReserveClick()
 void GuildWindow_OnOpenReserveClick_m13231 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OpenReserveOK()
 void GuildWindow_OpenReserveOK_m13232 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnCloseReserveClick()
 void GuildWindow_OnCloseReserveClick_m13233 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::CloseReserveOK()
 void GuildWindow_CloseReserveOK_m13234 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::HandleNeedReserve()
 void GuildWindow_HandleNeedReserve_m13235 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdateReserveSprite()
 void GuildWindow_UpdateReserveSprite_m13236 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::HandleGuildCreate()
 void GuildWindow_HandleGuildCreate_m13237 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnReserveClick()
 void GuildWindow_OnReserveClick_m13238 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnCloseClick()
 void GuildWindow_OnCloseClick_m13239 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::UpdateGuildListCurPage()
 void GuildWindow_UpdateGuildListCurPage_m13240 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildAuthorityClick()
 void GuildWindow_OnGuildAuthorityClick_m13241 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildHistoryClick()
 void GuildWindow_OnGuildHistoryClick_m13242 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWindow::OnGuildInviteClick()
 void GuildWindow_OnGuildInviteClick_m13243 (GuildWindow_t1989 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
