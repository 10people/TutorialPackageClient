#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UpdateLoadingBar
struct UpdateLoadingBar_t1523;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UpdateHelper
struct UpdateHelper_t1524;
// TweenPosition[]
struct TweenPositionU5BU5D_t1254;
// LoginUILogic
struct LoginUILogic_t1515;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UpdateHelper/UpdateStep
#include "AssemblyU2DCSharp_UpdateHelper_UpdateStep.h"
// LoginUILogic
struct LoginUILogic_t1515  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject LoginUILogic::Camera3D
	GameObject_t9 * ___Camera3D;
	// UpdateLoadingBar LoginUILogic::m_UpdateLoadingBar
	UpdateLoadingBar_t1523 * ___m_UpdateLoadingBar;
	// UnityEngine.GameObject LoginUILogic::m_ResDownloadTip
	GameObject_t9 * ___m_ResDownloadTip;
	// UILabel LoginUILogic::m_LabelResDownloadTip
	UILabel_t1176 * ___m_LabelResDownloadTip;
	// UnityEngine.GameObject LoginUILogic::m_CameraUI
	GameObject_t9 * ___m_CameraUI;
	// UnityEngine.GameObject LoginUILogic::m_CameraChooseRole
	GameObject_t9 * ___m_CameraChooseRole;
	// UnityEngine.GameObject[] LoginUILogic::m_ModelChooseRole
	GameObjectU5BU5D_t1200* ___m_ModelChooseRole;
	// UnityEngine.GameObject[] LoginUILogic::m_ClickEffect
	GameObjectU5BU5D_t1200* ___m_ClickEffect;
	// System.Int32 LoginUILogic::curRoleIndex
	int32_t ___curRoleIndex;
	// UnityEngine.GameObject LoginUILogic::m_curController
	GameObject_t9 * ___m_curController;
	// UpdateHelper LoginUILogic::m_curUpdateHelper
	UpdateHelper_t1524 * ___m_curUpdateHelper;
	// System.Boolean LoginUILogic::m_bUpdating
	bool ___m_bUpdating;
	// UpdateHelper/UpdateStep LoginUILogic::m_lastUpateStep
	int32_t ___m_lastUpateStep;
	// UnityEngine.GameObject LoginUILogic::m_BackgroundTex
	GameObject_t9 * ___m_BackgroundTex;
	// TweenPosition[] LoginUILogic::m_ArrayLoadingBackGround
	TweenPositionU5BU5D_t1254* ___m_ArrayLoadingBackGround;
	// System.Int32 LoginUILogic::m_RoleType
	int32_t ___m_RoleType;
	// System.Int32 LoginUILogic::m_RoleModelVisualID
	int32_t ___m_RoleModelVisualID;
	// System.Int32 LoginUILogic::m_RoleWeaponID
	int32_t ___m_RoleWeaponID;
	// System.Int32 LoginUILogic::m_RoleWeaponEffectGem
	int32_t ___m_RoleWeaponEffectGem;
	// System.Boolean LoginUILogic::m_RoleClick
	bool ___m_RoleClick;
	// System.Boolean LoginUILogic::m_BeginChangeBlack
	bool ___m_BeginChangeBlack;
	// System.Boolean LoginUILogic::m_bDonwloadFile
	bool ___m_bDonwloadFile;
	// System.Boolean LoginUILogic::bLoadModelFinished
	bool ___bLoadModelFinished;
	// System.Int32 LoginUILogic::m_GengxinError
	int32_t ___m_GengxinError;
	// System.Int32 LoginUILogic::m_GengxinNum
	int32_t ___m_GengxinNum;
};
struct LoginUILogic_t1515_StaticFields{
	// System.Int32 LoginUILogic::m_LoginSelect
	int32_t ___m_LoginSelect;
	// System.Boolean LoginUILogic::m_bFirstEnterGame
	bool ___m_bFirstEnterGame;
	// LoginUILogic LoginUILogic::m_instance
	LoginUILogic_t1515 * ___m_instance;
};
