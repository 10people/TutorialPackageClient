#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t5985;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5992;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5982;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t5980;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t5979  : public UIBehaviour_t5983
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t5985 * ___m_RaycastResultCache;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t5992 * ___m_AxisEventData;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t5982 * ___m_EventSystem;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t5980 * ___m_BaseEventData;
};
