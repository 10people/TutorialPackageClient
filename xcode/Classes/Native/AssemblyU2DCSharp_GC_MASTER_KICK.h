#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTER_KICK
struct GC_MASTER_KICK_t3272  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTER_KICK::hasKicked
	bool ___hasKicked;
	// System.UInt64 GC_MASTER_KICK::kicked_
	uint64_t ___kicked_;
	// System.Int32 GC_MASTER_KICK::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
