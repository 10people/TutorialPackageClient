#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_CREATEROLE
struct CG_CREATEROLE_t2979  : public PacketDistributed_t2209
{
	// System.Boolean CG_CREATEROLE::hasType
	bool ___hasType;
	// System.Int32 CG_CREATEROLE::type_
	int32_t ___type_;
	// System.Boolean CG_CREATEROLE::hasName
	bool ___hasName;
	// System.String CG_CREATEROLE::name_
	String_t* ___name_;
	// System.Int32 CG_CREATEROLE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
