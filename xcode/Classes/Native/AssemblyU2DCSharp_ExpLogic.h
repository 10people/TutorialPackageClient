#pragma once
#include <stdint.h>
// ExpLogic
struct ExpLogic_t1400;
// UnityEngine.GameObject
struct GameObject_t9;
// UISlider
struct UISlider_t1219;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ExpLogic
struct ExpLogic_t1400  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject ExpLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UISlider ExpLogic::m_ExpProgress
	UISlider_t1219 * ___m_ExpProgress;
	// UISprite ExpLogic::m_ExpBackground
	UISprite_t1202 * ___m_ExpBackground;
	// UISprite ExpLogic::m_ExpSprite
	UISprite_t1202 * ___m_ExpSprite;
	// UILabel ExpLogic::m_ExpLabel
	UILabel_t1176 * ___m_ExpLabel;
	// UISlider ExpLogic::m_OffLineExpProgress
	UISlider_t1219 * ___m_OffLineExpProgress;
	// System.Int32 ExpLogic::m_CurExpBuffer
	int32_t ___m_CurExpBuffer;
	// System.Int32 ExpLogic::m_MaxExpBuffer
	int32_t ___m_MaxExpBuffer;
	// System.Int32 ExpLogic::m_CurExp
	int32_t ___m_CurExp;
	// System.Int32 ExpLogic::m_MaxExp
	int32_t ___m_MaxExp;
	// System.Int32 ExpLogic::m_CurOffLineExp
	int32_t ___m_CurOffLineExp;
	// System.Int32 ExpLogic::m_MaxOffLineExp
	int32_t ___m_MaxOffLineExp;
	// System.Int32 ExpLogic::m_PlayerLevelBuffer
	int32_t ___m_PlayerLevelBuffer;
	// System.Single ExpLogic::AddExpRatio
	float ___AddExpRatio;
};
struct ExpLogic_t1400_StaticFields{
	// ExpLogic ExpLogic::m_Instance
	ExpLogic_t1400 * ___m_Instance;
};
