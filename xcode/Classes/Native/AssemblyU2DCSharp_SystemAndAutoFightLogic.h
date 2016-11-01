#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// SystemAndAutoFightLogic
struct SystemAndAutoFightLogic_t1768;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SystemAndAutoFightLogic
struct SystemAndAutoFightLogic_t1768  : public MonoBehaviour_t18
{
	// UISprite SystemAndAutoFightLogic::m_AutoFightRemindPoint
	UISprite_t1202 * ___m_AutoFightRemindPoint;
	// TabController SystemAndAutoFightLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject SystemAndAutoFightLogic::m_System
	GameObject_t9 * ___m_System;
	// UnityEngine.GameObject SystemAndAutoFightLogic::m_AutoFight
	GameObject_t9 * ___m_AutoFight;
	// UnityEngine.GameObject SystemAndAutoFightLogic::m_VoiceChat
	GameObject_t9 * ___m_VoiceChat;
};
struct SystemAndAutoFightLogic_t1768_StaticFields{
	// SystemAndAutoFightLogic SystemAndAutoFightLogic::m_Instance
	SystemAndAutoFightLogic_t1768 * ___m_Instance;
};
