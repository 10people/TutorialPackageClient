#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CONNECTED_HEARTBEAT
struct CG_CONNECTED_HEARTBEAT_t2929  : public PacketDistributed_t2209
{
	// System.Boolean CG_CONNECTED_HEARTBEAT::hasIsresponse
	bool ___hasIsresponse;
	// System.Int32 CG_CONNECTED_HEARTBEAT::isresponse_
	int32_t ___isresponse_;
	// System.Int32 CG_CONNECTED_HEARTBEAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
