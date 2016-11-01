#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SYSTEMSHOP_BUY
struct CG_SYSTEMSHOP_BUY_t2955  : public PacketDistributed_t2209
{
	// System.Boolean CG_SYSTEMSHOP_BUY::hasNpcId
	bool ___hasNpcId;
	// System.Int32 CG_SYSTEMSHOP_BUY::NpcId_
	int32_t ___NpcId_;
	// System.Boolean CG_SYSTEMSHOP_BUY::hasShopId
	bool ___hasShopId;
	// System.Int32 CG_SYSTEMSHOP_BUY::ShopId_
	int32_t ___ShopId_;
	// System.Boolean CG_SYSTEMSHOP_BUY::hasMercIndex
	bool ___hasMercIndex;
	// System.Int32 CG_SYSTEMSHOP_BUY::MercIndex_
	int32_t ___MercIndex_;
	// System.Boolean CG_SYSTEMSHOP_BUY::hasBuyNum
	bool ___hasBuyNum;
	// System.Int32 CG_SYSTEMSHOP_BUY::BuyNum_
	int32_t ___BuyNum_;
	// System.Int32 CG_SYSTEMSHOP_BUY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
