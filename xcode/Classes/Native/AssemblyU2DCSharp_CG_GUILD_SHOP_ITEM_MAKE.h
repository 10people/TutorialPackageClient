#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GUILD_SHOP_ITEM_MAKE
struct CG_GUILD_SHOP_ITEM_MAKE_t3452  : public PacketDistributed_t2209
{
	// System.Boolean CG_GUILD_SHOP_ITEM_MAKE::hasItemID
	bool ___hasItemID;
	// System.Int32 CG_GUILD_SHOP_ITEM_MAKE::ItemID_
	int32_t ___ItemID_;
	// System.Int32 CG_GUILD_SHOP_ITEM_MAKE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
