#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// RollNotice
struct RollNotice_t1704;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RollNotice
struct RollNotice_t1704  : public MonoBehaviour_t18
{
	// UILabel RollNotice::objNoticeLables
	UILabel_t1176 * ___objNoticeLables;
	// UnityEngine.GameObject RollNotice::BackGround
	GameObject_t9 * ___BackGround;
	// System.Single RollNotice::ClipHeight
	float ___ClipHeight;
	// System.Single RollNotice::ShowTime
	float ___ShowTime;
	// System.Single RollNotice::AnimiTime
	float ___AnimiTime;
	// System.Single RollNotice::m_ShowTime_Timer
	float ___m_ShowTime_Timer;
	// System.Single RollNotice::m_Animi_Timer
	float ___m_Animi_Timer;
	// System.Boolean RollNotice::bPlayRollFlag
	bool ___bPlayRollFlag;
};
struct RollNotice_t1704_StaticFields{
	// RollNotice RollNotice::m_instance
	RollNotice_t1704 * ___m_instance;
};
