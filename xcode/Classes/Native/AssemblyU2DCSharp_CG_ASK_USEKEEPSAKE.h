#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_USEKEEPSAKE
struct CG_ASK_USEKEEPSAKE_t3533  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_USEKEEPSAKE::hasNumber
	bool ___hasNumber;
	// System.Int32 CG_ASK_USEKEEPSAKE::number_
	int32_t ___number_;
	// System.Boolean CG_ASK_USEKEEPSAKE::hasDataid
	bool ___hasDataid;
	// System.UInt64 CG_ASK_USEKEEPSAKE::dataid_
	uint64_t ___dataid_;
	// System.Int32 CG_ASK_USEKEEPSAKE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
