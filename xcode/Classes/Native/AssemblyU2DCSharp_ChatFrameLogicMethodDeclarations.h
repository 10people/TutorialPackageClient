#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatFrameLogic
struct ChatFrameLogic_t1290;
// GC_CHAT
struct GC_CHAT_t1292;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Byte[]
struct ByteU5BU5D_t1033;
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void ChatFrameLogic::.ctor()
 void ChatFrameLogic__ctor_m7596 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::.cctor()
 void ChatFrameLogic__cctor_m7597 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatFrameLogic ChatFrameLogic::Instance()
 ChatFrameLogic_t1290 * ChatFrameLogic_Instance_m7598 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic/CHANNEL_TYPE ChatFrameLogic::get_CurChannelType()
 int32_t ChatFrameLogic_get_CurChannelType_m7599 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::set_CurChannelType(ChatInfoLogic/CHANNEL_TYPE)
 void ChatFrameLogic_set_CurChannelType_m7600 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::Awake()
 void ChatFrameLogic_Awake_m7601 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::Start()
 void ChatFrameLogic_Start_m7602 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::Update()
 void ChatFrameLogic_Update_m7603 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::OnEnable()
 void ChatFrameLogic_OnEnable_m7604 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::OnDestroy()
 void ChatFrameLogic_OnDestroy_m7605 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::CheckNotifyData()
 void ChatFrameLogic_CheckNotifyData_m7606 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::ShowChatInfo()
 void ChatFrameLogic_ShowChatInfo_m7607 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::OnReceiveChat(GC_CHAT)
 void ChatFrameLogic_OnReceiveChat_m7608 (ChatFrameLogic_t1290 * __this, GC_CHAT_t1292 * ___pak, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::ShowVIPIcon(System.String,System.String&,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatFrameLogic_ShowVIPIcon_m7609 (ChatFrameLogic_t1290 * __this, String_t* ___fulltext, String_t** ___sendertext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::ShowPlayVoiceBtn(System.String,System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatFrameLogic_ShowPlayVoiceBtn_m7610 (ChatFrameLogic_t1290 * __this, String_t* ___fulltext, String_t* ___sendertext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::MakeLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatFrameLogic_MakeLinkEnabled_m7611 (ChatFrameLogic_t1290 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::CalculateLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void ChatFrameLogic_CalculateLinkSpace_m7612 (ChatFrameLogic_t1290 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::MakeEmotionEnabled(System.String)
 String_t* ChatFrameLogic_MakeEmotionEnabled_m7613 (ChatFrameLogic_t1290 * __this, String_t* ___fulltext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::CalculateEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&,System.Boolean&)
 void ChatFrameLogic_CalculateEmotionSpace_m7614 (ChatFrameLogic_t1290 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, bool* ___needShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::GetSpaceEmotionItem(UnityEngine.GameObject)
 String_t* ChatFrameLogic_GetSpaceEmotionItem_m7615 (ChatFrameLogic_t1290 * __this, GameObject_t9 * ___emotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::InitTextPos()
 void ChatFrameLogic_InitTextPos_m7616 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::SelectTextNumber()
 void ChatFrameLogic_SelectTextNumber_m7617 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::UpdateEmotionLinkPos(System.String)
 void ChatFrameLogic_UpdateEmotionLinkPos_m7618 (ChatFrameLogic_t1290 * __this, String_t* ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::ConfirmEllipsis(System.String&)
 void ChatFrameLogic_ConfirmEllipsis_m7619 (ChatFrameLogic_t1290 * __this, String_t** ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::InitCurChat()
 void ChatFrameLogic_InitCurChat_m7620 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatFrameLogic::MakeNameLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatFrameLogic_MakeNameLinkEnabled_m7621 (ChatFrameLogic_t1290 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::PlayTween(System.Boolean)
 void ChatFrameLogic_PlayTween_m7622 (ChatFrameLogic_t1290 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::ClearCurChat()
 void ChatFrameLogic_ClearCurChat_m7623 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::InitPlayVoiceBtn()
 void ChatFrameLogic_InitPlayVoiceBtn_m7624 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::UpdatePlayVoiceBtnByIndex(System.Int32)
 void ChatFrameLogic_UpdatePlayVoiceBtnByIndex_m7625 (ChatFrameLogic_t1290 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ChatFrameLogic::CheckIsCanSendTell()
 bool ChatFrameLogic_CheckIsCanSendTell_m7626 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::RecordBegin()
 void ChatFrameLogic_RecordBegin_m7627 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::UpdateSpeechTime()
 void ChatFrameLogic_UpdateSpeechTime_m7628 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::UpdateSpeechPressState()
 void ChatFrameLogic_UpdateSpeechPressState_m7629 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::RecordOver()
 void ChatFrameLogic_RecordOver_m7630 (ChatFrameLogic_t1290 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatFrameLogic::OnSpeechTaskOver(System.String,System.Byte[])
 void ChatFrameLogic_OnSpeechTaskOver_m7631 (ChatFrameLogic_t1290 * __this, String_t* ___Text, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
