#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RESTAURANT_DESTUPDATE
struct GC_RESTAURANT_DESTUPDATE_t3283  : public PacketDistributed_t2209
{
	// System.Boolean GC_RESTAURANT_DESTUPDATE::hasDestIndex
	bool ___hasDestIndex;
	// System.Int32 GC_RESTAURANT_DESTUPDATE::destIndex_
	int32_t ___destIndex_;
	// System.Boolean GC_RESTAURANT_DESTUPDATE::hasActionFinishTimer
	bool ___hasActionFinishTimer;
	// System.Int32 GC_RESTAURANT_DESTUPDATE::actionFinishTimer_
	int32_t ___actionFinishTimer_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_DESTUPDATE::deskGuestIDs_
	PopsicleList_1_t2923 * ___deskGuestIDs_;
	// System.Boolean GC_RESTAURANT_DESTUPDATE::hasDeskState
	bool ___hasDeskState;
	// System.Int32 GC_RESTAURANT_DESTUPDATE::deskState_
	int32_t ___deskState_;
	// System.Boolean GC_RESTAURANT_DESTUPDATE::hasFriendGuid
	bool ___hasFriendGuid;
	// System.UInt64 GC_RESTAURANT_DESTUPDATE::friendGuid_
	uint64_t ___friendGuid_;
	// System.Boolean GC_RESTAURANT_DESTUPDATE::hasDeskFoodID
	bool ___hasDeskFoodID;
	// System.Int32 GC_RESTAURANT_DESTUPDATE::deskFoodID_
	int32_t ___deskFoodID_;
	// System.Int32 GC_RESTAURANT_DESTUPDATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
