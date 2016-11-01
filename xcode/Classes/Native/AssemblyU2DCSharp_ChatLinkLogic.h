#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE>
struct List_1_t1323;
// Games.Item.GameItem
struct GameItem_t1172;
// Games.Fellow.Fellow
struct Fellow_t1174;
// System.String
struct String_t;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GC_CHAT/LINKTYPE
#include "AssemblyU2DCSharp_GC_CHAT_LINKTYPE.h"
// ChatLinkLogic/MissonLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MissonLinkInfo.h"
// ChatLinkLogic/MoveToLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_MoveToLinkInfo.h"
// ChatLinkLogic/HongBaoLinkInfo
#include "AssemblyU2DCSharp_ChatLinkLogic_HongBaoLinkInfo.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// ChatLinkLogic
struct ChatLinkLogic_t1324  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<GC_CHAT/LINKTYPE> ChatLinkLogic::m_LinkTypeList
	List_1_t1323 * ___m_LinkTypeList;
	// GC_CHAT/LINKTYPE ChatLinkLogic::m_LinkType
	int32_t ___m_LinkType;
	// Games.Item.GameItem ChatLinkLogic::m_EquipOrItemLink
	GameItem_t1172 * ___m_EquipOrItemLink;
	// Games.Fellow.Fellow ChatLinkLogic::m_fellow
	Fellow_t1174 * ___m_fellow;
	// System.UInt64 ChatLinkLogic::m_playerGUID
	uint64_t ___m_playerGUID;
	// System.String ChatLinkLogic::m_playerName
	String_t* ___m_playerName;
	// System.UInt64 ChatLinkLogic::m_playerInfoGUID
	uint64_t ___m_playerInfoGUID;
	// System.UInt64 ChatLinkLogic::m_guildIdForRecruit
	uint64_t ___m_guildIdForRecruit;
	// Games.SwordsMan.SwordsMan ChatLinkLogic::m_SwordsManLink
	SwordsMan_t1175 * ___m_SwordsManLink;
	// ChatLinkLogic/MissonLinkInfo ChatLinkLogic::m_missionLink
	MissonLinkInfo_t1182  ___m_missionLink;
	// System.Boolean ChatLinkLogic::m_bNameLink
	bool ___m_bNameLink;
	// ChatLinkLogic/MoveToLinkInfo ChatLinkLogic::m_MoveToLink
	MoveToLinkInfo_t1180  ___m_MoveToLink;
	// ChatLinkLogic/HongBaoLinkInfo ChatLinkLogic::m_HongBaoInfoLink
	HongBaoLinkInfo_t1181  ___m_HongBaoInfoLink;
	// Games.ChatHistory.ChatHistoryItem ChatLinkLogic::m_chatHistoryItem
	ChatHistoryItem_t1179  ___m_chatHistoryItem;
};
