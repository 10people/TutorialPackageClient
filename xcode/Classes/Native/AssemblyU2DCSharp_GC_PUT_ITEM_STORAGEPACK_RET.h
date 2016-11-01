#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_PUT_ITEM_STORAGEPACK_RET
struct GC_PUT_ITEM_STORAGEPACK_RET_t3387  : public PacketDistributed_t2209
{
	// System.Boolean GC_PUT_ITEM_STORAGEPACK_RET::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_PUT_ITEM_STORAGEPACK_RET::guid_
	uint64_t ___guid_;
	// System.Boolean GC_PUT_ITEM_STORAGEPACK_RET::hasPage
	bool ___hasPage;
	// System.Int32 GC_PUT_ITEM_STORAGEPACK_RET::page_
	int32_t ___page_;
	// System.Boolean GC_PUT_ITEM_STORAGEPACK_RET::hasResult
	bool ___hasResult;
	// System.Int32 GC_PUT_ITEM_STORAGEPACK_RET::result_
	int32_t ___result_;
	// System.Int32 GC_PUT_ITEM_STORAGEPACK_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
