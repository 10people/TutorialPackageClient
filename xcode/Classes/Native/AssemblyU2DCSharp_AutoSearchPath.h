#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<AutoSearchPoint>
struct List_1_t4539;
// System.String
struct String_t;
// Games.Events.GameEvent
struct GameEvent_t2137;
// System.Object
#include "mscorlib_System_Object.h"
// AutoSearchPath
struct AutoSearchPath_t4536  : public Object_t
{
	// System.Collections.Generic.List`1<AutoSearchPoint> AutoSearchPath::m_AutoSearchPointCache
	List_1_t4539 * ___m_AutoSearchPointCache;
	// System.String AutoSearchPath::m_AutoSearchTargetName
	String_t* ___m_AutoSearchTargetName;
	// Games.Events.GameEvent AutoSearchPath::m_FinishCallBackEvent
	GameEvent_t2137 * ___m_FinishCallBackEvent;
};
