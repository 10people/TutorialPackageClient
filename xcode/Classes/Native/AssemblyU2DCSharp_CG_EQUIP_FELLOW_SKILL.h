#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_EQUIP_FELLOW_SKILL
struct CG_EQUIP_FELLOW_SKILL_t3152  : public PacketDistributed_t2209
{
	// System.Boolean CG_EQUIP_FELLOW_SKILL::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 CG_EQUIP_FELLOW_SKILL::fellowguid_
	uint64_t ___fellowguid_;
	// System.Boolean CG_EQUIP_FELLOW_SKILL::hasSkillId
	bool ___hasSkillId;
	// System.Int32 CG_EQUIP_FELLOW_SKILL::skillId_
	int32_t ___skillId_;
	// System.Int32 CG_EQUIP_FELLOW_SKILL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
