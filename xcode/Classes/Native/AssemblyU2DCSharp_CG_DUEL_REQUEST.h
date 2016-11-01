#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_DUEL_REQUEST
struct CG_DUEL_REQUEST_t3179  : public PacketDistributed_t2209
{
	// System.Boolean CG_DUEL_REQUEST::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_DUEL_REQUEST::guid_
	uint64_t ___guid_;
	// System.Int32 CG_DUEL_REQUEST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
