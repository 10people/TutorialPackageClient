#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_UNEQUIP_SWORDSMAN
struct CG_UNEQUIP_SWORDSMAN_t3332  : public PacketDistributed_t2209
{
	// System.Boolean CG_UNEQUIP_SWORDSMAN::hasSwordsmanguid
	bool ___hasSwordsmanguid;
	// System.UInt64 CG_UNEQUIP_SWORDSMAN::swordsmanguid_
	uint64_t ___swordsmanguid_;
	// System.Int32 CG_UNEQUIP_SWORDSMAN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
