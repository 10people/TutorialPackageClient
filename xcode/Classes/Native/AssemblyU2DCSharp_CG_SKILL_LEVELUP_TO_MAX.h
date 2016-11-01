#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SKILL_LEVELUP_TO_MAX
struct CG_SKILL_LEVELUP_TO_MAX_t1748  : public PacketDistributed_t2209
{
	// System.Boolean CG_SKILL_LEVELUP_TO_MAX::hasSkillID
	bool ___hasSkillID;
	// System.Int32 CG_SKILL_LEVELUP_TO_MAX::SkillID_
	int32_t ___SkillID_;
	// System.Boolean CG_SKILL_LEVELUP_TO_MAX::hasMaxLevel
	bool ___hasMaxLevel;
	// System.Int32 CG_SKILL_LEVELUP_TO_MAX::MaxLevel_
	int32_t ___MaxLevel_;
	// System.Boolean CG_SKILL_LEVELUP_TO_MAX::hasConsume
	bool ___hasConsume;
	// System.Int32 CG_SKILL_LEVELUP_TO_MAX::Consume_
	int32_t ___Consume_;
	// System.Boolean CG_SKILL_LEVELUP_TO_MAX::hasCoin
	bool ___hasCoin;
	// System.Int32 CG_SKILL_LEVELUP_TO_MAX::Coin_
	int32_t ___Coin_;
	// System.Int32 CG_SKILL_LEVELUP_TO_MAX::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
