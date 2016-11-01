#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_FOLLOWSTATE
struct GC_UPDATE_FOLLOWSTATE_t3497  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_FOLLOWSTATE::hasObjID
	bool ___hasObjID;
	// System.Int32 GC_UPDATE_FOLLOWSTATE::ObjID_
	int32_t ___ObjID_;
	// System.Boolean GC_UPDATE_FOLLOWSTATE::hasFollowState
	bool ___hasFollowState;
	// System.Int32 GC_UPDATE_FOLLOWSTATE::FollowState_
	int32_t ___FollowState_;
	// System.Int32 GC_UPDATE_FOLLOWSTATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
