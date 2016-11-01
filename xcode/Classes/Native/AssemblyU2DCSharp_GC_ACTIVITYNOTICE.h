#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ACTIVITYNOTICE
struct GC_ACTIVITYNOTICE_t3335  : public PacketDistributed_t2209
{
	// System.Boolean GC_ACTIVITYNOTICE::hasStrNotice
	bool ___hasStrNotice;
	// System.String GC_ACTIVITYNOTICE::strNotice_
	String_t* ___strNotice_;
	// System.Int32 GC_ACTIVITYNOTICE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
