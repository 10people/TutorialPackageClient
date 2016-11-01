#pragma once
#include <stdint.h>
// RelationLogic
struct RelationLogic_t1684;
// TabController
struct TabController_t1209;
// RelationTeamWindow
struct RelationTeamWindow_t1659;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RelationLogic/OPEN_WAY
#include "AssemblyU2DCSharp_RelationLogic_OPEN_WAY.h"
// RelationLogic
struct RelationLogic_t1684  : public MonoBehaviour_t18
{
	// TabController RelationLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// RelationTeamWindow RelationLogic::m_TeamWindow
	RelationTeamWindow_t1659 * ___m_TeamWindow;
	// UISprite RelationLogic::m_NewEmailBigRed
	UISprite_t1202 * ___m_NewEmailBigRed;
};
struct RelationLogic_t1684_StaticFields{
	// RelationLogic RelationLogic::m_Instance
	RelationLogic_t1684 * ___m_Instance;
	// RelationLogic/OPEN_WAY RelationLogic::m_OpenWay
	int32_t ___m_OpenWay;
};
