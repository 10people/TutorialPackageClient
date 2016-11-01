#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_ADDHATELIST
struct GC_ADDHATELIST_t3414  : public PacketDistributed_t2209
{
	// System.Boolean GC_ADDHATELIST::hasGuid
	bool ___hasGuid;
	// System.UInt64 GC_ADDHATELIST::guid_
	uint64_t ___guid_;
	// System.Boolean GC_ADDHATELIST::hasName
	bool ___hasName;
	// System.String GC_ADDHATELIST::Name_
	String_t* ___Name_;
	// System.Boolean GC_ADDHATELIST::hasLevel
	bool ___hasLevel;
	// System.Int32 GC_ADDHATELIST::Level_
	int32_t ___Level_;
	// System.Boolean GC_ADDHATELIST::hasProf
	bool ___hasProf;
	// System.Int32 GC_ADDHATELIST::Prof_
	int32_t ___Prof_;
	// System.Boolean GC_ADDHATELIST::hasCombat
	bool ___hasCombat;
	// System.Int32 GC_ADDHATELIST::Combat_
	int32_t ___Combat_;
	// System.Boolean GC_ADDHATELIST::hasState
	bool ___hasState;
	// System.Int32 GC_ADDHATELIST::State_
	int32_t ___State_;
	// System.Boolean GC_ADDHATELIST::hasTimeInfo
	bool ___hasTimeInfo;
	// System.UInt32 GC_ADDHATELIST::TimeInfo_
	uint32_t ___TimeInfo_;
	// System.Int32 GC_ADDHATELIST::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
