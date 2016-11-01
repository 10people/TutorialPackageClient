#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SYNC_ACTIVETITLE
struct GC_SYNC_ACTIVETITLE_t3008  : public PacketDistributed_t2209
{
	// System.Boolean GC_SYNC_ACTIVETITLE::hasServerid
	bool ___hasServerid;
	// System.Int32 GC_SYNC_ACTIVETITLE::serverid_
	int32_t ___serverid_;
	// System.Boolean GC_SYNC_ACTIVETITLE::hasTitleid
	bool ___hasTitleid;
	// System.Int32 GC_SYNC_ACTIVETITLE::titleid_
	int32_t ___titleid_;
	// System.Boolean GC_SYNC_ACTIVETITLE::hasTitlename
	bool ___hasTitlename;
	// System.String GC_SYNC_ACTIVETITLE::titlename_
	String_t* ___titlename_;
	// System.Int32 GC_SYNC_ACTIVETITLE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
