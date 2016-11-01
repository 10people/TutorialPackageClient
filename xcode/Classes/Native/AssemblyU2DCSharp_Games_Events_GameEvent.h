#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t2136;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_EVENT_D.h"
// Games.Events.GameEvent
struct GameEvent_t2137  : public Object_t
{
	// Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE Games.Events.GameEvent::m_idEvent
	int32_t ___m_idEvent;
	// System.Collections.Generic.List`1<System.Int32> Games.Events.GameEvent::m_listIntParam
	List_1_t90 * ___m_listIntParam;
	// System.Collections.Generic.List`1<System.Single> Games.Events.GameEvent::m_listFloatParam
	List_1_t2136 * ___m_listFloatParam;
	// System.Collections.Generic.List`1<System.String> Games.Events.GameEvent::m_listStringParam
	List_1_t1333 * ___m_listStringParam;
	// System.Boolean Games.Events.GameEvent::m_bIsDelay
	bool ___m_bIsDelay;
	// System.Single Games.Events.GameEvent::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single Games.Events.GameEvent::m_fCreateTime
	float ___m_fCreateTime;
};
