#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GUILD_SHOP_ITEM_MAKE
struct GC_GUILD_SHOP_ITEM_MAKE_t3453  : public PacketDistributed_t2209
{
	// System.Boolean GC_GUILD_SHOP_ITEM_MAKE::hasItemID
	bool ___hasItemID;
	// System.Int32 GC_GUILD_SHOP_ITEM_MAKE::ItemID_
	int32_t ___ItemID_;
	// System.Boolean GC_GUILD_SHOP_ITEM_MAKE::hasMakeNum
	bool ___hasMakeNum;
	// System.Int32 GC_GUILD_SHOP_ITEM_MAKE::MakeNum_
	int32_t ___MakeNum_;
	// System.Boolean GC_GUILD_SHOP_ITEM_MAKE::hasPrice
	bool ___hasPrice;
	// System.Int32 GC_GUILD_SHOP_ITEM_MAKE::Price_
	int32_t ___Price_;
	// System.Boolean GC_GUILD_SHOP_ITEM_MAKE::hasGuildWealth
	bool ___hasGuildWealth;
	// System.Int32 GC_GUILD_SHOP_ITEM_MAKE::GuildWealth_
	int32_t ___GuildWealth_;
	// System.Int32 GC_GUILD_SHOP_ITEM_MAKE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
