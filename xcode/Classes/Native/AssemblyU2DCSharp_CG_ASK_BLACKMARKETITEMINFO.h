#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_BLACKMARKETITEMINFO
struct CG_ASK_BLACKMARKETITEMINFO_t3401  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_BLACKMARKETITEMINFO::hasAskpage
	bool ___hasAskpage;
	// System.Int32 CG_ASK_BLACKMARKETITEMINFO::askpage_
	int32_t ___askpage_;
	// System.Int32 CG_ASK_BLACKMARKETITEMINFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
