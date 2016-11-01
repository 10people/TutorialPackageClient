#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"
// HuaShanPVPData/OpponentViewInfo
struct OpponentViewInfo_t4890 
{
	// System.UInt64 HuaShanPVPData/OpponentViewInfo::guid
	uint64_t ___guid;
	// System.String HuaShanPVPData/OpponentViewInfo::name
	String_t* ___name;
	// Games.GlobeDefine.CharacterDefine/PROFESSION HuaShanPVPData/OpponentViewInfo::profession
	int32_t ___profession;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::level
	int32_t ___level;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::combat
	int32_t ___combat;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::pos
	int32_t ___pos;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::hp
	int32_t ___hp;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::mp
	int32_t ___mp;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::atk
	int32_t ___atk;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::def
	int32_t ___def;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::cri
	int32_t ___cri;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::spd
	int32_t ___spd;
	// System.Int32 HuaShanPVPData/OpponentViewInfo::dge
	int32_t ___dge;
};
// Native definition for marshalling of: HuaShanPVPData/OpponentViewInfo
struct OpponentViewInfo_t4890_marshaled
{
	uint64_t ___guid;
	char* ___name;
	int32_t ___profession;
	int32_t ___level;
	int32_t ___combat;
	int32_t ___pos;
	int32_t ___hp;
	int32_t ___mp;
	int32_t ___atk;
	int32_t ___def;
	int32_t ___cri;
	int32_t ___spd;
	int32_t ___dge;
};
