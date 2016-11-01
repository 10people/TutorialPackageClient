#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_OP_QINGGONGPOINT
struct GC_OP_QINGGONGPOINT_t3103  : public PacketDistributed_t2209
{
	// System.Boolean GC_OP_QINGGONGPOINT::hasName
	bool ___hasName;
	// System.String GC_OP_QINGGONGPOINT::name_
	String_t* ___name_;
	// System.Boolean GC_OP_QINGGONGPOINT::hasIsShow
	bool ___hasIsShow;
	// System.Int32 GC_OP_QINGGONGPOINT::isShow_
	int32_t ___isShow_;
	// System.Int32 GC_OP_QINGGONGPOINT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
