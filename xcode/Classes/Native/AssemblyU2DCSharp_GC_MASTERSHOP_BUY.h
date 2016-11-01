#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MASTERSHOP_BUY
struct GC_MASTERSHOP_BUY_t3420  : public PacketDistributed_t2209
{
	// System.Boolean GC_MASTERSHOP_BUY::hasGoodID
	bool ___hasGoodID;
	// System.Int32 GC_MASTERSHOP_BUY::GoodID_
	int32_t ___GoodID_;
	// System.Boolean GC_MASTERSHOP_BUY::hasBuyNum
	bool ___hasBuyNum;
	// System.Int32 GC_MASTERSHOP_BUY::BuyNum_
	int32_t ___BuyNum_;
	// System.Boolean GC_MASTERSHOP_BUY::hasCost
	bool ___hasCost;
	// System.Int32 GC_MASTERSHOP_BUY::Cost_
	int32_t ___Cost_;
	// System.Int32 GC_MASTERSHOP_BUY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
