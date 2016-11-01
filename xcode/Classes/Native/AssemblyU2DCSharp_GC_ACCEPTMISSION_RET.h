#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ACCEPTMISSION_RET
struct GC_ACCEPTMISSION_RET_t2936  : public PacketDistributed_t2209
{
	// System.Boolean GC_ACCEPTMISSION_RET::hasMissionID
	bool ___hasMissionID;
	// System.Int32 GC_ACCEPTMISSION_RET::MissionID_
	int32_t ___MissionID_;
	// System.Boolean GC_ACCEPTMISSION_RET::hasQualityType
	bool ___hasQualityType;
	// System.Int32 GC_ACCEPTMISSION_RET::QualityType_
	int32_t ___QualityType_;
	// System.Boolean GC_ACCEPTMISSION_RET::hasRet
	bool ___hasRet;
	// System.Int32 GC_ACCEPTMISSION_RET::Ret_
	int32_t ___Ret_;
	// System.Int32 GC_ACCEPTMISSION_RET::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
