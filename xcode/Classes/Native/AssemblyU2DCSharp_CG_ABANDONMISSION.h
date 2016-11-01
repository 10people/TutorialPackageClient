#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ABANDONMISSION
struct CG_ABANDONMISSION_t2939  : public PacketDistributed_t2209
{
	// System.Boolean CG_ABANDONMISSION::hasMissionID
	bool ___hasMissionID;
	// System.Int32 CG_ABANDONMISSION::MissionID_
	int32_t ___MissionID_;
	// System.Int32 CG_ABANDONMISSION::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
