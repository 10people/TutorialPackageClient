#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_CREATE
struct CG_MASTER_CREATE_t3265  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_CREATE::hasMasterName
	bool ___hasMasterName;
	// System.String CG_MASTER_CREATE::masterName_
	String_t* ___masterName_;
	// System.Boolean CG_MASTER_CREATE::hasMasterNotice
	bool ___hasMasterNotice;
	// System.String CG_MASTER_CREATE::masterNotice_
	String_t* ___masterNotice_;
	// System.Int32 CG_MASTER_CREATE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
