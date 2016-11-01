#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_FORCE_SETPOS
struct GC_FORCE_SETPOS_t3158  : public PacketDistributed_t2209
{
	// System.Boolean GC_FORCE_SETPOS::hasServerID
	bool ___hasServerID;
	// System.Int32 GC_FORCE_SETPOS::ServerID_
	int32_t ___ServerID_;
	// System.Boolean GC_FORCE_SETPOS::hasPosX
	bool ___hasPosX;
	// System.Int32 GC_FORCE_SETPOS::PosX_
	int32_t ___PosX_;
	// System.Boolean GC_FORCE_SETPOS::hasPosZ
	bool ___hasPosZ;
	// System.Int32 GC_FORCE_SETPOS::PosZ_
	int32_t ___PosZ_;
	// System.Int32 GC_FORCE_SETPOS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
