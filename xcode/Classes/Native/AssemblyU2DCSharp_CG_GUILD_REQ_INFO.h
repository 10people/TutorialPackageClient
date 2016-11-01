#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_REQ_INFO
struct CG_GUILD_REQ_INFO_t3239  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_REQ_INFO::hasRequester
	bool ___hasRequester;
	// System.UInt64 CG_GUILD_REQ_INFO::requester_
	uint64_t ___requester_;
	// System.Int32 CG_GUILD_REQ_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
