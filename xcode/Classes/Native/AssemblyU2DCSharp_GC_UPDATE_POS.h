#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_POS
struct GC_UPDATE_POS_t3471  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_POS::hasObjId
	bool ___hasObjId;
	// System.Int32 GC_UPDATE_POS::objId_
	int32_t ___objId_;
	// System.Boolean GC_UPDATE_POS::hasPos_x
	bool ___hasPos_x;
	// System.Int32 GC_UPDATE_POS::pos_x_
	int32_t ___pos_x_;
	// System.Boolean GC_UPDATE_POS::hasPos_z
	bool ___hasPos_z;
	// System.Int32 GC_UPDATE_POS::pos_z_
	int32_t ___pos_z_;
	// System.Int32 GC_UPDATE_POS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
