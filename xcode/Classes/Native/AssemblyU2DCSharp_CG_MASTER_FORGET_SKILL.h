#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_FORGET_SKILL
struct CG_MASTER_FORGET_SKILL_t3277  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_FORGET_SKILL::hasSkillId
	bool ___hasSkillId;
	// System.Int32 CG_MASTER_FORGET_SKILL::skillId_
	int32_t ___skillId_;
	// System.Int32 CG_MASTER_FORGET_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
