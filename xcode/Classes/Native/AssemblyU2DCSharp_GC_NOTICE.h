#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_NOTICE
struct GC_NOTICE_t2931  : public PacketDistributed_t2209
{
	// System.Boolean GC_NOTICE::hasNotice
	bool ___hasNotice;
	// System.String GC_NOTICE::notice_
	String_t* ___notice_;
	// System.Boolean GC_NOTICE::hasFilterRepeat
	bool ___hasFilterRepeat;
	// System.Int32 GC_NOTICE::filterRepeat_
	int32_t ___filterRepeat_;
	// System.Int32 GC_NOTICE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
