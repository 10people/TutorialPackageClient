#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_MASTER_REQ_CHANGE_NOTICE
struct CG_MASTER_REQ_CHANGE_NOTICE_t3264  : public PacketDistributed_t2209
{
	// System.Boolean CG_MASTER_REQ_CHANGE_NOTICE::hasMasterNotice
	bool ___hasMasterNotice;
	// System.String CG_MASTER_REQ_CHANGE_NOTICE::masterNotice_
	String_t* ___masterNotice_;
	// System.Int32 CG_MASTER_REQ_CHANGE_NOTICE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
