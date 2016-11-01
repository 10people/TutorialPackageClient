#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DebugHelper
struct DebugHelper_t5019  : public MonoBehaviour_t18
{
	// System.Boolean DebugHelper::m_bUseOtherFun
	bool ___m_bUseOtherFun;
	// System.String DebugHelper::m_strSetNameHeight
	String_t* ___m_strSetNameHeight;
	// UnityEngine.GameObject DebugHelper::uiRoot
	GameObject_t9 * ___uiRoot;
	// System.Single DebugHelper::_widthValue
	float ____widthValue;
	// System.Single DebugHelper::_heightValue
	float ____heightValue;
	// System.Boolean DebugHelper::m_bOpenHideUI
	bool ___m_bOpenHideUI;
	// System.Boolean DebugHelper::m_bOpenDisconnect
	bool ___m_bOpenDisconnect;
	// System.Boolean DebugHelper::m_bOpenPlayerSound
	bool ___m_bOpenPlayerSound;
	// System.Boolean DebugHelper::m_bOpenTestAccount
	bool ___m_bOpenTestAccount;
	// System.Boolean DebugHelper::m_bOpenNameHeight
	bool ___m_bOpenNameHeight;
	// System.Boolean DebugHelper::m_bOpenUnload
	bool ___m_bOpenUnload;
};
struct DebugHelper_t5019_StaticFields{
	// UnityEngine.GameObject DebugHelper::helperInstance
	GameObject_t9 * ___helperInstance;
	// System.Boolean DebugHelper::m_bShowEffect
	bool ___m_bShowEffect;
	// System.Boolean DebugHelper::m_bShowDamageBoard
	bool ___m_bShowDamageBoard;
	// System.Boolean DebugHelper::m_bEnableTestAccount
	bool ___m_bEnableTestAccount;
};
