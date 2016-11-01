#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// GC_UPDATE_DEF_TITLE
struct GC_UPDATE_DEF_TITLE_t3415  : public PacketDistributed_t2209
{
	// System.Boolean GC_UPDATE_DEF_TITLE::hasTitleID
	bool ___hasTitleID;
	// System.Int32 GC_UPDATE_DEF_TITLE::TitleID_
	int32_t ___TitleID_;
	// System.Boolean GC_UPDATE_DEF_TITLE::hasUserDefFullTitleName
	bool ___hasUserDefFullTitleName;
	// System.String GC_UPDATE_DEF_TITLE::UserDefFullTitleName_
	String_t* ___UserDefFullTitleName_;
	// System.Int32 GC_UPDATE_DEF_TITLE::memoizedSerializedSize
	int32_t ___memoizedSerializedSize;
};
