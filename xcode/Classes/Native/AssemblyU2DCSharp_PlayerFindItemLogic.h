#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// PlayerFindWindow
struct PlayerFindWindow_t1651;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerFindItemLogic
struct PlayerFindItemLogic_t1652  : public MonoBehaviour_t18
{
	// UISprite PlayerFindItemLogic::m_PlayerProLabel
	UISprite_t1202 * ___m_PlayerProLabel;
	// UISprite PlayerFindItemLogic::m_PlayerHeadPic
	UISprite_t1202 * ___m_PlayerHeadPic;
	// UILabel PlayerFindItemLogic::m_PlayerNameLabel
	UILabel_t1176 * ___m_PlayerNameLabel;
	// UILabel PlayerFindItemLogic::m_PlayerLevelLabel
	UILabel_t1176 * ___m_PlayerLevelLabel;
	// UILabel PlayerFindItemLogic::m_PlayerCombatNumLabel
	UILabel_t1176 * ___m_PlayerCombatNumLabel;
	// UnityEngine.GameObject PlayerFindItemLogic::m_SelectSprite
	GameObject_t9 * ___m_SelectSprite;
	// System.UInt64 PlayerFindItemLogic::m_Guid
	uint64_t ___m_Guid;
	// PlayerFindWindow PlayerFindItemLogic::m_Parent
	PlayerFindWindow_t1651 * ___m_Parent;
	// UnityEngine.GameObject PlayerFindItemLogic::m_AddFriendObj
	GameObject_t9 * ___m_AddFriendObj;
	// UnityEngine.GameObject PlayerFindItemLogic::m_ChatObj
	GameObject_t9 * ___m_ChatObj;
};
