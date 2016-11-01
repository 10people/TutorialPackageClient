#pragma once
#include <stdint.h>
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQ_POWERUP
struct CG_REQ_POWERUP_t3338  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQ_POWERUP::hasType
	bool ___hasType;
	// System.Int32 CG_REQ_POWERUP::type_
	int32_t ___type_;
	// System.Boolean CG_REQ_POWERUP::hasFlag
	bool ___hasFlag;
	// System.Int32 CG_REQ_POWERUP::flag_
	int32_t ___flag_;
	// System.Int32 CG_REQ_POWERUP::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
