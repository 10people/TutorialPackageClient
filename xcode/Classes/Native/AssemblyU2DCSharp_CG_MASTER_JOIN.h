#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_JOIN
struct CG_MASTER_JOIN_t3267  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_JOIN::hasMasterGuid
	bool ___hasMasterGuid;
	// System.UInt64 CG_MASTER_JOIN::masterGuid_
	uint64_t ___masterGuid_;
	// System.Int32 CG_MASTER_JOIN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
