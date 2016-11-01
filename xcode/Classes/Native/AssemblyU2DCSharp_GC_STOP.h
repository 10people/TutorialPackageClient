#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_STOP
struct GC_STOP_t2953  : public PacketDistributed_t2209
{
	// System.Boolean GC_STOP::hasServerid
	bool ___hasServerid;
	// System.Int32 GC_STOP::serverid_
	int32_t ___serverid_;
	// System.Boolean GC_STOP::hasPosserial
	bool ___hasPosserial;
	// System.Int32 GC_STOP::posserial_
	int32_t ___posserial_;
	// System.Boolean GC_STOP::hasPosx
	bool ___hasPosx;
	// System.Int32 GC_STOP::posx_
	int32_t ___posx_;
	// System.Boolean GC_STOP::hasPosz
	bool ___hasPosz;
	// System.Int32 GC_STOP::posz_
	int32_t ___posz_;
	// System.Int32 GC_STOP::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
