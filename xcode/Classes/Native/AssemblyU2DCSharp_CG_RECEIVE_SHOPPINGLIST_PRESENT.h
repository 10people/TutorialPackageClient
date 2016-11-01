#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_RECEIVE_SHOPPINGLIST_PRESENT
struct CG_RECEIVE_SHOPPINGLIST_PRESENT_t3481  : public PacketDistributed_t2209
{
	// System.Boolean CG_RECEIVE_SHOPPINGLIST_PRESENT::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_RECEIVE_SHOPPINGLIST_PRESENT::Guid_
	uint64_t ___Guid_;
	// System.Int32 CG_RECEIVE_SHOPPINGLIST_PRESENT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
