#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_USE_HEROCODE
struct CG_USE_HEROCODE_t3555  : public PacketDistributed_t2209
{
	// System.Boolean CG_USE_HEROCODE::hasHeroCode
	bool ___hasHeroCode;
	// System.String CG_USE_HEROCODE::HeroCode_
	String_t* ___HeroCode_;
	// System.Int32 CG_USE_HEROCODE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
