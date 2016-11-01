#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SERVER_SERIOUSERROR
struct GC_SERVER_SERIOUSERROR_t3055  : public PacketDistributed_t2209
{
	// System.Boolean GC_SERVER_SERIOUSERROR::hasErrorType
	bool ___hasErrorType;
	// System.Int32 GC_SERVER_SERIOUSERROR::errorType_
	int32_t ___errorType_;
	// System.Int32 GC_SERVER_SERIOUSERROR::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
