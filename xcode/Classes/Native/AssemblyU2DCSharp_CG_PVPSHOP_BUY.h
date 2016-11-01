#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_PVPSHOP_BUY
struct CG_PVPSHOP_BUY_t3649  : public PacketDistributed_t2209
{
	// System.Boolean CG_PVPSHOP_BUY::hasITEMID
	bool ___hasITEMID;
	// System.Int32 CG_PVPSHOP_BUY::ITEMID_
	int32_t ___ITEMID_;
	// System.Boolean CG_PVPSHOP_BUY::hasITEMCOUNT
	bool ___hasITEMCOUNT;
	// System.Int32 CG_PVPSHOP_BUY::ITEMCOUNT_
	int32_t ___ITEMCOUNT_;
	// System.Int32 CG_PVPSHOP_BUY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
