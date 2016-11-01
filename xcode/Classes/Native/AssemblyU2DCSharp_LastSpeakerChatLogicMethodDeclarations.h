#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"

// System.Void LastSpeakerChatLogic::.ctor()
 void LastSpeakerChatLogic__ctor_m9217 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::.cctor()
 void LastSpeakerChatLogic__cctor_m9218 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LastSpeakerChatLogic LastSpeakerChatLogic::Instance()
 LastSpeakerChatLogic_t1295 * LastSpeakerChatLogic_Instance_m9219 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::Awake()
 void LastSpeakerChatLogic_Awake_m9220 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::Start()
 void LastSpeakerChatLogic_Start_m9221 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnEnable()
 void LastSpeakerChatLogic_OnEnable_m9222 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnDisable()
 void LastSpeakerChatLogic_OnDisable_m9223 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ClearData()
 void LastSpeakerChatLogic_ClearData_m9224 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnReceiveChat()
 void LastSpeakerChatLogic_OnReceiveChat_m9225 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::UpdateSpeakers()
 void LastSpeakerChatLogic_UpdateSpeakers_m9226 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::AddLastSpeakers(Games.ChatHistory.ChatHistoryItem)
 void LastSpeakerChatLogic_AddLastSpeakers_m9227 (LastSpeakerChatLogic_t1295 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnLoadLastSpeakerItem(UnityEngine.GameObject,System.Object)
 void LastSpeakerChatLogic_OnLoadLastSpeakerItem_m9228 (LastSpeakerChatLogic_t1295 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject LastSpeakerChatLogic::AddNewLastSpeaker(System.UInt64,System.String)
 GameObject_t9 * LastSpeakerChatLogic_AddNewLastSpeaker_m9229 (LastSpeakerChatLogic_t1295 * __this, uint64_t ___newSenderGuid, String_t* ___newSenderName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ChangeLastSpeakerItem(System.Int32,System.UInt64,System.String)
 void LastSpeakerChatLogic_ChangeLastSpeakerItem_m9230 (LastSpeakerChatLogic_t1295 * __this, int32_t ___from, uint64_t ___newSenderGuid, String_t* ___newSenderName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LastSpeakerChatLogic::GetLastSpeakerIndexByGuid(System.UInt64)
 int32_t LastSpeakerChatLogic_GetLastSpeakerIndexByGuid_m9231 (LastSpeakerChatLogic_t1295 * __this, uint64_t ___nSpeakerGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ShowButtonMenu(System.UInt64,System.String)
 void LastSpeakerChatLogic_ShowButtonMenu_m9232 (LastSpeakerChatLogic_t1295 * __this, uint64_t ___speakerGUID, String_t* ___speakerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::SetOtherPlayerInfo(System.Int32,System.Int32,System.String)
 void LastSpeakerChatLogic_SetOtherPlayerInfo_m9233 (LastSpeakerChatLogic_t1295 * __this, int32_t ___profession, int32_t ___level, String_t* ___speakerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ChoosePlayer(System.UInt64,System.String)
 void LastSpeakerChatLogic_ChoosePlayer_m9234 (LastSpeakerChatLogic_t1295 * __this, uint64_t ___speakerGUID, String_t* ___speakerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ShowMenu(System.String)
 void LastSpeakerChatLogic_ShowMenu_m9235 (LastSpeakerChatLogic_t1295 * __this, String_t* ___speakerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::SetTellChat()
 void LastSpeakerChatLogic_SetTellChat_m9236 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::AddFriend()
 void LastSpeakerChatLogic_AddFriend_m9237 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::PlayerView()
 void LastSpeakerChatLogic_PlayerView_m9238 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::InviteInGuild()
 void LastSpeakerChatLogic_InviteInGuild_m9239 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::InviteInTeam_SelfCaptain()
 void LastSpeakerChatLogic_InviteInTeam_SelfCaptain_m9240 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::InviteInTeam_SelfMember()
 void LastSpeakerChatLogic_InviteInTeam_SelfMember_m9241 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ReportIllegal()
 void LastSpeakerChatLogic_ReportIllegal_m9242 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ShieldPlayer()
 void LastSpeakerChatLogic_ShieldPlayer_m9243 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ConsignSaleInfoBt()
 void LastSpeakerChatLogic_ConsignSaleInfoBt_m9244 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::BuyItemOpenConsignSale(System.Boolean,System.Object)
 void LastSpeakerChatLogic_BuyItemOpenConsignSale_m9245 (LastSpeakerChatLogic_t1295 * __this, bool ___bSuccess, Object_t * ___speakerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::CloseButtonMenu()
 void LastSpeakerChatLogic_CloseButtonMenu_m9246 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::InviteGuild()
 void LastSpeakerChatLogic_InviteGuild_m9247 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::ReqJoinGuild()
 void LastSpeakerChatLogic_ReqJoinGuild_m9248 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::AgreeChangeJoinGuildRequest()
 void LastSpeakerChatLogic_AgreeChangeJoinGuildRequest_m9249 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnReport()
 void LastSpeakerChatLogic_OnReport_m9250 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnReportOK()
 void LastSpeakerChatLogic_OnReportOK_m9251 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LastSpeakerChatLogic::OnReportCancel()
 void LastSpeakerChatLogic_OnReportCancel_m9252 (LastSpeakerChatLogic_t1295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
