#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_GOLDMONEYSHOPTIME
struct GC_UPDATE_GOLDMONEYSHOPTIME_t3636  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_GOLDMONEYSHOPTIME::hasSeconds
	bool ___hasSeconds;
	// System.Int32 GC_UPDATE_GOLDMONEYSHOPTIME::seconds_
	int32_t ___seconds_;
	// System.Int32 GC_UPDATE_GOLDMONEYSHOPTIME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
