#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_PUT_ITEM_STORAGEPACK
struct CG_PUT_ITEM_STORAGEPACK_t3386  : public PacketDistributed_t2209
{
	// System.Boolean CG_PUT_ITEM_STORAGEPACK::hasGuid
	bool ___hasGuid;
	// System.UInt64 CG_PUT_ITEM_STORAGEPACK::guid_
	uint64_t ___guid_;
	// System.Boolean CG_PUT_ITEM_STORAGEPACK::hasPage
	bool ___hasPage;
	// System.Int32 CG_PUT_ITEM_STORAGEPACK::page_
	int32_t ___page_;
	// System.Int32 CG_PUT_ITEM_STORAGEPACK::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
