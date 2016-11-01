#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CALL_FELLOW_RET
struct GC_CALL_FELLOW_RET_t3064  : public PacketDistributed_t2209
{
	// System.Boolean GC_CALL_FELLOW_RET::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_CALL_FELLOW_RET::guid_
	uint64_t ___guid_;
	// System.Boolean GC_CALL_FELLOW_RET::hasObjid
	bool ___hasObjid;
	// System.Int32 GC_CALL_FELLOW_RET::objid_
	int32_t ___objid_;
	// System.Int32 GC_CALL_FELLOW_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
