#pragma once
#include <stdint.h>
// ChatInfoSetupLogic
struct ChatInfoSetupLogic_t1302;
// System.Collections.Generic.List`1<UIToggle>
struct List_1_t1322;
// UIGrid
struct UIGrid_t1199;
// ChatInfoLogic
struct ChatInfoLogic_t1294;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatInfoSetupLogic
struct ChatInfoSetupLogic_t1302  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<UIToggle> ChatInfoSetupLogic::m_SetupTypeToggle
	List_1_t1322 * ___m_SetupTypeToggle;
	// UIGrid ChatInfoSetupLogic::m_ToggleGrid
	UIGrid_t1199 * ___m_ToggleGrid;
	// ChatInfoLogic ChatInfoSetupLogic::m_ChatInfoLogic
	ChatInfoLogic_t1294 * ___m_ChatInfoLogic;
	// System.Int32 ChatInfoSetupLogic::m_nCurSetupIndex
	int32_t ___m_nCurSetupIndex;
};
struct ChatInfoSetupLogic_t1302_StaticFields{
	// ChatInfoSetupLogic ChatInfoSetupLogic::m_Instance
	ChatInfoSetupLogic_t1302 * ___m_Instance;
};
