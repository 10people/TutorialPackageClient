#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTER_JOIN
struct GC_MASTER_JOIN_t3268  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTER_JOIN::hasMasterGuid
	bool ___hasMasterGuid;
	// System.UInt64 GC_MASTER_JOIN::masterGuid_
	uint64_t ___masterGuid_;
	// System.Int32 GC_MASTER_JOIN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
