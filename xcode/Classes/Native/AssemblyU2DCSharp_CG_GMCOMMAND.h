#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_GMCOMMAND
struct CG_GMCOMMAND_t3045  : public PacketDistributed_t2209
{
	// System.Boolean CG_GMCOMMAND::hasCmd
	bool ___hasCmd;
	// System.String CG_GMCOMMAND::cmd_
	String_t* ___cmd_;
	// System.Int32 CG_GMCOMMAND::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
