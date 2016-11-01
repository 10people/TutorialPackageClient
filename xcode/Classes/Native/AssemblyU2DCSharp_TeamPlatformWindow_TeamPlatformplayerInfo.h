#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// TeamPlatformWindow/TeamPlatformplayerInfo
struct TeamPlatformplayerInfo_t2077 
{
	// System.UInt64 TeamPlatformWindow/TeamPlatformplayerInfo::playerGuid
	uint64_t ___playerGuid;
	// System.String TeamPlatformWindow/TeamPlatformplayerInfo::playerName
	String_t* ___playerName;
	// System.Int32 TeamPlatformWindow/TeamPlatformplayerInfo::playerLevel
	int32_t ___playerLevel;
	// System.Int32 TeamPlatformWindow/TeamPlatformplayerInfo::playerProf
	int32_t ___playerProf;
	// System.Int32 TeamPlatformWindow/TeamPlatformplayerInfo::playerCombat
	int32_t ___playerCombat;
};
// Native definition for marshalling of: TeamPlatformWindow/TeamPlatformplayerInfo
struct TeamPlatformplayerInfo_t2077_marshaled
{
	uint64_t ___playerGuid;
	char* ___playerName;
	int32_t ___playerLevel;
	int32_t ___playerProf;
	int32_t ___playerCombat;
};
