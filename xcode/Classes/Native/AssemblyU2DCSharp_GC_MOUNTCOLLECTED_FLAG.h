#pragma once
#include <stdint.h>
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32>
struct PopsicleList_1_t2923;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MOUNTCOLLECTED_FLAG
struct GC_MOUNTCOLLECTED_FLAG_t3009  : public PacketDistributed_t2209
{
	// System.Boolean GC_MOUNTCOLLECTED_FLAG::hasAutoMountFlag
	bool ___hasAutoMountFlag;
	// System.Int32 GC_MOUNTCOLLECTED_FLAG::AutoMountFlag_
	int32_t ___AutoMountFlag_;
	// System.Boolean GC_MOUNTCOLLECTED_FLAG::hasCurMountID
	bool ___hasCurMountID;
	// System.Int32 GC_MOUNTCOLLECTED_FLAG::CurMountID_
	int32_t ___CurMountID_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::MountCollectedFlag_
	PopsicleList_1_t2923 * ___MountCollectedFlag_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::MountLeftTime_
	PopsicleList_1_t2923 * ___MountLeftTime_;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::MountRemindFlag_
	PopsicleList_1_t2923 * ___MountRemindFlag_;
	// System.Int32 GC_MOUNTCOLLECTED_FLAG::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
