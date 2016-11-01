#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// TabController
struct TabController_t1209;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TabButton
struct TabButton_t1210  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject TabButton::objHighLight
	GameObject_t9 * ___objHighLight;
	// UnityEngine.GameObject TabButton::objNormal
	GameObject_t9 * ___objNormal;
	// UnityEngine.GameObject TabButton::targetObject
	GameObject_t9 * ___targetObject;
	// TabController TabButton::m_curController
	TabController_t1209 * ___m_curController;
};
