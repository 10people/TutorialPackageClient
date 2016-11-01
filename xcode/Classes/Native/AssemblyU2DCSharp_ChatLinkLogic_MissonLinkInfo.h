#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// ChatLinkLogic/MissonLinkInfo
struct MissonLinkInfo_t1182 
{
	// System.Int32 ChatLinkLogic/MissonLinkInfo::missionId
	int32_t ___missionId;
	// System.String ChatLinkLogic/MissonLinkInfo::missionIcon
	String_t* ___missionIcon;
	// System.String ChatLinkLogic/MissonLinkInfo::missionName
	String_t* ___missionName;
	// System.String ChatLinkLogic/MissonLinkInfo::missionDesc
	String_t* ___missionDesc;
	// System.String ChatLinkLogic/MissonLinkInfo::missionLevel
	String_t* ___missionLevel;
	// System.Int32 ChatLinkLogic/MissonLinkInfo::missionAwardId
	int32_t ___missionAwardId;
};
// Native definition for marshalling of: ChatLinkLogic/MissonLinkInfo
struct MissonLinkInfo_t1182_marshaled
{
	int32_t ___missionId;
	char* ___missionIcon;
	char* ___missionName;
	char* ___missionDesc;
	char* ___missionLevel;
	int32_t ___missionAwardId;
};
