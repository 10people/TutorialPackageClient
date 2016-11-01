#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// HuaShanPVPData/MercenaryInfo
struct MercenaryInfo_t1904 
{
	// System.UInt64 HuaShanPVPData/MercenaryInfo::guid
	uint64_t ___guid;
	// System.String HuaShanPVPData/MercenaryInfo::name
	String_t* ___name;
	// System.Int32 HuaShanPVPData/MercenaryInfo::relationship
	int32_t ___relationship;
	// System.Int32 HuaShanPVPData/MercenaryInfo::cost
	int32_t ___cost;
	// System.Int32 HuaShanPVPData/MercenaryInfo::profession
	int32_t ___profession;
	// System.Int32 HuaShanPVPData/MercenaryInfo::combat
	int32_t ___combat;
};
// Native definition for marshalling of: HuaShanPVPData/MercenaryInfo
struct MercenaryInfo_t1904_marshaled
{
	uint64_t ___guid;
	char* ___name;
	int32_t ___relationship;
	int32_t ___cost;
	int32_t ___profession;
	int32_t ___combat;
};
