#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTER_ACTIVE_SKILL
struct GC_MASTER_ACTIVE_SKILL_t3280  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTER_ACTIVE_SKILL::hasSkillId
	bool ___hasSkillId;
	// System.Int32 GC_MASTER_ACTIVE_SKILL::skillId_
	int32_t ___skillId_;
	// System.Int32 GC_MASTER_ACTIVE_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
