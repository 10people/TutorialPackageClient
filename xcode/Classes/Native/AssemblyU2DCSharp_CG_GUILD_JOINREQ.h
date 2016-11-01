#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_JOINREQ
struct CG_GUILD_JOINREQ_t3617  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_JOINREQ::hasNeedReserve
	bool ___hasNeedReserve;
	// System.Int32 CG_GUILD_JOINREQ::NeedReserve_
	int32_t ___NeedReserve_;
	// System.Int32 CG_GUILD_JOINREQ::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
