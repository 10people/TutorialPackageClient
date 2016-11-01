#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// ReliveLogic
struct ReliveLogic_t1685;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ReliveLogic
struct ReliveLogic_t1685  : public MonoBehaviour_t18
{
	// UILabel ReliveLogic::m_ReliveEntryTitle
	UILabel_t1176 * ___m_ReliveEntryTitle;
	// UILabel ReliveLogic::m_ReliveYuanBao
	UILabel_t1176 * ___m_ReliveYuanBao;
	// System.Int32 ReliveLogic::m_nTimeData
	int32_t ___m_nTimeData;
	// UnityEngine.GameObject ReliveLogic::m_NewPlayerRelive
	GameObject_t9 * ___m_NewPlayerRelive;
	// UnityEngine.GameObject ReliveLogic::m_Relive
	GameObject_t9 * ___m_Relive;
	// UnityEngine.GameObject ReliveLogic::m_MiniPanel
	GameObject_t9 * ___m_MiniPanel;
	// UnityEngine.GameObject ReliveLogic::m_MiniAnchorPoint
	GameObject_t9 * ___m_MiniAnchorPoint;
	// UnityEngine.GameObject ReliveLogic::m_NormalPanel
	GameObject_t9 * ___m_NormalPanel;
	// UnityEngine.GameObject ReliveLogic::m_NormalAnchorPoint
	GameObject_t9 * ___m_NormalAnchorPoint;
	// UnityEngine.GameObject ReliveLogic::m_ButtonPanel
	GameObject_t9 * ___m_ButtonPanel;
	// System.Single ReliveLogic::ReliveSend
	float ___ReliveSend;
};
struct ReliveLogic_t1685_StaticFields{
	// ReliveLogic ReliveLogic::m_Instance
	ReliveLogic_t1685 * ___m_Instance;
};
