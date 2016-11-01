#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_REQUEST_CDKEY
struct CG_REQUEST_CDKEY_t3382  : public PacketDistributed_t2209
{
	// System.Boolean CG_REQUEST_CDKEY::hasCdkeystr
	bool ___hasCdkeystr;
	// System.String CG_REQUEST_CDKEY::cdkeystr_
	String_t* ___cdkeystr_;
	// System.Int32 CG_REQUEST_CDKEY::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
