#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ADD_SHOPPINGLIST_PRESENT
struct CG_ADD_SHOPPINGLIST_PRESENT_t3479  : public PacketDistributed_t2209
{
	// System.Boolean CG_ADD_SHOPPINGLIST_PRESENT::hasReceiverGUID
	bool ___hasReceiverGUID;
	// System.UInt64 CG_ADD_SHOPPINGLIST_PRESENT::ReceiverGUID_
	uint64_t ___ReceiverGUID_;
	// System.Boolean CG_ADD_SHOPPINGLIST_PRESENT::hasReceiverName
	bool ___hasReceiverName;
	// System.String CG_ADD_SHOPPINGLIST_PRESENT::ReceiverName_
	String_t* ___ReceiverName_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_ADD_SHOPPINGLIST_PRESENT::GoodsID_
	PopsicleList_1_t2923 * ___GoodsID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> CG_ADD_SHOPPINGLIST_PRESENT::GoodsCount_
	PopsicleList_1_t2923 * ___GoodsCount_;
	// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
