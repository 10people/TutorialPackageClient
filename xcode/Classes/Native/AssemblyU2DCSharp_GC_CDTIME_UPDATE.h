#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CDTIME_UPDATE
struct GC_CDTIME_UPDATE_t2984  : public PacketDistributed_t2209
{
	// System.Boolean GC_CDTIME_UPDATE::hasCDTimeId
	bool ___hasCDTimeId;
	// System.Int32 GC_CDTIME_UPDATE::CDTimeId_
	int32_t ___CDTimeId_;
	// System.Boolean GC_CDTIME_UPDATE::hasCDTime
	bool ___hasCDTime;
	// System.Int32 GC_CDTIME_UPDATE::CDTime_
	int32_t ___CDTime_;
	// System.Int32 GC_CDTIME_UPDATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
