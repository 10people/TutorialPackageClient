#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// WuLinData/HistoryHeroMember
struct HistoryHeroMember_t4989  : public Object_t
{
	// System.UInt64 WuLinData/HistoryHeroMember::guid
	uint64_t ___guid;
	// System.String WuLinData/HistoryHeroMember::name
	String_t* ___name;
	// System.Int32 WuLinData/HistoryHeroMember::position
	int32_t ___position;
	// System.Int32 WuLinData/HistoryHeroMember::LevelGroup
	int32_t ___LevelGroup;
};
