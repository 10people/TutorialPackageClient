#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_EQUIP_ITEM
struct CG_EQUIP_ITEM_t2977  : public PacketDistributed_t2209
{
	// System.Boolean CG_EQUIP_ITEM::hasEquipguid
	bool ___hasEquipguid;
	// System.UInt64 CG_EQUIP_ITEM::equipguid_
	uint64_t ___equipguid_;
	// System.Boolean CG_EQUIP_ITEM::hasIsEquipRemind
	bool ___hasIsEquipRemind;
	// System.Int32 CG_EQUIP_ITEM::IsEquipRemind_
	int32_t ___IsEquipRemind_;
	// System.Int32 CG_EQUIP_ITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
