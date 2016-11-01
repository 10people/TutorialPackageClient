#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MOUNT_UNMOUNT
struct CG_MOUNT_UNMOUNT_t3014  : public PacketDistributed_t2209
{
	// System.Boolean CG_MOUNT_UNMOUNT::hasMountID
	bool ___hasMountID;
	// System.Int32 CG_MOUNT_UNMOUNT::MountID_
	int32_t ___MountID_;
	// System.Int32 CG_MOUNT_UNMOUNT::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
