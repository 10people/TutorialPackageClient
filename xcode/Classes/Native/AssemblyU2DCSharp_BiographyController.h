#pragma once
#include <stdint.h>
// UIPanel
struct UIPanel_t1364;
// UnityEngine.GameObject
struct GameObject_t9;
// BiographyItemLogic
struct BiographyItemLogic_t1245;
// UIControllerBase`1<BiographyController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_26.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BiographyController
struct BiographyController_t1801  : public UIControllerBase_1_t1802
{
	// UIPanel BiographyController::m_CurDragPanel
	UIPanel_t1364 * ___m_CurDragPanel;
	// UnityEngine.GameObject BiographyController::m_Biographylist
	GameObject_t9 * ___m_Biographylist;
	// UnityEngine.GameObject BiographyController::m_ObjBiographyItem
	GameObject_t9 * ___m_ObjBiographyItem;
	// UnityEngine.GameObject BiographyController::m_BtnClose
	GameObject_t9 * ___m_BtnClose;
	// BiographyItemLogic BiographyController::m_itemLogic
	BiographyItemLogic_t1245 * ___m_itemLogic;
	// UnityEngine.GameObject BiographyController::m_curItem
	GameObject_t9 * ___m_curItem;
	// UnityEngine.Vector3 BiographyController::m_moveRelativeVec
	Vector3_t121  ___m_moveRelativeVec;
};
