#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FELLOW_RESET_POINT
struct CG_FELLOW_RESET_POINT_t3336  : public PacketDistributed_t2209
{
	// System.Boolean CG_FELLOW_RESET_POINT::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 CG_FELLOW_RESET_POINT::fellowguid_
	uint64_t ___fellowguid_;
	// System.Int32 CG_FELLOW_RESET_POINT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
