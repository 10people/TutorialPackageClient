#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CREATEROLE_RET
struct GC_CREATEROLE_RET_t2980  : public PacketDistributed_t2209
{
	// System.Boolean GC_CREATEROLE_RET::hasResult
	bool ___hasResult;
	// System.Int32 GC_CREATEROLE_RET::result_
	int32_t ___result_;
	// System.Boolean GC_CREATEROLE_RET::hasProfession
	bool ___hasProfession;
	// System.Int32 GC_CREATEROLE_RET::profession_
	int32_t ___profession_;
	// System.Boolean GC_CREATEROLE_RET::hasPlayerGuid
	bool ___hasPlayerGuid;
	// System.UInt64 GC_CREATEROLE_RET::playerGuid_
	uint64_t ___playerGuid_;
	// System.Boolean GC_CREATEROLE_RET::hasPlayerName
	bool ___hasPlayerName;
	// System.String GC_CREATEROLE_RET::playerName_
	String_t* ___playerName_;
	// System.Int32 GC_CREATEROLE_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
