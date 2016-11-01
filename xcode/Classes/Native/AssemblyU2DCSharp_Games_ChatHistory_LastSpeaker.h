#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// Games.ChatHistory.LastSpeaker
struct LastSpeaker_t4558 
{
	// System.UInt64 Games.ChatHistory.LastSpeaker::m_Guid
	uint64_t ___m_Guid;
	// System.String Games.ChatHistory.LastSpeaker::m_Name
	String_t* ___m_Name;
};
// Native definition for marshalling of: Games.ChatHistory.LastSpeaker
struct LastSpeaker_t4558_marshaled
{
	uint64_t ___m_Guid;
	char* ___m_Name;
};
