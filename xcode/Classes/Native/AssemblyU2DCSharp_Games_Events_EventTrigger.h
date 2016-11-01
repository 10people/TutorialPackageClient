#pragma once
#include <stdint.h>
// Games.Events.GameEvent
struct GameEvent_t2137;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.Events.EventTrigger
struct EventTrigger_t2141  : public MonoBehaviour_t18
{
	// Games.Events.GameEvent Games.Events.EventTrigger::m_TriggerEvent
	GameEvent_t2137 * ___m_TriggerEvent;
	// System.Boolean Games.Events.EventTrigger::m_bCanTrigger
	bool ___m_bCanTrigger;
	// System.Single Games.Events.EventTrigger::m_CoolDown
	float ___m_CoolDown;
	// System.Single Games.Events.EventTrigger::m_fLastTriggerTime
	float ___m_fLastTriggerTime;
};
