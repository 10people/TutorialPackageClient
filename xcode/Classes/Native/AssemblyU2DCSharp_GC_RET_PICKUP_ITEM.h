#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_PICKUP_ITEM
struct GC_RET_PICKUP_ITEM_t3052  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_PICKUP_ITEM::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_RET_PICKUP_ITEM::objId_
	int32_t ___objId_;
	// System.Boolean GC_RET_PICKUP_ITEM::hasItemId
	bool ___hasItemId;
	// System.Int32 GC_RET_PICKUP_ITEM::itemId_
	int32_t ___itemId_;
	// System.Int32 GC_RET_PICKUP_ITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
