#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// NearbyPlayer
struct NearbyPlayer_t1211  : public Object_t
{
	// System.UInt64 NearbyPlayer::m_Guid
	uint64_t ___m_Guid;
	// System.String NearbyPlayer::m_szName
	String_t* ___m_szName;
	// System.Int32 NearbyPlayer::m_nLevel
	int32_t ___m_nLevel;
	// System.Int32 NearbyPlayer::m_nProfession
	int32_t ___m_nProfession;
	// System.Int32 NearbyPlayer::m_nCombatNum
	int32_t ___m_nCombatNum;
	// System.Int32 NearbyPlayer::m_nVipLevel
	int32_t ___m_nVipLevel;
	// System.String NearbyPlayer::m_szGuildName
	String_t* ___m_szGuildName;
};
