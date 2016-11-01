#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_REQ_INFO
struct CG_MASTER_REQ_INFO_t3262  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_REQ_INFO::hasRequester
	bool ___hasRequester;
	// System.UInt64 CG_MASTER_REQ_INFO::requester_
	uint64_t ___requester_;
	// System.Int32 CG_MASTER_REQ_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
