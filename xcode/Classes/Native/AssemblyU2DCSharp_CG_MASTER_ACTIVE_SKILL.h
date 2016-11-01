#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_ACTIVE_SKILL
struct CG_MASTER_ACTIVE_SKILL_t3275  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_ACTIVE_SKILL::hasSkillId
	bool ___hasSkillId;
	// System.Int32 CG_MASTER_ACTIVE_SKILL::skillId_
	int32_t ___skillId_;
	// System.Boolean CG_MASTER_ACTIVE_SKILL::hasSkillName
	bool ___hasSkillName;
	// System.String CG_MASTER_ACTIVE_SKILL::skillName_
	String_t* ___skillName_;
	// System.Int32 CG_MASTER_ACTIVE_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
