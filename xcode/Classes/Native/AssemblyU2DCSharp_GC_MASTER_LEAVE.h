#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTER_LEAVE
struct GC_MASTER_LEAVE_t3270  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTER_LEAVE::hasMasterGuid
	bool ___hasMasterGuid;
	// System.UInt64 GC_MASTER_LEAVE::masterGuid_
	uint64_t ___masterGuid_;
	// System.Boolean GC_MASTER_LEAVE::hasLevelType
	bool ___hasLevelType;
	// System.Int32 GC_MASTER_LEAVE::levelType_
	int32_t ___levelType_;
	// System.Int32 GC_MASTER_LEAVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
