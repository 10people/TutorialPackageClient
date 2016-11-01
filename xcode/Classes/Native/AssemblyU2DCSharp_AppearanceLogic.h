#pragma once
#include <stdint.h>
// AppearanceLogic
struct AppearanceLogic_t1208;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AppearanceLogic
struct AppearanceLogic_t1208  : public MonoBehaviour_t18
{
	// TabController AppearanceLogic::m_Tabs
	TabController_t1209 * ___m_Tabs;
	// UnityEngine.GameObject AppearanceLogic::m_FashionPage
	GameObject_t9 * ___m_FashionPage;
	// UnityEngine.GameObject AppearanceLogic::m_MountPage
	GameObject_t9 * ___m_MountPage;
	// UnityEngine.GameObject AppearanceLogic::m_WingPage
	GameObject_t9 * ___m_WingPage;
};
struct AppearanceLogic_t1208_StaticFields{
	// AppearanceLogic AppearanceLogic::m_Instance
	AppearanceLogic_t1208 * ___m_Instance;
};
