#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_SHOP_ITEM_LIST
struct CG_GUILD_SHOP_ITEM_LIST_t3444  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_SHOP_ITEM_LIST::hasFlag
	bool ___hasFlag;
	// System.Int32 CG_GUILD_SHOP_ITEM_LIST::flag_
	int32_t ___flag_;
	// System.Int32 CG_GUILD_SHOP_ITEM_LIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
