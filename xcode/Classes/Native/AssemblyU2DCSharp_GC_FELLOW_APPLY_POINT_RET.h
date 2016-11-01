#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_FELLOW_APPLY_POINT_RET
struct GC_FELLOW_APPLY_POINT_RET_t3236  : public PacketDistributed_t2209
{
	// System.Boolean GC_FELLOW_APPLY_POINT_RET::hasResult
	bool ___hasResult;
	// System.Int32 GC_FELLOW_APPLY_POINT_RET::result_
	int32_t ___result_;
	// System.Boolean GC_FELLOW_APPLY_POINT_RET::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 GC_FELLOW_APPLY_POINT_RET::fellowguid_
	uint64_t ___fellowguid_;
	// System.Int32 GC_FELLOW_APPLY_POINT_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
