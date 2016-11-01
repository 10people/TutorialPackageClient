#pragma once
#include <stdint.h>
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LastSpeakerChatLogic
struct LastSpeakerChatLogic_t1295  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject LastSpeakerChatLogic::m_LastSpeakersGrid
	GameObject_t9 * ___m_LastSpeakersGrid;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_ButtonMenu
	GameObject_t9 * ___m_ButtonMenu;
	// UILabel LastSpeakerChatLogic::m_SpeakerNameLabel
	UILabel_t1176 * ___m_SpeakerNameLabel;
	// UIGrid LastSpeakerChatLogic::m_MenuBtnGrid
	UIGrid_t1199 * ___m_MenuBtnGrid;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_BtnAddFriend
	GameObject_t9 * ___m_BtnAddFriend;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_BtnTeamLeader
	GameObject_t9 * ___m_BtnTeamLeader;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_BtnTeamMember
	GameObject_t9 * ___m_BtnTeamMember;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_BtnBeginChat
	GameObject_t9 * ___m_BtnBeginChat;
	// ChatInfoLogic LastSpeakerChatLogic::m_ChatInfoLogic
	ChatInfoLogic_t1294 * ___m_ChatInfoLogic;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LastSpeakerChatLogic::m_LastSpeakersList
	List_1_t1289 * ___m_LastSpeakersList;
	// System.UInt64 LastSpeakerChatLogic::m_CurSpeakerGUID
	uint64_t ___m_CurSpeakerGUID;
	// System.String LastSpeakerChatLogic::m_CurSpeakerName
	String_t* ___m_CurSpeakerName;
	// UnityEngine.GameObject LastSpeakerChatLogic::m_LastSpeakerItem
	GameObject_t9 * ___m_LastSpeakerItem;
	// System.Collections.Generic.List`1<System.UInt64> LastSpeakerChatLogic::m_GuildMemberSpeak
	List_1_t1393 * ___m_GuildMemberSpeak;
	// UISprite[] LastSpeakerChatLogic::ProfessionSpritesMe
	UISpriteU5BU5D_t1201* ___ProfessionSpritesMe;
	// UILabel LastSpeakerChatLogic::m_otherPlayerLevel
	UILabel_t1176 * ___m_otherPlayerLevel;
};
struct LastSpeakerChatLogic_t1295_StaticFields{
	// System.Int32 LastSpeakerChatLogic::m_professionCount
	int32_t ___m_professionCount;
	// LastSpeakerChatLogic LastSpeakerChatLogic::m_Instance
	LastSpeakerChatLogic_t1295 * ___m_Instance;
};
