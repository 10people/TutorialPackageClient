#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_SETCOMMONFLAG
struct CG_ASK_SETCOMMONFLAG_t3206  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_SETCOMMONFLAG::hasNBits
	bool ___hasNBits;
	// System.Int32 CG_ASK_SETCOMMONFLAG::nBits_
	int32_t ___nBits_;
	// System.Boolean CG_ASK_SETCOMMONFLAG::hasNFlag
	bool ___hasNFlag;
	// System.Int32 CG_ASK_SETCOMMONFLAG::nFlag_
	int32_t ___nFlag_;
	// System.Int32 CG_ASK_SETCOMMONFLAG::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
