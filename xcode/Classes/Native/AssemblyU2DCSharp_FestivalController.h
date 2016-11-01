#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// FestivalController
struct FestivalController_t1984;
// LoverFlowerWindow
struct LoverFlowerWindow_t1897;
// UIGrid
struct UIGrid_t1199;
// TabButton[]
struct TabButtonU5BU5D_t1966;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// TabController
struct TabController_t1209;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FestivalController/Tab_Index
#include "AssemblyU2DCSharp_FestivalController_Tab_Index.h"
// FestivalController
struct FestivalController_t1984  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject FestivalController::m_SpringWindow
	GameObject_t9 * ___m_SpringWindow;
	// LoverFlowerWindow FestivalController::m_LoverFlowerWindow
	LoverFlowerWindow_t1897 * ___m_LoverFlowerWindow;
	// UIGrid FestivalController::m_TabWindowGrid
	UIGrid_t1199 * ___m_TabWindowGrid;
	// TabButton[] FestivalController::m_TabWindows
	TabButtonU5BU5D_t1966* ___m_TabWindows;
	// UnityEngine.GameObject[] FestivalController::m_RedTabWindes
	GameObjectU5BU5D_t1200* ___m_RedTabWindes;
	// TabController FestivalController::m_TabController
	TabController_t1209 * ___m_TabController;
};
struct FestivalController_t1984_StaticFields{
	// FestivalController FestivalController::m_Instance
	FestivalController_t1984 * ___m_Instance;
	// FestivalController/Tab_Index FestivalController::m_nTab
	int32_t ___m_nTab;
};
