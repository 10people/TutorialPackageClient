#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE>
struct List_1_t1323;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// GC_CHAT/CHATTYPE
#include "AssemblyU2DCSharp_GC_CHAT_CHATTYPE.h"
// Games.ChatHistory.ChatHistoryItem
struct ChatHistoryItem_t1179 
{
	// GC_CHAT/CHATTYPE Games.ChatHistory.ChatHistoryItem::m_eChannel
	int32_t ___m_eChannel;
	// System.UInt64 Games.ChatHistory.ChatHistoryItem::m_SenderGuid
	uint64_t ___m_SenderGuid;
	// System.String Games.ChatHistory.ChatHistoryItem::m_SenderName
	String_t* ___m_SenderName;
	// System.UInt64 Games.ChatHistory.ChatHistoryItem::m_ReceiverGuid
	uint64_t ___m_ReceiverGuid;
	// System.String Games.ChatHistory.ChatHistoryItem::m_ReceiverName
	String_t* ___m_ReceiverName;
	// System.String Games.ChatHistory.ChatHistoryItem::m_ChatInfo
	String_t* ___m_ChatInfo;
	// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE> Games.ChatHistory.ChatHistoryItem::m_eLinkType
	List_1_t1323 * ___m_eLinkType;
	// System.Collections.Generic.List`1<System.Int32> Games.ChatHistory.ChatHistoryItem::m_IntData
	List_1_t90 * ___m_IntData;
	// System.Collections.Generic.List`1<System.String> Games.ChatHistory.ChatHistoryItem::m_StrData
	List_1_t1333 * ___m_StrData;
	// System.Int32 Games.ChatHistory.ChatHistoryItem::m_SenderVIPLevel
	int32_t ___m_SenderVIPLevel;
	// System.Int32 Games.ChatHistory.ChatHistoryItem::m_VoiceChatIndex
	int32_t ___m_VoiceChatIndex;
	// System.Int32 Games.ChatHistory.ChatHistoryItem::m_level
	int32_t ___m_level;
	// System.Int32 Games.ChatHistory.ChatHistoryItem::m_profession
	int32_t ___m_profession;
};
