#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"
// HuaShanPVPData/RegisterMemberInfo
struct RegisterMemberInfo_t4891  : public Object_t
{
	// System.UInt64 HuaShanPVPData/RegisterMemberInfo::guid
	uint64_t ___guid;
	// System.String HuaShanPVPData/RegisterMemberInfo::name
	String_t* ___name;
	// Games.GlobeDefine.CharacterDefine/PROFESSION HuaShanPVPData/RegisterMemberInfo::profession
	int32_t ___profession;
	// System.Int32 HuaShanPVPData/RegisterMemberInfo::level
	int32_t ___level;
	// System.Int32 HuaShanPVPData/RegisterMemberInfo::combat
	int32_t ___combat;
	// System.Int32 HuaShanPVPData/RegisterMemberInfo::pos
	int32_t ___pos;
};
