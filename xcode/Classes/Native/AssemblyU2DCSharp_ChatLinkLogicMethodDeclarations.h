#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatLinkLogic
struct ChatLinkLogic_t1324;
// Games.Item.GameItem
struct GameItem_t1172;
// Games.Fellow.Fellow
struct Fellow_t1174;
// System.String
struct String_t;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"

// System.Void ChatLinkLogic::.ctor()
 void ChatLinkLogic__ctor_m7855 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItem ChatLinkLogic::get_EquipOrItemLink()
 GameItem_t1172 * ChatLinkLogic_get_EquipOrItemLink_m7856 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_EquipOrItemLink(Games.Item.GameItem)
 void ChatLinkLogic_set_EquipOrItemLink_m7857 (ChatLinkLogic_t1324 * __this, GameItem_t1172 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Fellow.Fellow ChatLinkLogic::get_FellowItem()
 Fellow_t1174 * ChatLinkLogic_get_FellowItem_m7858 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_FellowItem(Games.Fellow.Fellow)
 void ChatLinkLogic_set_FellowItem_m7859 (ChatLinkLogic_t1324 * __this, Fellow_t1174 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatLinkLogic::get_playerGUID()
 uint64_t ChatLinkLogic_get_playerGUID_m7860 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_playerGUID(System.UInt64)
 void ChatLinkLogic_set_playerGUID_m7861 (ChatLinkLogic_t1324 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatLinkLogic::get_PlayerName()
 String_t* ChatLinkLogic_get_PlayerName_m7862 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_PlayerName(System.String)
 void ChatLinkLogic_set_PlayerName_m7863 (ChatLinkLogic_t1324 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatLinkLogic::get_playerInfoGUID()
 uint64_t ChatLinkLogic_get_playerInfoGUID_m7864 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_playerInfoGUID(System.UInt64)
 void ChatLinkLogic_set_playerInfoGUID_m7865 (ChatLinkLogic_t1324 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ChatLinkLogic::get_guildIdForRecruit()
 uint64_t ChatLinkLogic_get_guildIdForRecruit_m7866 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_guildIdForRecruit(System.UInt64)
 void ChatLinkLogic_set_guildIdForRecruit_m7867 (ChatLinkLogic_t1324 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsMan ChatLinkLogic::get_SwordsManLink()
 SwordsMan_t1175 * ChatLinkLogic_get_SwordsManLink_m7868 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::set_SwordsManLink(Games.SwordsMan.SwordsMan)
 void ChatLinkLogic_set_SwordsManLink_m7869 (ChatLinkLogic_t1324 * __this, SwordsMan_t1175 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::Start()
 void ChatLinkLogic_Start_m7870 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::Init(Games.ChatHistory.ChatHistoryItem,System.Int32)
 void ChatLinkLogic_Init_m7871 (ChatLinkLogic_t1324 * __this, ChatHistoryItem_t1179  ___history, int32_t ___linkindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::Init_NameLink(System.UInt64,System.String)
 void ChatLinkLogic_Init_NameLink_m7872 (ChatLinkLogic_t1324 * __this, uint64_t ___playerGUID, String_t* ___playerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::LinkOnClick(UnityEngine.GameObject)
 void ChatLinkLogic_LinkOnClick_m7873 (ChatLinkLogic_t1324 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::ApplyToJoinGuild()
 void ChatLinkLogic_ApplyToJoinGuild_m7874 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::AgreeChangeJoinGuildRequest()
 void ChatLinkLogic_AgreeChangeJoinGuildRequest_m7875 (ChatLinkLogic_t1324 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatLinkLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void ChatLinkLogic_ShowChatInfoRootOver_m7876 (ChatLinkLogic_t1324 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
