#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ADDBLACKLIST
struct GC_ADDBLACKLIST_t3037  : public PacketDistributed_t2209
{
	// System.Boolean GC_ADDBLACKLIST::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_ADDBLACKLIST::guid_
	uint64_t ___guid_;
	// System.Boolean GC_ADDBLACKLIST::hasName
	bool ___hasName;
	// System.String GC_ADDBLACKLIST::Name_
	String_t* ___Name_;
	// System.Boolean GC_ADDBLACKLIST::hasLevel
	bool ___hasLevel;
	// System.Int32 GC_ADDBLACKLIST::Level_
	int32_t ___Level_;
	// System.Boolean GC_ADDBLACKLIST::hasProf
	bool ___hasProf;
	// System.Int32 GC_ADDBLACKLIST::Prof_
	int32_t ___Prof_;
	// System.Boolean GC_ADDBLACKLIST::hasCombat
	bool ___hasCombat;
	// System.Int32 GC_ADDBLACKLIST::Combat_
	int32_t ___Combat_;
	// System.Boolean GC_ADDBLACKLIST::hasState
	bool ___hasState;
	// System.Int32 GC_ADDBLACKLIST::State_
	int32_t ___State_;
	// System.Boolean GC_ADDBLACKLIST::hasTimeInfo
	bool ___hasTimeInfo;
	// System.UInt32 GC_ADDBLACKLIST::TimeInfo_
	uint32_t ___TimeInfo_;
	// System.Int32 GC_ADDBLACKLIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
