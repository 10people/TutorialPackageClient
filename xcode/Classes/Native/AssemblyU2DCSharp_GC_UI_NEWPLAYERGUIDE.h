#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UI_NEWPLAYERGUIDE
struct GC_UI_NEWPLAYERGUIDE_t3121  : public PacketDistributed_t2209
{
	// System.Boolean GC_UI_NEWPLAYERGUIDE::hasUIName
	bool ___hasUIName;
	// System.String GC_UI_NEWPLAYERGUIDE::UIName_
	String_t* ___UIName_;
	// System.Boolean GC_UI_NEWPLAYERGUIDE::hasIndex
	bool ___hasIndex;
	// System.Int32 GC_UI_NEWPLAYERGUIDE::Index_
	int32_t ___Index_;
	// System.Int32 GC_UI_NEWPLAYERGUIDE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
