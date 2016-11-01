#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_NEWSERVERMOUNT
struct GC_UPDATE_NEWSERVERMOUNT_t3605  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_NEWSERVERMOUNT::hasSeconds
	bool ___hasSeconds;
	// System.Int32 GC_UPDATE_NEWSERVERMOUNT::seconds_
	int32_t ___seconds_;
	// System.Int32 GC_UPDATE_NEWSERVERMOUNT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
