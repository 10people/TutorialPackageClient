#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UNEQUIP_FELLOW_SKILL_RET
struct GC_UNEQUIP_FELLOW_SKILL_RET_t3155  : public PacketDistributed_t2209
{
	// System.Boolean GC_UNEQUIP_FELLOW_SKILL_RET::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 GC_UNEQUIP_FELLOW_SKILL_RET::fellowguid_
	uint64_t ___fellowguid_;
	// System.Boolean GC_UNEQUIP_FELLOW_SKILL_RET::hasSkillId
	bool ___hasSkillId;
	// System.Int32 GC_UNEQUIP_FELLOW_SKILL_RET::skillId_
	int32_t ___skillId_;
	// System.Int32 GC_UNEQUIP_FELLOW_SKILL_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
