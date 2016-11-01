#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// HuaShanPVPData/WorldBossTeamInfo
struct WorldBossTeamInfo_t1950 
{
	// System.Int32 HuaShanPVPData/WorldBossTeamInfo::id
	int32_t ___id;
	// System.String HuaShanPVPData/WorldBossTeamInfo::name
	String_t* ___name;
	// System.Int32 HuaShanPVPData/WorldBossTeamInfo::score
	int32_t ___score;
	// System.Int32 HuaShanPVPData/WorldBossTeamInfo::pos
	int32_t ___pos;
	// System.Int32 HuaShanPVPData/WorldBossTeamInfo::cd
	int32_t ___cd;
	// System.Int32 HuaShanPVPData/WorldBossTeamInfo::per
	int32_t ___per;
};
// Native definition for marshalling of: HuaShanPVPData/WorldBossTeamInfo
struct WorldBossTeamInfo_t1950_marshaled
{
	int32_t ___id;
	char* ___name;
	int32_t ___score;
	int32_t ___pos;
	int32_t ___cd;
	int32_t ___per;
};
