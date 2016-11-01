#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_DAILYLUCKYDRAW_UPDATE
struct GC_DAILYLUCKYDRAW_UPDATE_t3210  : public PacketDistributed_t2209
{
	// System.Boolean GC_DAILYLUCKYDRAW_UPDATE::hasDrawfreetimes
	bool ___hasDrawfreetimes;
	// System.Int32 GC_DAILYLUCKYDRAW_UPDATE::drawfreetimes_
	int32_t ___drawfreetimes_;
	// System.Boolean GC_DAILYLUCKYDRAW_UPDATE::hasDrawfreecdtime
	bool ___hasDrawfreecdtime;
	// System.Int32 GC_DAILYLUCKYDRAW_UPDATE::drawfreecdtime_
	int32_t ___drawfreecdtime_;
	// System.Int32 GC_DAILYLUCKYDRAW_UPDATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
