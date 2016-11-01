#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SNS_INVITE_CODE
struct CG_SNS_INVITE_CODE_t3360  : public PacketDistributed_t2209
{
	// System.Boolean CG_SNS_INVITE_CODE::hasCode
	bool ___hasCode;
	// System.String CG_SNS_INVITE_CODE::code_
	String_t* ___code_;
	// System.Int32 CG_SNS_INVITE_CODE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
