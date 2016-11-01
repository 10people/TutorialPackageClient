#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CANCELCONSIGNSALEITEM
struct CG_CANCELCONSIGNSALEITEM_t3196  : public PacketDistributed_t2209
{
	// System.Boolean CG_CANCELCONSIGNSALEITEM::hasItemguid
	bool ___hasItemguid;
	// System.UInt64 CG_CANCELCONSIGNSALEITEM::itemguid_
	uint64_t ___itemguid_;
	// System.Boolean CG_CANCELCONSIGNSALEITEM::hasCurpage
	bool ___hasCurpage;
	// System.Int32 CG_CANCELCONSIGNSALEITEM::curpage_
	int32_t ___curpage_;
	// System.Int32 CG_CANCELCONSIGNSALEITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
