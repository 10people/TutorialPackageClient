#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64>
struct PopsicleList_1_t2922;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SYSTEMSHOP_SELL
struct CG_SYSTEMSHOP_SELL_t2957  : public PacketDistributed_t2209
{
	// System.Boolean CG_SYSTEMSHOP_SELL::hasPackage
	bool ___hasPackage;
	// System.Int32 CG_SYSTEMSHOP_SELL::Package_
	int32_t ___Package_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.UInt64> CG_SYSTEMSHOP_SELL::ItemGuid_
	PopsicleList_1_t2922 * ___ItemGuid_;
	// System.Int32 CG_SYSTEMSHOP_SELL::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
