#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GET_NEWSERVERMOUNT
struct CG_GET_NEWSERVERMOUNT_t3583  : public PacketDistributed_t2209
{
	// System.Boolean CG_GET_NEWSERVERMOUNT::hasId
	bool ___hasId;
	// System.Int32 CG_GET_NEWSERVERMOUNT::id_
	int32_t ___id_;
	// System.Int32 CG_GET_NEWSERVERMOUNT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
