#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ADDFRIEND
struct GC_ADDFRIEND_t3027  : public PacketDistributed_t2209
{
	// System.Boolean GC_ADDFRIEND::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_ADDFRIEND::guid_
	uint64_t ___guid_;
	// System.Boolean GC_ADDFRIEND::hasName
	bool ___hasName;
	// System.String GC_ADDFRIEND::Name_
	String_t* ___Name_;
	// System.Boolean GC_ADDFRIEND::hasLevel
	bool ___hasLevel;
	// System.Int32 GC_ADDFRIEND::Level_
	int32_t ___Level_;
	// System.Boolean GC_ADDFRIEND::hasProf
	bool ___hasProf;
	// System.Int32 GC_ADDFRIEND::Prof_
	int32_t ___Prof_;
	// System.Boolean GC_ADDFRIEND::hasCombat
	bool ___hasCombat;
	// System.Int32 GC_ADDFRIEND::Combat_
	int32_t ___Combat_;
	// System.Boolean GC_ADDFRIEND::hasState
	bool ___hasState;
	// System.Int32 GC_ADDFRIEND::State_
	int32_t ___State_;
	// System.Boolean GC_ADDFRIEND::hasTimeInfo
	bool ___hasTimeInfo;
	// System.UInt32 GC_ADDFRIEND::TimeInfo_
	uint32_t ___TimeInfo_;
	// System.Int32 GC_ADDFRIEND::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
