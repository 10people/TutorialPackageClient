#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_MOUNT_DATA
struct GC_MOUNT_DATA_t3010  : public PacketDistributed_t2209
{
	// System.Boolean GC_MOUNT_DATA::hasObjServerID
	bool ___hasObjServerID;
	// System.Int32 GC_MOUNT_DATA::ObjServerID_
	int32_t ___ObjServerID_;
	// System.Boolean GC_MOUNT_DATA::hasMountID
	bool ___hasMountID;
	// System.Int32 GC_MOUNT_DATA::MountID_
	int32_t ___MountID_;
	// System.Int32 GC_MOUNT_DATA::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
