#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_GAIN_FELLOW_COUNT
struct GC_UPDATE_GAIN_FELLOW_COUNT_t3168  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_GAIN_FELLOW_COUNT::hasNormalCount
	bool ___hasNormalCount;
	// System.Int32 GC_UPDATE_GAIN_FELLOW_COUNT::normalCount_
	int32_t ___normalCount_;
	// System.Boolean GC_UPDATE_GAIN_FELLOW_COUNT::hasYuanbaoCount
	bool ___hasYuanbaoCount;
	// System.Int32 GC_UPDATE_GAIN_FELLOW_COUNT::yuanbaoCount_
	int32_t ___yuanbaoCount_;
	// System.Boolean GC_UPDATE_GAIN_FELLOW_COUNT::hasNormalCD
	bool ___hasNormalCD;
	// System.Int32 GC_UPDATE_GAIN_FELLOW_COUNT::normalCD_
	int32_t ___normalCD_;
	// System.Boolean GC_UPDATE_GAIN_FELLOW_COUNT::hasFreeCount
	bool ___hasFreeCount;
	// System.Int32 GC_UPDATE_GAIN_FELLOW_COUNT::freeCount_
	int32_t ___freeCount_;
	// System.Int32 GC_UPDATE_GAIN_FELLOW_COUNT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
