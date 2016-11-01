#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// CangJingGeItem[]
struct CangJingGeItemU5BU5D_t1976;
// CangJingGeWindow
struct CangJingGeWindow_t1790;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// TabController
struct TabController_t1209;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_CopySce.h"
// CangJingGeWindow
struct CangJingGeWindow_t1790  : public MonoBehaviour_t18
{
	// System.Int32 CangJingGeWindow::CopySceneId
	int32_t ___CopySceneId;
	// UILabel CangJingGeWindow::m_SweepYanbao
	UILabel_t1176 * ___m_SweepYanbao;
	// UILabel CangJingGeWindow::m_Sweep
	UILabel_t1176 * ___m_Sweep;
	// UnityEngine.GameObject CangJingGeWindow::m_ObjectSweepCost
	GameObject_t9 * ___m_ObjectSweepCost;
	// UnityEngine.GameObject CangJingGeWindow::m_ObjectSweepFree
	GameObject_t9 * ___m_ObjectSweepFree;
	// UILabel CangJingGeWindow::m_SweepCDTime
	UILabel_t1176 * ___m_SweepCDTime;
	// UILabel CangJingGeWindow::m_Tier
	UILabel_t1176 * ___m_Tier;
	// UILabel CangJingGeWindow::m_CalculatValue
	UILabel_t1176 * ___m_CalculatValue;
	// UISprite CangJingGeWindow::m_DropIconSprite1
	UISprite_t1202 * ___m_DropIconSprite1;
	// UISprite CangJingGeWindow::m_DropIconSprite2
	UISprite_t1202 * ___m_DropIconSprite2;
	// UISprite CangJingGeWindow::m_DropIconSprite3
	UISprite_t1202 * ___m_DropIconSprite3;
	// UILabel CangJingGeWindow::m_DropItemName1
	UILabel_t1176 * ___m_DropItemName1;
	// UILabel CangJingGeWindow::m_DropItemName2
	UILabel_t1176 * ___m_DropItemName2;
	// UILabel CangJingGeWindow::m_DropItemName3
	UILabel_t1176 * ___m_DropItemName3;
	// UILabel CangJingGeWindow::m_TiaoZhanCount
	UILabel_t1176 * ___m_TiaoZhanCount;
	// UnityEngine.GameObject CangJingGeWindow::ItemParent
	GameObject_t9 * ___ItemParent;
	// CangJingGeItem[] CangJingGeWindow::m_CangJingGeItem
	CangJingGeItemU5BU5D_t1976* ___m_CangJingGeItem;
	// UnityEngine.Transform[] CangJingGeWindow::m_CangJingGeItemTransform
	TransformU5BU5D_t77* ___m_CangJingGeItemTransform;
	// UnityEngine.Vector3[] CangJingGeWindow::m_CangJingGeItemLocalPosition
	Vector3U5BU5D_t1262* ___m_CangJingGeItemLocalPosition;
	// System.Int32 CangJingGeWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnTiaoZhan
	GameObject_t9 * ___m_BtnTiaoZhan;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnSaoDang
	GameObject_t9 * ___m_BtnSaoDang;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnHanRen
	GameObject_t9 * ___m_BtnHanRen;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnRank
	GameObject_t9 * ___m_BtnRank;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnAutoTeam
	GameObject_t9 * ___m_BtnAutoTeam;
	// UILabel CangJingGeWindow::m_BtnAutoTeamLabel
	UILabel_t1176 * ___m_BtnAutoTeamLabel;
	// System.Int32 CangJingGeWindow::m_nDropItemID1
	int32_t ___m_nDropItemID1;
	// System.Int32 CangJingGeWindow::m_nDropItemID2
	int32_t ___m_nDropItemID2;
	// System.Int32 CangJingGeWindow::m_nDropItemID3
	int32_t ___m_nDropItemID3;
	// System.Int32 CangJingGeWindow::m_nTierOnPlayer
	int32_t ___m_nTierOnPlayer;
	// TabController CangJingGeWindow::m_TabNum
	TabController_t1209 * ___m_TabNum;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnDanRen
	GameObject_t9 * ___m_BtnDanRen;
	// UnityEngine.GameObject CangJingGeWindow::m_BtnDuiWu
	GameObject_t9 * ___m_BtnDuiWu;
	// UnityEngine.GameObject CangJingGeWindow::m_CangJingGeExtraRewardPanel
	GameObject_t9 * ___m_CangJingGeExtraRewardPanel;
	// UnityEngine.GameObject CangJingGeWindow::m_CangJingGeExtraRewardItemGrid
	GameObject_t9 * ___m_CangJingGeExtraRewardItemGrid;
	// UnityEngine.GameObject CangJingGeWindow::m_CangJingGeExtraRewardItem
	GameObject_t9 * ___m_CangJingGeExtraRewardItem;
	// UnityEngine.GameObject CangJingGeWindow::m_SaoDangLabel
	GameObject_t9 * ___m_SaoDangLabel;
	// System.Single CangJingGeWindow::m_fSweepBuffer
	float ___m_fSweepBuffer;
	// System.Single CangJingGeWindow::OnHanRentimeSend
	float ___OnHanRentimeSend;
	// Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType CangJingGeWindow::<CopyScenePlayerMode>k__BackingField
	int32_t ___U3CCopyScenePlayerModeU3Ek__BackingField;
};
struct CangJingGeWindow_t1790_StaticFields{
	// System.Int32 CangJingGeWindow::SWEEP_MOVE_SPEED
	int32_t ___SWEEP_MOVE_SPEED;
	// System.Int32 CangJingGeWindow::SWEEP_MIN_X_POSITION
	int32_t ___SWEEP_MIN_X_POSITION;
	// System.Int32 CangJingGeWindow::SWEEP_X_INTERVAL
	int32_t ___SWEEP_X_INTERVAL;
	// System.Int32 CangJingGeWindow::SWEEP_X_DISTANCE
	int32_t ___SWEEP_X_DISTANCE;
	// CangJingGeWindow CangJingGeWindow::m_Instance
	CangJingGeWindow_t1790 * ___m_Instance;
};
