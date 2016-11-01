#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CYPAY_SUCCESS
struct CG_CYPAY_SUCCESS_t3327  : public PacketDistributed_t2209
{
	// System.Boolean CG_CYPAY_SUCCESS::hasRoleGuid
	bool ___hasRoleGuid;
	// System.String CG_CYPAY_SUCCESS::roleGuid_
	String_t* ___roleGuid_;
	// System.Boolean CG_CYPAY_SUCCESS::hasType
	bool ___hasType;
	// System.Int32 CG_CYPAY_SUCCESS::type_
	int32_t ___type_;
	// System.Int32 CG_CYPAY_SUCCESS::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
