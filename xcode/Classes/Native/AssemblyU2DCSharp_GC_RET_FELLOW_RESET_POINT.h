#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_FELLOW_RESET_POINT
struct GC_RET_FELLOW_RESET_POINT_t3337  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_FELLOW_RESET_POINT::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 GC_RET_FELLOW_RESET_POINT::fellowguid_
	uint64_t ___fellowguid_;
	// System.Boolean GC_RET_FELLOW_RESET_POINT::hasFellowpoint
	bool ___hasFellowpoint;
	// System.Int32 GC_RET_FELLOW_RESET_POINT::fellowpoint_
	int32_t ___fellowpoint_;
	// System.Int32 GC_RET_FELLOW_RESET_POINT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
