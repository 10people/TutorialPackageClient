#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_KICK
struct CG_GUILD_KICK_t3248  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_KICK::hasKicked
	bool ___hasKicked;
	// System.UInt64 CG_GUILD_KICK::kicked_
	uint64_t ___kicked_;
	// System.Int32 CG_GUILD_KICK::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
