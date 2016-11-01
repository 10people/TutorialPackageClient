#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_INVITE
struct CG_GUILD_INVITE_t3372  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_INVITE::hasInvitedGuid
	bool ___hasInvitedGuid;
	// System.UInt64 CG_GUILD_INVITE::invitedGuid_
	uint64_t ___invitedGuid_;
	// System.Int32 CG_GUILD_INVITE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
