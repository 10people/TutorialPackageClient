#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_CHANGENAME
struct CG_REQ_CHANGENAME_t3392  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_CHANGENAME::hasNametype
	bool ___hasNametype;
	// System.Int32 CG_REQ_CHANGENAME::nametype_
	int32_t ___nametype_;
	// System.Boolean CG_REQ_CHANGENAME::hasChangename
	bool ___hasChangename;
	// System.String CG_REQ_CHANGENAME::changename_
	String_t* ___changename_;
	// System.Int32 CG_REQ_CHANGENAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
