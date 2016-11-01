#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_HEROCODE
struct GC_RET_HEROCODE_t3554  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_HEROCODE::hasHeroCode
	bool ___hasHeroCode;
	// System.String GC_RET_HEROCODE::HeroCode_
	String_t* ___HeroCode_;
	// System.Int32 GC_RET_HEROCODE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
