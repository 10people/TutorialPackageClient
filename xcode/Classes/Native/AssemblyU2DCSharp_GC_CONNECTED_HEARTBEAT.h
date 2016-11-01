#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CONNECTED_HEARTBEAT
struct GC_CONNECTED_HEARTBEAT_t2930  : public PacketDistributed_t2209
{
	// System.Boolean GC_CONNECTED_HEARTBEAT::hasServeransitime
	bool ___hasServeransitime;
	// System.Int32 GC_CONNECTED_HEARTBEAT::serveransitime_
	int32_t ___serveransitime_;
	// System.Int32 GC_CONNECTED_HEARTBEAT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
