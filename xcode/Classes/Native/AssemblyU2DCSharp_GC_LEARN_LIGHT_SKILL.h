#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_LEARN_LIGHT_SKILL
struct GC_LEARN_LIGHT_SKILL_t3462  : public PacketDistributed_t2209
{
	// System.Boolean GC_LEARN_LIGHT_SKILL::hasUserGuid
	bool ___hasUserGuid;
	// System.UInt64 GC_LEARN_LIGHT_SKILL::userGuid_
	uint64_t ___userGuid_;
	// System.Boolean GC_LEARN_LIGHT_SKILL::hasSkillLevel
	bool ___hasSkillLevel;
	// System.Int32 GC_LEARN_LIGHT_SKILL::skillLevel_
	int32_t ___skillLevel_;
	// System.Int32 GC_LEARN_LIGHT_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
