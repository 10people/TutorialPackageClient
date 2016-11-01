#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// ItemSlotLogic[]
struct ItemSlotLogicU5BU5D_t1679;
// UIControllerBase`1<MissionInfoController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_29.h"
// MissionInfoController/MissionUIType
#include "AssemblyU2DCSharp_MissionInfoController_MissionUIType.h"
// MissionInfoController
struct MissionInfoController_t1811  : public UIControllerBase_1_t1812
{
	// UnityEngine.GameObject MissionInfoController::m_GameObj
	GameObject_t9 * ___m_GameObj;
	// UIGrid MissionInfoController::m_MissionItemGrid
	UIGrid_t1199 * ___m_MissionItemGrid;
	// ItemSlotLogic[] MissionInfoController::m_MissionBonusItemSlot
	ItemSlotLogicU5BU5D_t1679* ___m_MissionBonusItemSlot;
	// UnityEngine.GameObject MissionInfoController::m_AcceptButton
	GameObject_t9 * ___m_AcceptButton;
	// UnityEngine.GameObject MissionInfoController::m_CompleteButton
	GameObject_t9 * ___m_CompleteButton;
	// UnityEngine.GameObject MissionInfoController::m_MissionInfoAward
	GameObject_t9 * ___m_MissionInfoAward;
	// System.Int32 MissionInfoController::m_CurMissionID
	int32_t ___m_CurMissionID;
	// MissionInfoController/MissionUIType MissionInfoController::m_MissionType
	int32_t ___m_MissionType;
	// System.Int32 MissionInfoController::m_CurTalkID
	int32_t ___m_CurTalkID;
};
