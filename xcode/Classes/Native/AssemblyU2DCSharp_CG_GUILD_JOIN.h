#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_JOIN
struct CG_GUILD_JOIN_t3244  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_JOIN::hasGuildGuid
	bool ___hasGuildGuid;
	// System.UInt64 CG_GUILD_JOIN::guildGuid_
	uint64_t ___guildGuid_;
	// System.Int32 CG_GUILD_JOIN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
