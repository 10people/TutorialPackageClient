#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>
struct List_1_t4555;
// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>[]
struct List_1U5BU5D_t4556;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// System.Object
#include "mscorlib_System_Object.h"
// Games.ChatHistory.GameChatHistory
struct GameChatHistory_t4557  : public Object_t
{
	// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem> Games.ChatHistory.GameChatHistory::m_ChatHistoryList
	List_1_t4555 * ___m_ChatHistoryList;
	// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem> Games.ChatHistory.GameChatHistory::m_ReplyHistoryList
	List_1_t4555 * ___m_ReplyHistoryList;
	// System.Collections.Generic.List`1<Games.ChatHistory.ChatHistoryItem>[] Games.ChatHistory.GameChatHistory::m_ChannelHistory
	List_1U5BU5D_t4556* ___m_ChannelHistory;
	// System.Int32[] Games.ChatHistory.GameChatHistory::Channel_HistoryCount
	Int32U5BU5D_t116* ___Channel_HistoryCount;
	// System.Collections.Generic.List`1<System.UInt64> Games.ChatHistory.GameChatHistory::m_FriendSendList
	List_1_t1393 * ___m_FriendSendList;
	// System.Boolean Games.ChatHistory.GameChatHistory::m_HasNewTellChat
	bool ___m_HasNewTellChat;
	// System.Boolean Games.ChatHistory.GameChatHistory::m_HasTeamInfoChat
	bool ___m_HasTeamInfoChat;
	// System.Boolean Games.ChatHistory.GameChatHistory::m_HasNewFriendChat
	bool ___m_HasNewFriendChat;
};
