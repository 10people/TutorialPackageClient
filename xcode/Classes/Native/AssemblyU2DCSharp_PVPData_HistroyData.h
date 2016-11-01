#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// PVPData/HistroyData
struct HistroyData_t4925 
{
	// System.UInt64 PVPData/HistroyData::guid
	uint64_t ___guid;
	// System.Int32 PVPData/HistroyData::rankPos
	int32_t ___rankPos;
	// System.UInt32 PVPData/HistroyData::occurTime
	uint32_t ___occurTime;
	// System.Int32 PVPData/HistroyData::isLose
	int32_t ___isLose;
	// System.Int32 PVPData/HistroyData::isActive
	int32_t ___isActive;
	// System.String PVPData/HistroyData::opponentName
	String_t* ___opponentName;
};
// Native definition for marshalling of: PVPData/HistroyData
struct HistroyData_t4925_marshaled
{
	uint64_t ___guid;
	int32_t ___rankPos;
	uint32_t ___occurTime;
	int32_t ___isLose;
	int32_t ___isActive;
	char* ___opponentName;
};
