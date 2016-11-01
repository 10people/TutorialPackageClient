#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CONSIGNSALEITEM
struct CG_CONSIGNSALEITEM_t3195  : public PacketDistributed_t2209
{
	// System.Boolean CG_CONSIGNSALEITEM::hasItemguid
	bool ___hasItemguid;
	// System.UInt64 CG_CONSIGNSALEITEM::itemguid_
	uint64_t ___itemguid_;
	// System.Boolean CG_CONSIGNSALEITEM::hasItemcount
	bool ___hasItemcount;
	// System.Int32 CG_CONSIGNSALEITEM::itemcount_
	int32_t ___itemcount_;
	// System.Boolean CG_CONSIGNSALEITEM::hasItemprice
	bool ___hasItemprice;
	// System.Int32 CG_CONSIGNSALEITEM::itemprice_
	int32_t ___itemprice_;
	// System.Boolean CG_CONSIGNSALEITEM::hasCurpage
	bool ___hasCurpage;
	// System.Int32 CG_CONSIGNSALEITEM::curpage_
	int32_t ___curpage_;
	// System.Int32 CG_CONSIGNSALEITEM::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
