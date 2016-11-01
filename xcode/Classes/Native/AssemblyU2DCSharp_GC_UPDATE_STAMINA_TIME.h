#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_STAMINA_TIME
struct GC_UPDATE_STAMINA_TIME_t3313  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_STAMINA_TIME::hasRemainTime
	bool ___hasRemainTime;
	// System.Int32 GC_UPDATE_STAMINA_TIME::RemainTime_
	int32_t ___RemainTime_;
	// System.Int32 GC_UPDATE_STAMINA_TIME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
