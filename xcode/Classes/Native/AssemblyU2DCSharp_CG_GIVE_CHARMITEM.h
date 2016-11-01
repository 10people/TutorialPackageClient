#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GIVE_CHARMITEM
struct CG_GIVE_CHARMITEM_t3546  : public PacketDistributed_t2209
{
	// System.Boolean CG_GIVE_CHARMITEM::hasUserguid
	bool ___hasUserguid;
	// System.UInt64 CG_GIVE_CHARMITEM::userguid_
	uint64_t ___userguid_;
	// System.Boolean CG_GIVE_CHARMITEM::hasItemid
	bool ___hasItemid;
	// System.Int32 CG_GIVE_CHARMITEM::itemid_
	int32_t ___itemid_;
	// System.Boolean CG_GIVE_CHARMITEM::hasItemcount
	bool ___hasItemcount;
	// System.Int32 CG_GIVE_CHARMITEM::itemcount_
	int32_t ___itemcount_;
	// System.Int32 CG_GIVE_CHARMITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
