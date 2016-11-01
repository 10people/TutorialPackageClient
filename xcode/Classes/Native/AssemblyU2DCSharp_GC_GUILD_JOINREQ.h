#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_JOINREQ
struct GC_GUILD_JOINREQ_t3618  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_JOINREQ::hasNeedReserve
	bool ___hasNeedReserve;
	// System.Int32 GC_GUILD_JOINREQ::NeedReserve_
	int32_t ___NeedReserve_;
	// System.Int32 GC_GUILD_JOINREQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
