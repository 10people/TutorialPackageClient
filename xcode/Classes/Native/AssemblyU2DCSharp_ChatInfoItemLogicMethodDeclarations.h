#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatInfoItemLogic
struct ChatInfoItemLogic_t1296;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ChatInfoItemLogic/EMOTIONLINK_MOVE_DIRECTION
#include "AssemblyU2DCSharp_ChatInfoItemLogic_EMOTIONLINK_MOVE_DIRECTI.h"

// System.Void ChatInfoItemLogic::.ctor()
 void ChatInfoItemLogic__ctor_m7632 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoItemLogic::get_LinkList()
 List_1_t1289 * ChatInfoItemLogic_get_LinkList_m7633 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic ChatInfoItemLogic::get_ChatInfoLogic()
 ChatInfoLogic_t1294 * ChatInfoItemLogic_get_ChatInfoLogic_m7634 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_ChatInfoLogic(ChatInfoLogic)
 void ChatInfoItemLogic_set_ChatInfoLogic_m7635 (ChatInfoItemLogic_t1296 * __this, ChatInfoLogic_t1294 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LastSpeakerChatLogic ChatInfoItemLogic::get_LastSpeakerChatLogic()
 LastSpeakerChatLogic_t1295 * ChatInfoItemLogic_get_LastSpeakerChatLogic_m7636 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_LastSpeakerChatLogic(LastSpeakerChatLogic)
 void ChatInfoItemLogic_set_LastSpeakerChatLogic_m7637 (ChatInfoItemLogic_t1296 * __this, LastSpeakerChatLogic_t1295 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatInfoItemLogic::get_SpeakerGuid()
 uint64_t ChatInfoItemLogic_get_SpeakerGuid_m7638 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_SpeakerGuid(System.UInt64)
 void ChatInfoItemLogic_set_SpeakerGuid_m7639 (ChatInfoItemLogic_t1296 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::get_SpeakerName()
 String_t* ChatInfoItemLogic_get_SpeakerName_m7640 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_SpeakerName(System.String)
 void ChatInfoItemLogic_set_SpeakerName_m7641 (ChatInfoItemLogic_t1296 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChatInfoItemLogic::get_SpeakerLevel()
 int32_t ChatInfoItemLogic_get_SpeakerLevel_m7642 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_SpeakerLevel(System.Int32)
 void ChatInfoItemLogic_set_SpeakerLevel_m7643 (ChatInfoItemLogic_t1296 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChatInfoItemLogic::get_SpeakerProfession()
 int32_t ChatInfoItemLogic_get_SpeakerProfession_m7644 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::set_SpeakerProfession(System.Int32)
 void ChatInfoItemLogic_set_SpeakerProfession_m7645 (ChatInfoItemLogic_t1296 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::Awake()
 void ChatInfoItemLogic_Awake_m7646 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::Start()
 void ChatInfoItemLogic_Start_m7647 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::OnEnable()
 void ChatInfoItemLogic_OnEnable_m7648 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::OnDestroy()
 void ChatInfoItemLogic_OnDestroy_m7649 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::Init(System.String,Games.ChatHistory.ChatHistoryItem)
 void ChatInfoItemLogic_Init_m7650 (ChatInfoItemLogic_t1296 * __this, String_t* ___strChatFull, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::ShowChatInfo()
 void ChatInfoItemLogic_ShowChatInfo_m7651 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::MakeHeadEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoItemLogic_MakeHeadEnabled_m7652 (ChatInfoItemLogic_t1296 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::MakeTitleEnable(System.String,Games.ChatHistory.ChatHistoryItem)
 void ChatInfoItemLogic_MakeTitleEnable_m7653 (ChatInfoItemLogic_t1296 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::ShowVIPIcon(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoItemLogic_ShowVIPIcon_m7654 (ChatInfoItemLogic_t1296 * __this, String_t* ___ChatTitle, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::MakeLinkEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoItemLogic_MakeLinkEnabled_m7655 (ChatInfoItemLogic_t1296 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::CalculateLinkSpace(System.String&,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoItemLogic_CalculateLinkSpace_m7656 (ChatInfoItemLogic_t1296 * __this, String_t** ___text, int32_t ___linkstart_whole, int32_t ___linkstart, int32_t ___linkend, Vector2_t12 * ___LeftSideSpace, Vector2_t12 * ___RightSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::MakeEmotionEnabled(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoItemLogic_MakeEmotionEnabled_m7657 (ChatInfoItemLogic_t1296 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::CalculateEmotionSpace(System.String&,UnityEngine.Vector2&,System.Int32&)
 void ChatInfoItemLogic_CalculateEmotionSpace_m7658 (ChatInfoItemLogic_t1296 * __this, String_t** ___text, Vector2_t12 * ___LeftSideSpace, int32_t* ___nNextLineNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::GetSpaceEmotionItem(UnityEngine.GameObject)
 String_t* ChatInfoItemLogic_GetSpaceEmotionItem_m7659 (ChatInfoItemLogic_t1296 * __this, GameObject_t9 * ___emotion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::SelectTextNumber()
 void ChatInfoItemLogic_SelectTextNumber_m7660 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::ClearCurChat()
 void ChatInfoItemLogic_ClearCurChat_m7661 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::UpdateEmotionLinkPos(Games.ChatHistory.ChatHistoryItem,System.String)
 void ChatInfoItemLogic_UpdateEmotionLinkPos_m7662 (ChatInfoItemLogic_t1296 * __this, ChatHistoryItem_t1179  ___history, String_t* ___strChatFull, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::ShowNewChat(Games.ChatHistory.ChatHistoryItem,System.Single)
 void ChatInfoItemLogic_ShowNewChat_m7663 (ChatInfoItemLogic_t1296 * __this, ChatHistoryItem_t1179  ___history, float ___ChatMaxHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::MoveLinkPos(Games.ChatHistory.ChatHistoryItem,ChatInfoItemLogic/EMOTIONLINK_MOVE_DIRECTION,System.Single)
 void ChatInfoItemLogic_MoveLinkPos_m7664 (ChatInfoItemLogic_t1296 * __this, ChatHistoryItem_t1179  ___history, int32_t ___direction, float ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::MoveChatEmotionPos(Games.ChatHistory.ChatHistoryItem,ChatInfoItemLogic/EMOTIONLINK_MOVE_DIRECTION,System.Single)
 void ChatInfoItemLogic_MoveChatEmotionPos_m7665 (ChatInfoItemLogic_t1296 * __this, ChatHistoryItem_t1179  ___history, int32_t ___direction, float ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::MoveLableEmotionPos(Games.ChatHistory.ChatHistoryItem,ChatInfoItemLogic/EMOTIONLINK_MOVE_DIRECTION,System.Single)
 void ChatInfoItemLogic_MoveLableEmotionPos_m7666 (ChatInfoItemLogic_t1296 * __this, ChatHistoryItem_t1179  ___history, int32_t ___direction, float ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::ChatInfoItemOnClick()
 void ChatInfoItemLogic_ChatInfoItemOnClick_m7667 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatInfoItemLogic::ShowPlayVoiceBtn(System.String,Games.ChatHistory.ChatHistoryItem)
 String_t* ChatInfoItemLogic_ShowPlayVoiceBtn_m7668 (ChatInfoItemLogic_t1296 * __this, String_t* ___fulltext, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::OnPlayVoiceChatItem()
 void ChatInfoItemLogic_OnPlayVoiceChatItem_m7669 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatInfoItemLogic::OnPlayVoiceChatOverItem()
 void ChatInfoItemLogic_OnPlayVoiceChatOverItem_m7670 (ChatInfoItemLogic_t1296 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
