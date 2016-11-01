#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_COMPLETEMISSION_RET
struct GC_COMPLETEMISSION_RET_t2938  : public PacketDistributed_t2209
{
	// System.Boolean GC_COMPLETEMISSION_RET::hasMissionID
	bool ___hasMissionID;
	// System.Int32 GC_COMPLETEMISSION_RET::MissionID_
	int32_t ___MissionID_;
	// System.Boolean GC_COMPLETEMISSION_RET::hasRet
	bool ___hasRet;
	// System.Int32 GC_COMPLETEMISSION_RET::Ret_
	int32_t ___Ret_;
	// System.Int32 GC_COMPLETEMISSION_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
