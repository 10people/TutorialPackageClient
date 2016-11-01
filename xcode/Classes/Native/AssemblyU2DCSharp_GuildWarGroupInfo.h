#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// GuildWarGroupInfo
struct GuildWarGroupInfo_t1465 
{
	// System.Int32 GuildWarGroupInfo::m_nGroupIndex
	int32_t ___m_nGroupIndex;
	// System.String GuildWarGroupInfo::m_GuildAName
	String_t* ___m_GuildAName;
	// System.String GuildWarGroupInfo::m_GuildBName
	String_t* ___m_GuildBName;
	// System.Int32 GuildWarGroupInfo::m_nGuildAScore
	int32_t ___m_nGuildAScore;
	// System.Int32 GuildWarGroupInfo::m_nGuildBScore
	int32_t ___m_nGuildBScore;
	// System.Int32 GuildWarGroupInfo::m_nWinType
	int32_t ___m_nWinType;
};
// Native definition for marshalling of: GuildWarGroupInfo
struct GuildWarGroupInfo_t1465_marshaled
{
	int32_t ___m_nGroupIndex;
	char* ___m_GuildAName;
	char* ___m_GuildBName;
	int32_t ___m_nGuildAScore;
	int32_t ___m_nGuildBScore;
	int32_t ___m_nWinType;
};
