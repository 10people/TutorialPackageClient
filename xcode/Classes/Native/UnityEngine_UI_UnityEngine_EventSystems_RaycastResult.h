#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t6037;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t5986 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t9 * ___m_GameObject;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t6037 * ___module;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder;
};
