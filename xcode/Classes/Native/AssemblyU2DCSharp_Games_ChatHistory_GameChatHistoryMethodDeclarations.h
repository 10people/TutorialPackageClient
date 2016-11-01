#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.GameChatHistory
struct GameChatHistory_t4557;
// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>
struct List_1_t4555;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// GC_CHAT
struct GC_CHAT_t1292;
// CG_CHAT
struct CG_CHAT_t1173;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"

// System.Void Games.ChatHistory.GameChatHistory::.ctor()
 void GameChatHistory__ctor_m32756 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem> Games.ChatHistory.GameChatHistory::get_ChatHistoryList()
 List_1_t4555 * GameChatHistory_get_ChatHistoryList_m32757 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_ChatHistoryList(System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>)
 void GameChatHistory_set_ChatHistoryList_m32758 (GameChatHistory_t4557 * __this, List_1_t4555 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem> Games.ChatHistory.GameChatHistory::get_ReplyHistoryList()
 List_1_t4555 * GameChatHistory_get_ReplyHistoryList_m32759 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_ReplyHistoryList(System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>)
 void GameChatHistory_set_ReplyHistoryList_m32760 (GameChatHistory_t4557 * __this, List_1_t4555 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.UInt64> Games.ChatHistory.GameChatHistory::get_FriendSendList()
 List_1_t1393 * GameChatHistory_get_FriendSendList_m32761 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_FriendSendList(System.Collections.Generic.List`1<System.UInt64>)
 void GameChatHistory_set_FriendSendList_m32762 (GameChatHistory_t4557 * __this, List_1_t1393 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.GameChatHistory::get_HasNewTellChat()
 bool GameChatHistory_get_HasNewTellChat_m32763 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_HasNewTellChat(System.Boolean)
 void GameChatHistory_set_HasNewTellChat_m32764 (GameChatHistory_t4557 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.GameChatHistory::get_HasTeamInfoChat()
 bool GameChatHistory_get_HasTeamInfoChat_m32765 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_HasTeamInfoChat(System.Boolean)
 void GameChatHistory_set_HasTeamInfoChat_m32766 (GameChatHistory_t4557 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.GameChatHistory::get_HasNewFriendChat()
 bool GameChatHistory_get_HasNewFriendChat_m32767 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::set_HasNewFriendChat(System.Boolean)
 void GameChatHistory_set_HasNewFriendChat_m32768 (GameChatHistory_t4557 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.GameChatHistory::OnReceiveChat(GC_CHAT)
 bool GameChatHistory_OnReceiveChat_m32769 (GameChatHistory_t4557 * __this, GC_CHAT_t1292 * ___pak, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::AddReplyHistory(CG_CHAT)
 void GameChatHistory_AddReplyHistory_m32770 (GameChatHistory_t4557 * __this, CG_CHAT_t1173 * ___pak, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.GameChatHistory::ClearData()
 void GameChatHistory_ClearData_m32771 (GameChatHistory_t4557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.GameChatHistory::IsCanAutoDownloadVoiceChat(Games.ChatHistory.ChatHistoryItem)
 bool GameChatHistory_IsCanAutoDownloadVoiceChat_m32772 (GameChatHistory_t4557 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
