#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_LEAVE
struct CG_GUILD_LEAVE_t3246  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_LEAVE::hasRequester
	bool ___hasRequester;
	// System.UInt64 CG_GUILD_LEAVE::requester_
	uint64_t ___requester_;
	// System.Int32 CG_GUILD_LEAVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
