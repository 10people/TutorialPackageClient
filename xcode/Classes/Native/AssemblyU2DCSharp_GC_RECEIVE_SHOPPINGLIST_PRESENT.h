#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RECEIVE_SHOPPINGLIST_PRESENT
struct GC_RECEIVE_SHOPPINGLIST_PRESENT_t3482  : public PacketDistributed_t2209
{
	// System.Boolean GC_RECEIVE_SHOPPINGLIST_PRESENT::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_RECEIVE_SHOPPINGLIST_PRESENT::Guid_
	uint64_t ___Guid_;
	// System.Int32 GC_RECEIVE_SHOPPINGLIST_PRESENT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
