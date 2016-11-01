#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_LEAVE
struct GC_GUILD_LEAVE_t3247  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_LEAVE::hasGuildGuid
	bool ___hasGuildGuid;
	// System.UInt64 GC_GUILD_LEAVE::guildGuid_
	uint64_t ___guildGuid_;
	// System.Int32 GC_GUILD_LEAVE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
