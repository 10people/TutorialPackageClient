#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FELLOW_ELEMENTSKILL_LEARN
struct CG_FELLOW_ELEMENTSKILL_LEARN_t3580  : public PacketDistributed_t2209
{
	// System.Boolean CG_FELLOW_ELEMENTSKILL_LEARN::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_FELLOW_ELEMENTSKILL_LEARN::guid_
	uint64_t ___guid_;
	// System.Boolean CG_FELLOW_ELEMENTSKILL_LEARN::hasSkillid
	bool ___hasSkillid;
	// System.Int32 CG_FELLOW_ELEMENTSKILL_LEARN::skillid_
	int32_t ___skillid_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_FELLOW_ELEMENTSKILL_LEARN::locked_
	PopsicleList_1_t2923 * ___locked_;
	// System.Int32 CG_FELLOW_ELEMENTSKILL_LEARN::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
