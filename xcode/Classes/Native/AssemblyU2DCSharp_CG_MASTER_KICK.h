#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_KICK
struct CG_MASTER_KICK_t3271  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_KICK::hasKicked
	bool ___hasKicked;
	// System.UInt64 CG_MASTER_KICK::kicked_
	uint64_t ___kicked_;
	// System.Int32 CG_MASTER_KICK::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
