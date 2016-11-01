#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"
// WuLinData/RegisterMemberInfo
struct RegisterMemberInfo_t4987  : public Object_t
{
	// System.UInt64 WuLinData/RegisterMemberInfo::guid
	uint64_t ___guid;
	// System.String WuLinData/RegisterMemberInfo::name
	String_t* ___name;
	// Games.GlobeDefine.CharacterDefine/PROFESSION WuLinData/RegisterMemberInfo::profession
	int32_t ___profession;
	// System.Int32 WuLinData/RegisterMemberInfo::level
	int32_t ___level;
	// System.Int32 WuLinData/RegisterMemberInfo::combat
	int32_t ___combat;
	// System.Int32 WuLinData/RegisterMemberInfo::pos
	int32_t ___pos;
};
