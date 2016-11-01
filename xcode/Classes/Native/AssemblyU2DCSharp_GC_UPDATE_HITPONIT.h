#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_HITPONIT
struct GC_UPDATE_HITPONIT_t3127  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_HITPONIT::hasHitponit
	bool ___hasHitponit;
	// System.Int32 GC_UPDATE_HITPONIT::hitponit_
	int32_t ___hitponit_;
	// System.Boolean GC_UPDATE_HITPONIT::hasIsCritical
	bool ___hasIsCritical;
	// System.Int32 GC_UPDATE_HITPONIT::isCritical_
	int32_t ___isCritical_;
	// System.Int32 GC_UPDATE_HITPONIT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
