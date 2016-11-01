#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SYNC_VITALITY
struct GC_SYNC_VITALITY_t3625  : public PacketDistributed_t2209
{
	// System.Boolean GC_SYNC_VITALITY::hasVitality
	bool ___hasVitality;
	// System.Int32 GC_SYNC_VITALITY::Vitality_
	int32_t ___Vitality_;
	// System.Boolean GC_SYNC_VITALITY::hasOpen
	bool ___hasOpen;
	// System.Int32 GC_SYNC_VITALITY::Open_
	int32_t ___Open_;
	// System.Boolean GC_SYNC_VITALITY::hasLimit
	bool ___hasLimit;
	// System.Int32 GC_SYNC_VITALITY::Limit_
	int32_t ___Limit_;
	// System.Boolean GC_SYNC_VITALITY::hasEnough
	bool ___hasEnough;
	// System.Int32 GC_SYNC_VITALITY::Enough_
	int32_t ___Enough_;
	// System.Int32 GC_SYNC_VITALITY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
