#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_PAOHUAN_REQ_REFRESH
struct CG_PAOHUAN_REQ_REFRESH_t3624  : public PacketDistributed_t2209
{
	// System.Boolean CG_PAOHUAN_REQ_REFRESH::hasPaid
	bool ___hasPaid;
	// System.Int32 CG_PAOHUAN_REQ_REFRESH::Paid_
	int32_t ___Paid_;
	// System.Int32 CG_PAOHUAN_REQ_REFRESH::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
