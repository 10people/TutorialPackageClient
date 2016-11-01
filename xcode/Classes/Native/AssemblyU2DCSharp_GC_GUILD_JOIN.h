#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_JOIN
struct GC_GUILD_JOIN_t3245  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_JOIN::hasGuildGuid
	bool ___hasGuildGuid;
	// System.UInt64 GC_GUILD_JOIN::guildGuid_
	uint64_t ___guildGuid_;
	// System.Int32 GC_GUILD_JOIN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
