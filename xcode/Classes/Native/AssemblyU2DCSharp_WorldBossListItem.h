#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// WorldBossWindow
struct WorldBossWindow_t1948;
// UISlider
struct UISlider_t1219;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HuaShanPVPData/WorldBossTeamInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_WorldBossTeamInfo.h"
// WorldBossListItem
struct WorldBossListItem_t1949  : public MonoBehaviour_t18
{
	// UILabel WorldBossListItem::LabelName
	UILabel_t1176 * ___LabelName;
	// UILabel WorldBossListItem::LabelCd
	UILabel_t1176 * ___LabelCd;
	// UILabel WorldBossListItem::LabelScore
	UILabel_t1176 * ___LabelScore;
	// WorldBossWindow WorldBossListItem::m_parent
	WorldBossWindow_t1948 * ___m_parent;
	// HuaShanPVPData/WorldBossTeamInfo WorldBossListItem::m_data
	WorldBossTeamInfo_t1950  ___m_data;
	// UISlider WorldBossListItem::m_ProgressSlider
	UISlider_t1219 * ___m_ProgressSlider;
	// UnityEngine.GameObject WorldBossListItem::m_fightButton
	GameObject_t9 * ___m_fightButton;
	// System.Single WorldBossListItem::m_fFrameTimeDiff
	float ___m_fFrameTimeDiff;
	// System.Int32 WorldBossListItem::<CountdownCD>k__BackingField
	int32_t ___U3CCountdownCDU3Ek__BackingField;
};
