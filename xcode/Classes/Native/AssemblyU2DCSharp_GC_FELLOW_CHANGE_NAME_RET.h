#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_FELLOW_CHANGE_NAME_RET
struct GC_FELLOW_CHANGE_NAME_RET_t3255  : public PacketDistributed_t2209
{
	// System.Boolean GC_FELLOW_CHANGE_NAME_RET::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 GC_FELLOW_CHANGE_NAME_RET::fellowguid_
	uint64_t ___fellowguid_;
	// System.Int32 GC_FELLOW_CHANGE_NAME_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
