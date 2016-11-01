#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ADD_SHOPPINGLIST_WAITPAY
struct GC_ADD_SHOPPINGLIST_WAITPAY_t3485  : public PacketDistributed_t2209
{
	// System.Boolean GC_ADD_SHOPPINGLIST_WAITPAY::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_ADD_SHOPPINGLIST_WAITPAY::Guid_
	uint64_t ___Guid_;
	// System.Boolean GC_ADD_SHOPPINGLIST_WAITPAY::hasSenderName
	bool ___hasSenderName;
	// System.String GC_ADD_SHOPPINGLIST_WAITPAY::SenderName_
	String_t* ___SenderName_;
	// System.Boolean GC_ADD_SHOPPINGLIST_WAITPAY::hasCreateTime
	bool ___hasCreateTime;
	// System.Int32 GC_ADD_SHOPPINGLIST_WAITPAY::CreateTime_
	int32_t ___CreateTime_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_ADD_SHOPPINGLIST_WAITPAY::GoodsID_
	PopsicleList_1_t2923 * ___GoodsID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_ADD_SHOPPINGLIST_WAITPAY::GoodsCount_
	PopsicleList_1_t2923 * ___GoodsCount_;
	// System.Int32 GC_ADD_SHOPPINGLIST_WAITPAY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
