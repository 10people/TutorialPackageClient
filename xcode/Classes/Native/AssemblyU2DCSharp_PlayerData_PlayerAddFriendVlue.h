#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// PlayerData/PlayerAddFriendVlue
struct PlayerAddFriendVlue_t4948  : public Object_t
{
	// System.UInt64 PlayerData/PlayerAddFriendVlue::m_guid
	uint64_t ___m_guid;
	// System.Int32 PlayerData/PlayerAddFriendVlue::m_level
	int32_t ___m_level;
	// System.Int32 PlayerData/PlayerAddFriendVlue::m_fight
	int32_t ___m_fight;
	// System.Int32 PlayerData/PlayerAddFriendVlue::m_profess
	int32_t ___m_profess;
	// System.String PlayerData/PlayerAddFriendVlue::m_name
	String_t* ___m_name;
};
