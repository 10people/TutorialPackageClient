#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_USE_SKILL
struct GC_RET_USE_SKILL_t3059  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_USE_SKILL::hasSkillId
	bool ___hasSkillId;
	// System.Int32 GC_RET_USE_SKILL::skillId_
	int32_t ___skillId_;
	// System.Boolean GC_RET_USE_SKILL::hasSenderId
	bool ___hasSenderId;
	// System.Int32 GC_RET_USE_SKILL::senderId_
	int32_t ___senderId_;
	// System.Boolean GC_RET_USE_SKILL::hasTargetId
	bool ___hasTargetId;
	// System.Int32 GC_RET_USE_SKILL::TargetId_
	int32_t ___TargetId_;
	// System.Boolean GC_RET_USE_SKILL::hasSkillfailType
	bool ___hasSkillfailType;
	// System.Int32 GC_RET_USE_SKILL::skillfailType_
	int32_t ___skillfailType_;
	// System.Boolean GC_RET_USE_SKILL::hasSkillname
	bool ___hasSkillname;
	// System.String GC_RET_USE_SKILL::skillname_
	String_t* ___skillname_;
	// System.Boolean GC_RET_USE_SKILL::hasFixedSkillId
	bool ___hasFixedSkillId;
	// System.Int32 GC_RET_USE_SKILL::fixedSkillId_
	int32_t ___fixedSkillId_;
	// System.Int32 GC_RET_USE_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
