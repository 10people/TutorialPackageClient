#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_UNEQUIP_ITEM
struct CG_UNEQUIP_ITEM_t2978  : public PacketDistributed_t2209
{
	// System.Boolean CG_UNEQUIP_ITEM::hasEquipguid
	bool ___hasEquipguid;
	// System.UInt64 CG_UNEQUIP_ITEM::equipguid_
	uint64_t ___equipguid_;
	// System.Int32 CG_UNEQUIP_ITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
