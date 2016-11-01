#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SELECTROLE_RET
struct GC_SELECTROLE_RET_t2982  : public PacketDistributed_t2209
{
	// System.Boolean GC_SELECTROLE_RET::hasResult
	bool ___hasResult;
	// System.Int32 GC_SELECTROLE_RET::result_
	int32_t ___result_;
	// System.Boolean GC_SELECTROLE_RET::hasPlayerGuid
	bool ___hasPlayerGuid;
	// System.UInt64 GC_SELECTROLE_RET::playerGuid_
	uint64_t ___playerGuid_;
	// System.Int32 GC_SELECTROLE_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
