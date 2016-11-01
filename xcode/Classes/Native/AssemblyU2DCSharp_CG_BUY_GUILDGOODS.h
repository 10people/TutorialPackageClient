#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_BUY_GUILDGOODS
struct CG_BUY_GUILDGOODS_t3258  : public PacketDistributed_t2209
{
	// System.Boolean CG_BUY_GUILDGOODS::hasGoodID
	bool ___hasGoodID;
	// System.Int32 CG_BUY_GUILDGOODS::GoodID_
	int32_t ___GoodID_;
	// System.Boolean CG_BUY_GUILDGOODS::hasBuyNum
	bool ___hasBuyNum;
	// System.Int32 CG_BUY_GUILDGOODS::BuyNum_
	int32_t ___BuyNum_;
	// System.Boolean CG_BUY_GUILDGOODS::hasGoodIndex
	bool ___hasGoodIndex;
	// System.Int32 CG_BUY_GUILDGOODS::GoodIndex_
	int32_t ___GoodIndex_;
	// System.Int32 CG_BUY_GUILDGOODS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
