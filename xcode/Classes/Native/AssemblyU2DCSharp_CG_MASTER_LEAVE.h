#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_LEAVE
struct CG_MASTER_LEAVE_t3269  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_LEAVE::hasRequester
	bool ___hasRequester;
	// System.UInt64 CG_MASTER_LEAVE::requester_
	uint64_t ___requester_;
	// System.Int32 CG_MASTER_LEAVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
