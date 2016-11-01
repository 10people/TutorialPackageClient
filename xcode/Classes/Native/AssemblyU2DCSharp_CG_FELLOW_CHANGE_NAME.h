#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_FELLOW_CHANGE_NAME
struct CG_FELLOW_CHANGE_NAME_t3254  : public PacketDistributed_t2209
{
	// System.Boolean CG_FELLOW_CHANGE_NAME::hasFellowguid
	bool ___hasFellowguid;
	// System.UInt64 CG_FELLOW_CHANGE_NAME::fellowguid_
	uint64_t ___fellowguid_;
	// System.Boolean CG_FELLOW_CHANGE_NAME::hasName
	bool ___hasName;
	// System.String CG_FELLOW_CHANGE_NAME::name_
	String_t* ___name_;
	// System.Int32 CG_FELLOW_CHANGE_NAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
