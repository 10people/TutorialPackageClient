#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SYSTEMSHOP_BUYBACK
struct CG_SYSTEMSHOP_BUYBACK_t2956  : public PacketDistributed_t2209
{
	// System.Boolean CG_SYSTEMSHOP_BUYBACK::hasNpcId
	bool ___hasNpcId;
	// System.Int32 CG_SYSTEMSHOP_BUYBACK::NpcId_
	int32_t ___NpcId_;
	// System.Boolean CG_SYSTEMSHOP_BUYBACK::hasShopId
	bool ___hasShopId;
	// System.Int32 CG_SYSTEMSHOP_BUYBACK::ShopId_
	int32_t ___ShopId_;
	// System.Boolean CG_SYSTEMSHOP_BUYBACK::hasItemGuid
	bool ___hasItemGuid;
	// System.UInt64 CG_SYSTEMSHOP_BUYBACK::ItemGuid_
	uint64_t ___ItemGuid_;
	// System.Int32 CG_SYSTEMSHOP_BUYBACK::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
