#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_PICKUP_ITEM
struct CG_ASK_PICKUP_ITEM_t3051  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_PICKUP_ITEM::hasObjId
	bool ___hasObjId;
	// System.Int32 CG_ASK_PICKUP_ITEM::objId_
	int32_t ___objId_;
	// System.Int32 CG_ASK_PICKUP_ITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
