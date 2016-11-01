#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// TweenPosition
struct TweenPosition_t1255;
// UILabel
struct UILabel_t1176;
// NewFunctionLogic
struct NewFunctionLogic_t1590;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NewFunctionLogic
struct NewFunctionLogic_t1590  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject NewFunctionLogic::m_KaiFu
	GameObject_t9 * ___m_KaiFu;
	// UnityEngine.GameObject NewFunctionLogic::m_CloseButton
	GameObject_t9 * ___m_CloseButton;
	// UnityEngine.GameObject NewFunctionLogic::m_OpenButton
	GameObject_t9 * ___m_OpenButton;
	// TweenPosition NewFunctionLogic::m_Tween
	TweenPosition_t1255 * ___m_Tween;
	// UnityEngine.GameObject NewFunctionLogic::m_ButtonAuto
	GameObject_t9 * ___m_ButtonAuto;
	// UnityEngine.GameObject NewFunctionLogic::m_ButtonCopyScene
	GameObject_t9 * ___m_ButtonCopyScene;
	// UnityEngine.GameObject NewFunctionLogic::m_ButtonPK
	GameObject_t9 * ___m_ButtonPK;
	// UILabel NewFunctionLogic::m_PKModleLable
	UILabel_t1176 * ___m_PKModleLable;
	// System.Boolean NewFunctionLogic::m_bFunctionOpen
	bool ___m_bFunctionOpen;
	// System.Boolean NewFunctionLogic::m_bOpening
	bool ___m_bOpening;
	// System.Int32 NewFunctionLogic::m_nNewPlayerGuideIndex
	int32_t ___m_nNewPlayerGuideIndex;
	// System.Single NewFunctionLogic::m_CDTime
	float ___m_CDTime;
	// UnityEngine.GameObject NewFunctionLogic::m_MoneyTreeBigRed
	GameObject_t9 * ___m_MoneyTreeBigRed;
};
struct NewFunctionLogic_t1590_StaticFields{
	// NewFunctionLogic NewFunctionLogic::m_Instance
	NewFunctionLogic_t1590 * ___m_Instance;
};
