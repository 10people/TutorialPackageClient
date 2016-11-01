#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// AutoFightLogic
struct AutoFightLogic_t1218;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoDrugWindow
struct AutoDrugWindow_t1215  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject AutoDrugWindow::ItemParent
	GameObject_t9 * ___ItemParent;
	// System.Int32 AutoDrugWindow::m_nType
	int32_t ___m_nType;
	// AutoFightLogic AutoDrugWindow::m_parent
	AutoFightLogic_t1218 * ___m_parent;
	// System.Int32 AutoDrugWindow::m_curType
	int32_t ___m_curType;
};
