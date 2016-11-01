#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_REQ_LIST
struct CG_GUILD_REQ_LIST_t3237  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_REQ_LIST::hasRequester
	bool ___hasRequester;
	// System.UInt64 CG_GUILD_REQ_LIST::requester_
	uint64_t ___requester_;
	// System.Int32 CG_GUILD_REQ_LIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
