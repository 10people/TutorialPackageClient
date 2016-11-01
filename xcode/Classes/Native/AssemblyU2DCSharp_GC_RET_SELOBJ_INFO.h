#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RET_SELOBJ_INFO
struct GC_RET_SELOBJ_INFO_t3058  : public PacketDistributed_t2209
{
	// System.Boolean GC_RET_SELOBJ_INFO::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_RET_SELOBJ_INFO::objId_
	int32_t ___objId_;
	// System.Boolean GC_RET_SELOBJ_INFO::hasSeleobjId
	bool ___hasSeleobjId;
	// System.Int32 GC_RET_SELOBJ_INFO::seleobjId_
	int32_t ___seleobjId_;
	// System.Int32 GC_RET_SELOBJ_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
