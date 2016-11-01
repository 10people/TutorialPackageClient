#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_CHANGE_PKLIST
struct GC_CHANGE_PKLIST_t3095  : public PacketDistributed_t2209
{
	// System.Boolean GC_CHANGE_PKLIST::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_CHANGE_PKLIST::objId_
	int32_t ___objId_;
	// System.Boolean GC_CHANGE_PKLIST::hasIsInPkList
	bool ___hasIsInPkList;
	// System.Int32 GC_CHANGE_PKLIST::isInPkList_
	int32_t ___isInPkList_;
	// System.Boolean GC_CHANGE_PKLIST::hasIsPKListEmpty
	bool ___hasIsPKListEmpty;
	// System.Int32 GC_CHANGE_PKLIST::isPKListEmpty_
	int32_t ___isPKListEmpty_;
	// System.Int32 GC_CHANGE_PKLIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
