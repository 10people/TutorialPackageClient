#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FELLOW_TALENTSKILL_LEVELUP
struct CG_FELLOW_TALENTSKILL_LEVELUP_t3584  : public PacketDistributed_t2209
{
	// System.Boolean CG_FELLOW_TALENTSKILL_LEVELUP::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_FELLOW_TALENTSKILL_LEVELUP::guid_
	uint64_t ___guid_;
	// System.Boolean CG_FELLOW_TALENTSKILL_LEVELUP::hasSkillid
	bool ___hasSkillid;
	// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::skillid_
	int32_t ___skillid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_FELLOW_TALENTSKILL_LEVELUP::skillbookid_
	PopsicleList_1_t2923 * ___skillbookid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_FELLOW_TALENTSKILL_LEVELUP::skillbookcount_
	PopsicleList_1_t2923 * ___skillbookcount_;
	// System.Int32 CG_FELLOW_TALENTSKILL_LEVELUP::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
