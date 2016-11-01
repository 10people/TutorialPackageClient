#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_RESTAURANT_UPDATE
struct GC_RESTAURANT_UPDATE_t3282  : public PacketDistributed_t2209
{
	// System.Boolean GC_RESTAURANT_UPDATE::hasRestaurantExp
	bool ___hasRestaurantExp;
	// System.Int32 GC_RESTAURANT_UPDATE::restaurantExp_
	int32_t ___restaurantExp_;
	// System.Boolean GC_RESTAURANT_UPDATE::hasRestaurantLevel
	bool ___hasRestaurantLevel;
	// System.Int32 GC_RESTAURANT_UPDATE::restaurantLevel_
	int32_t ___restaurantLevel_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_UPDATE::activeDeskIndexs_
	PopsicleList_1_t2923 * ___activeDeskIndexs_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_UPDATE::actionFinishTimers_
	PopsicleList_1_t2923 * ___actionFinishTimers_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_UPDATE::deskGuestIDs_
	PopsicleList_1_t2923 * ___deskGuestIDs_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_UPDATE::deskStates_
	PopsicleList_1_t2923 * ___deskStates_;
	// System.Boolean GC_RESTAURANT_UPDATE::hasFriendGuid
	bool ___hasFriendGuid;
	// System.UInt64 GC_RESTAURANT_UPDATE::friendGuid_
	uint64_t ___friendGuid_;
	// System.Boolean GC_RESTAURANT_UPDATE::hasName
	bool ___hasName;
	// System.String GC_RESTAURANT_UPDATE::name_
	String_t* ___name_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_RESTAURANT_UPDATE::deskFoodIDs_
	PopsicleList_1_t2923 * ___deskFoodIDs_;
	// System.Int32 GC_RESTAURANT_UPDATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
