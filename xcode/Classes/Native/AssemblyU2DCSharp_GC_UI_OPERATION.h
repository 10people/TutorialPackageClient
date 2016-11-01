#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UI_OPERATION
struct GC_UI_OPERATION_t3114  : public PacketDistributed_t2209
{
	// System.Boolean GC_UI_OPERATION::hasOperation
	bool ___hasOperation;
	// System.Int32 GC_UI_OPERATION::operation_
	int32_t ___operation_;
	// System.Boolean GC_UI_OPERATION::hasTableID
	bool ___hasTableID;
	// System.Int32 GC_UI_OPERATION::tableID_
	int32_t ___tableID_;
	// System.Int32 GC_UI_OPERATION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
