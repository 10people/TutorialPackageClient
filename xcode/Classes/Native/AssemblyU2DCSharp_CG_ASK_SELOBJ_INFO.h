#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_SELOBJ_INFO
struct CG_ASK_SELOBJ_INFO_t3057  : public PacketDistributed_t2209
{
	// System.Boolean CG_ASK_SELOBJ_INFO::hasObjId
	bool ___hasObjId;
	// System.Int32 CG_ASK_SELOBJ_INFO::objId_
	int32_t ___objId_;
	// System.Boolean CG_ASK_SELOBJ_INFO::hasSeleobjId
	bool ___hasSeleobjId;
	// System.Int32 CG_ASK_SELOBJ_INFO::seleobjId_
	int32_t ___seleobjId_;
	// System.Int32 CG_ASK_SELOBJ_INFO::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
