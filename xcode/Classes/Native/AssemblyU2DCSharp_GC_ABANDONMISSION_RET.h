#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ABANDONMISSION_RET
struct GC_ABANDONMISSION_RET_t2940  : public PacketDistributed_t2209
{
	// System.Boolean GC_ABANDONMISSION_RET::hasMissionID
	bool ___hasMissionID;
	// System.Int32 GC_ABANDONMISSION_RET::MissionID_
	int32_t ___MissionID_;
	// System.Boolean GC_ABANDONMISSION_RET::hasRet
	bool ___hasRet;
	// System.Int32 GC_ABANDONMISSION_RET::Ret_
	int32_t ___Ret_;
	// System.Int32 GC_ABANDONMISSION_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
