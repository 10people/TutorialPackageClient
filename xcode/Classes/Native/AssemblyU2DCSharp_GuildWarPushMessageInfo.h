#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// GuildWarPushMessageInfo
struct GuildWarPushMessageInfo_t1486 
{
	// System.Int32 GuildWarPushMessageInfo::m_nMessageType
	int32_t ___m_nMessageType;
	// System.Int32 GuildWarPushMessageInfo::m_nWarType
	int32_t ___m_nWarType;
	// System.Int32 GuildWarPushMessageInfo::m_nPointType
	int32_t ___m_nPointType;
	// System.String GuildWarPushMessageInfo::m_ChallengeGuildName
	String_t* ___m_ChallengeGuildName;
	// System.Single GuildWarPushMessageInfo::m_fPushTime
	float ___m_fPushTime;
	// System.UInt64 GuildWarPushMessageInfo::m_ChallengeGuildGUID
	uint64_t ___m_ChallengeGuildGUID;
};
// Native definition for marshalling of: GuildWarPushMessageInfo
struct GuildWarPushMessageInfo_t1486_marshaled
{
	int32_t ___m_nMessageType;
	int32_t ___m_nWarType;
	int32_t ___m_nPointType;
	char* ___m_ChallengeGuildName;
	float ___m_fPushTime;
	uint64_t ___m_ChallengeGuildGUID;
};
