#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SKILL_USE
struct CG_SKILL_USE_t2983  : public PacketDistributed_t2209
{
	// System.Boolean CG_SKILL_USE::hasSkillId
	bool ___hasSkillId;
	// System.Int32 CG_SKILL_USE::skillId_
	int32_t ___skillId_;
	// System.Boolean CG_SKILL_USE::hasTargetId
	bool ___hasTargetId;
	// System.Int32 CG_SKILL_USE::targetId_
	int32_t ___targetId_;
	// System.Int32 CG_SKILL_USE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
