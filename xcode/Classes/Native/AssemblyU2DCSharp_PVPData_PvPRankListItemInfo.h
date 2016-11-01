#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// PVPData/PvPRankListItemInfo
struct PvPRankListItemInfo_t1917 
{
	// System.UInt64 PVPData/PvPRankListItemInfo::id
	uint64_t ___id;
	// System.String PVPData/PvPRankListItemInfo::name
	String_t* ___name;
	// System.Int32 PVPData/PvPRankListItemInfo::score
	int32_t ___score;
	// System.Int32 PVPData/PvPRankListItemInfo::pos
	int32_t ___pos;
	// System.Int32 PVPData/PvPRankListItemInfo::com
	int32_t ___com;
	// System.Int32 PVPData/PvPRankListItemInfo::level
	int32_t ___level;
	// System.Int32 PVPData/PvPRankListItemInfo::profession
	int32_t ___profession;
	// System.Int32 PVPData/PvPRankListItemInfo::zhenqi
	int32_t ___zhenqi;
};
// Native definition for marshalling of: PVPData/PvPRankListItemInfo
struct PvPRankListItemInfo_t1917_marshaled
{
	uint64_t ___id;
	char* ___name;
	int32_t ___score;
	int32_t ___pos;
	int32_t ___com;
	int32_t ___level;
	int32_t ___profession;
	int32_t ___zhenqi;
};
