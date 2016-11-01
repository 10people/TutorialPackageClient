#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_APPROVE_RESERVE
struct CG_GUILD_APPROVE_RESERVE_t3250  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_APPROVE_RESERVE::hasApprover
	bool ___hasApprover;
	// System.UInt64 CG_GUILD_APPROVE_RESERVE::approver_
	uint64_t ___approver_;
	// System.Boolean CG_GUILD_APPROVE_RESERVE::hasIsAgree
	bool ___hasIsAgree;
	// System.Int32 CG_GUILD_APPROVE_RESERVE::isAgree_
	int32_t ___isAgree_;
	// System.Int32 CG_GUILD_APPROVE_RESERVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
