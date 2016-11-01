#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_REQ_LEVELUP
struct CG_GUILD_REQ_LEVELUP_t3251  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_REQ_LEVELUP::hasLevel
	bool ___hasLevel;
	// System.Int32 CG_GUILD_REQ_LEVELUP::level_
	int32_t ___level_;
	// System.Int32 CG_GUILD_REQ_LEVELUP::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
