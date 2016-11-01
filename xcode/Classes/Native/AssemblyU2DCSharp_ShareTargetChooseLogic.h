#pragma once
#include <stdint.h>
// ShareTargetChooseLogic
struct ShareTargetChooseLogic_t1716;
// System.String
struct String_t;
// TabController
struct TabController_t1209;
// Games.Item.GameItem
struct GameItem_t1172;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ShareTargetChooseLogic/SHARE_TARGET
#include "AssemblyU2DCSharp_ShareTargetChooseLogic_SHARE_TARGET.h"
// ChatInfoLogic/LINK_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_LINK_TYPE.h"
// ShareTargetChooseLogic
struct ShareTargetChooseLogic_t1716  : public MonoBehaviour_t18
{
	// TabController ShareTargetChooseLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// ShareTargetChooseLogic/SHARE_TARGET ShareTargetChooseLogic::m_eShareTarget
	int32_t ___m_eShareTarget;
	// ChatInfoLogic/LINK_TYPE ShareTargetChooseLogic::m_eShareType
	int32_t ___m_eShareType;
	// Games.Item.GameItem ShareTargetChooseLogic::m_EquipOrItemBuffer
	GameItem_t1172 * ___m_EquipOrItemBuffer;
	// System.UInt64 ShareTargetChooseLogic::m_GuildForApplyBuffer
	uint64_t ___m_GuildForApplyBuffer;
};
struct ShareTargetChooseLogic_t1716_StaticFields{
	// ShareTargetChooseLogic ShareTargetChooseLogic::m_Instance
	ShareTargetChooseLogic_t1716 * ___m_Instance;
	// System.String ShareTargetChooseLogic::m_additionShareMsg
	String_t* ___m_additionShareMsg;
	// System.Boolean ShareTargetChooseLogic::m_bIsYaoHe
	bool ___m_bIsYaoHe;
};
