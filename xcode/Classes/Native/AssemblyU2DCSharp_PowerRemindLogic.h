#pragma once
#include <stdint.h>
// PowerRemindLogic
struct PowerRemindLogic_t1665;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Single[]
struct SingleU5BU5D_t744;
// System.Int32[]
struct Int32U5BU5D_t116;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PowerRemindLogic
struct PowerRemindLogic_t1665  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PowerRemindLogic::m_PowerRemind
	GameObject_t9 * ___m_PowerRemind;
	// UILabel PowerRemindLogic::m_NewPowerLabel
	UILabel_t1176 * ___m_NewPowerLabel;
	// UILabel PowerRemindLogic::m_AddPowerLabel
	UILabel_t1176 * ___m_AddPowerLabel;
	// System.Int32 PowerRemindLogic::m_nBufferNewPower
	int32_t ___m_nBufferNewPower;
	// System.Int32 PowerRemindLogic::m_nBufferAddPower
	int32_t ___m_nBufferAddPower;
	// System.Boolean PowerRemindLogic::m_bOnShow
	bool ___m_bOnShow;
	// System.Single PowerRemindLogic::m_fStartShowTime
	float ___m_fStartShowTime;
	// System.Boolean PowerRemindLogic::m_bOnBet
	bool ___m_bOnBet;
	// System.Single[] PowerRemindLogic::BetAniTime
	SingleU5BU5D_t744* ___BetAniTime;
	// System.Int32[] PowerRemindLogic::AniUpdate
	Int32U5BU5D_t116* ___AniUpdate;
	// System.Int32 PowerRemindLogic::powerAni
	int32_t ___powerAni;
	// System.Int32 PowerRemindLogic::aniNum
	int32_t ___aniNum;
	// System.Boolean PowerRemindLogic::aniStop
	bool ___aniStop;
};
struct PowerRemindLogic_t1665_StaticFields{
	// System.Single PowerRemindLogic::ShowTime
	float ___ShowTime;
	// System.Single PowerRemindLogic::BeginBetTime
	float ___BeginBetTime;
	// System.Int32 PowerRemindLogic::PowerMaxLength
	int32_t ___PowerMaxLength;
	// PowerRemindLogic PowerRemindLogic::m_Instance
	PowerRemindLogic_t1665 * ___m_Instance;
};
