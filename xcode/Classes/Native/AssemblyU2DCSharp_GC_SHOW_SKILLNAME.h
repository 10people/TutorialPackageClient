#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_SHOW_SKILLNAME
struct GC_SHOW_SKILLNAME_t3346  : public PacketDistributed_t2209
{
	// System.Boolean GC_SHOW_SKILLNAME::hasSkillid
	bool ___hasSkillid;
	// System.Int32 GC_SHOW_SKILLNAME::skillid_
	int32_t ___skillid_;
	// System.Boolean GC_SHOW_SKILLNAME::hasSenderid
	bool ___hasSenderid;
	// System.Int32 GC_SHOW_SKILLNAME::senderid_
	int32_t ___senderid_;
	// System.Boolean GC_SHOW_SKILLNAME::hasSkillname
	bool ___hasSkillname;
	// System.String GC_SHOW_SKILLNAME::skillname_
	String_t* ___skillname_;
	// System.Int32 GC_SHOW_SKILLNAME::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
