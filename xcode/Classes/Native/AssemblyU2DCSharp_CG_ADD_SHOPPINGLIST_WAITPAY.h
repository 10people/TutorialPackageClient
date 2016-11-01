#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ADD_SHOPPINGLIST_WAITPAY
struct CG_ADD_SHOPPINGLIST_WAITPAY_t3484  : public PacketDistributed_t2209
{
	// System.Boolean CG_ADD_SHOPPINGLIST_WAITPAY::hasReceiverGUID
	bool ___hasReceiverGUID;
	// System.UInt64 CG_ADD_SHOPPINGLIST_WAITPAY::ReceiverGUID_
	uint64_t ___ReceiverGUID_;
	// System.Boolean CG_ADD_SHOPPINGLIST_WAITPAY::hasReceiverName
	bool ___hasReceiverName;
	// System.String CG_ADD_SHOPPINGLIST_WAITPAY::ReceiverName_
	String_t* ___ReceiverName_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_ADD_SHOPPINGLIST_WAITPAY::GoodsID_
	PopsicleList_1_t2923 * ___GoodsID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_ADD_SHOPPINGLIST_WAITPAY::GoodsCount_
	PopsicleList_1_t2923 * ___GoodsCount_;
	// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
