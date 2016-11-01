#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ChatHistory.ChatHistoryItem
struct ChatHistoryItem_t1179;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE>
struct List_1_t1323;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// GC_CHAT/CHATTYPE
#include "AssemblyU2DCSharp_GC_CHAT_CHATTYPE.h"

// System.Void Games.ChatHistory.ChatHistoryItem::CleanUp()
 void ChatHistoryItem_CleanUp_m32726 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ChatHistory.ChatHistoryItem::IsValid()
 bool ChatHistoryItem_IsValid_m32727 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::GetLinkIntDataCountByIndex(System.Int32)
 int32_t ChatHistoryItem_GetLinkIntDataCountByIndex_m32728 (ChatHistoryItem_t1179 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::GetLinkStrDataCountByIndex(System.Int32)
 int32_t ChatHistoryItem_GetLinkStrDataCountByIndex_m32729 (ChatHistoryItem_t1179 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GC_CHAT/CHATTYPE Games.ChatHistory.ChatHistoryItem::get_EChannel()
 int32_t ChatHistoryItem_get_EChannel_m32730 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_EChannel(GC_CHAT/CHATTYPE)
 void ChatHistoryItem_set_EChannel_m32731 (ChatHistoryItem_t1179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.ChatHistory.ChatHistoryItem::get_SenderGuid()
 uint64_t ChatHistoryItem_get_SenderGuid_m32732 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_SenderGuid(System.UInt64)
 void ChatHistoryItem_set_SenderGuid_m32733 (ChatHistoryItem_t1179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.ChatHistory.ChatHistoryItem::get_SenderName()
 String_t* ChatHistoryItem_get_SenderName_m32734 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_SenderName(System.String)
 void ChatHistoryItem_set_SenderName_m32735 (ChatHistoryItem_t1179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.ChatHistory.ChatHistoryItem::get_ReceiverGuid()
 uint64_t ChatHistoryItem_get_ReceiverGuid_m32736 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_ReceiverGuid(System.UInt64)
 void ChatHistoryItem_set_ReceiverGuid_m32737 (ChatHistoryItem_t1179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.ChatHistory.ChatHistoryItem::get_ReceiverName()
 String_t* ChatHistoryItem_get_ReceiverName_m32738 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_ReceiverName(System.String)
 void ChatHistoryItem_set_ReceiverName_m32739 (ChatHistoryItem_t1179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.ChatHistory.ChatHistoryItem::get_ChatInfo()
 String_t* ChatHistoryItem_get_ChatInfo_m32740 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_ChatInfo(System.String)
 void ChatHistoryItem_set_ChatInfo_m32741 (ChatHistoryItem_t1179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE> Games.ChatHistory.ChatHistoryItem::get_ELinkType()
 List_1_t1323 * ChatHistoryItem_get_ELinkType_m32742 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_ELinkType(System.Collections.Generic.List`1<GC_CHAT/LINKTYPE>)
 void ChatHistoryItem_set_ELinkType_m32743 (ChatHistoryItem_t1179 * __this, List_1_t1323 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.ChatHistory.ChatHistoryItem::get_IntData()
 List_1_t90 * ChatHistoryItem_get_IntData_m32744 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_IntData(System.Collections.Generic.List`1<System.Int32>)
 void ChatHistoryItem_set_IntData_m32745 (ChatHistoryItem_t1179 * __this, List_1_t90 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Games.ChatHistory.ChatHistoryItem::get_StrData()
 List_1_t1333 * ChatHistoryItem_get_StrData_m32746 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_StrData(System.Collections.Generic.List`1<System.String>)
 void ChatHistoryItem_set_StrData_m32747 (ChatHistoryItem_t1179 * __this, List_1_t1333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::get_SenderVIPLevel()
 int32_t ChatHistoryItem_get_SenderVIPLevel_m32748 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_SenderVIPLevel(System.Int32)
 void ChatHistoryItem_set_SenderVIPLevel_m32749 (ChatHistoryItem_t1179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::get_VoiceChatIndex()
 int32_t ChatHistoryItem_get_VoiceChatIndex_m32750 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_VoiceChatIndex(System.Int32)
 void ChatHistoryItem_set_VoiceChatIndex_m32751 (ChatHistoryItem_t1179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::get_SenderLevel()
 int32_t ChatHistoryItem_get_SenderLevel_m32752 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_SenderLevel(System.Int32)
 void ChatHistoryItem_set_SenderLevel_m32753 (ChatHistoryItem_t1179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ChatHistory.ChatHistoryItem::get_SenderPro()
 int32_t ChatHistoryItem_get_SenderPro_m32754 (ChatHistoryItem_t1179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ChatHistory.ChatHistoryItem::set_SenderPro(System.Int32)
 void ChatHistoryItem_set_SenderPro_m32755 (ChatHistoryItem_t1179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
