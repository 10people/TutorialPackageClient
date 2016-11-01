#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// GuildWarKillRank
struct GuildWarKillRank_t1483 
{
	// System.Int32 GuildWarKillRank::m_nSortNum
	int32_t ___m_nSortNum;
	// System.Int32 GuildWarKillRank::m_nKillerNum
	int32_t ___m_nKillerNum;
	// System.String GuildWarKillRank::m_KillerName
	String_t* ___m_KillerName;
};
// Native definition for marshalling of: GuildWarKillRank
struct GuildWarKillRank_t1483_marshaled
{
	int32_t ___m_nSortNum;
	int32_t ___m_nKillerNum;
	char* ___m_KillerName;
};
