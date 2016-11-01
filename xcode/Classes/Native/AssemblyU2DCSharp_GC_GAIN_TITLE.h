#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_GAIN_TITLE
struct GC_GAIN_TITLE_t3005  : public PacketDistributed_t2209
{
	// System.Boolean GC_GAIN_TITLE::hasTitleIndex
	bool ___hasTitleIndex;
	// System.Int32 GC_GAIN_TITLE::TitleIndex_
	int32_t ___TitleIndex_;
	// System.Boolean GC_GAIN_TITLE::hasTitleID
	bool ___hasTitleID;
	// System.Int32 GC_GAIN_TITLE::TitleID_
	int32_t ___TitleID_;
	// System.Boolean GC_GAIN_TITLE::hasUserDefFullTitleName
	bool ___hasUserDefFullTitleName;
	// System.String GC_GAIN_TITLE::UserDefFullTitleName_
	String_t* ___UserDefFullTitleName_;
	// System.Boolean GC_GAIN_TITLE::hasActiveTitle
	bool ___hasActiveTitle;
	// System.Int32 GC_GAIN_TITLE::ActiveTitle_
	int32_t ___ActiveTitle_;
	// System.Boolean GC_GAIN_TITLE::hasGainTime
	bool ___hasGainTime;
	// System.Int32 GC_GAIN_TITLE::GainTime_
	int32_t ___GainTime_;
	// System.Int32 GC_GAIN_TITLE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
