#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"
// PVPData/OpponentInfo
struct OpponentInfo_t1910 
{
	// System.UInt64 PVPData/OpponentInfo::guid
	uint64_t ___guid;
	// System.String PVPData/OpponentInfo::name
	String_t* ___name;
	// Games.GlobeDefine.CharacterDefine/PROFESSION PVPData/OpponentInfo::profession
	int32_t ___profession;
	// System.Int32 PVPData/OpponentInfo::level
	int32_t ___level;
	// System.Int32 PVPData/OpponentInfo::fightPower
	int32_t ___fightPower;
	// System.Int32 PVPData/OpponentInfo::winSpirit
	int32_t ___winSpirit;
	// System.Int32 PVPData/OpponentInfo::loseSpirit
	int32_t ___loseSpirit;
	// System.Int32 PVPData/OpponentInfo::winReputation
	int32_t ___winReputation;
	// System.Int32 PVPData/OpponentInfo::loseReputation
	int32_t ___loseReputation;
	// System.Int32 PVPData/OpponentInfo::range
	int32_t ___range;
};
// Native definition for marshalling of: PVPData/OpponentInfo
struct OpponentInfo_t1910_marshaled
{
	uint64_t ___guid;
	char* ___name;
	int32_t ___profession;
	int32_t ___level;
	int32_t ___fightPower;
	int32_t ___winSpirit;
	int32_t ___loseSpirit;
	int32_t ___winReputation;
	int32_t ___loseReputation;
	int32_t ___range;
};
