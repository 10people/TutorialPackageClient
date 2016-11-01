#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_MARRAGE
struct CG_REQ_MARRAGE_t3354  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_MARRAGE::hasType
	bool ___hasType;
	// System.Int32 CG_REQ_MARRAGE::type_
	int32_t ___type_;
	// System.Boolean CG_REQ_MARRAGE::hasId
	bool ___hasId;
	// System.UInt64 CG_REQ_MARRAGE::id_
	uint64_t ___id_;
	// System.Int32 CG_REQ_MARRAGE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
