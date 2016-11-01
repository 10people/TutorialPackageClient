#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTERSHOP_BUY
struct CG_MASTERSHOP_BUY_t3419  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTERSHOP_BUY::hasGoodID
	bool ___hasGoodID;
	// System.Int32 CG_MASTERSHOP_BUY::GoodID_
	int32_t ___GoodID_;
	// System.Boolean CG_MASTERSHOP_BUY::hasBuyNum
	bool ___hasBuyNum;
	// System.Int32 CG_MASTERSHOP_BUY::BuyNum_
	int32_t ___BuyNum_;
	// System.Int32 CG_MASTERSHOP_BUY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
