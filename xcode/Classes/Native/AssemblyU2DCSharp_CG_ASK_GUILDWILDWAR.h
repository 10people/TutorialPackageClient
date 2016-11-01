#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_GUILDWILDWAR
struct CG_ASK_GUILDWILDWAR_t3423  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_GUILDWILDWAR::hasTargetGuildGuid
	bool ___hasTargetGuildGuid;
	// System.UInt64 CG_ASK_GUILDWILDWAR::targetGuildGuid_
	uint64_t ___targetGuildGuid_;
	// System.Int32 CG_ASK_GUILDWILDWAR::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
