#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UILabel
struct UILabel_t1176;
// TweenAlpha
struct TweenAlpha_t1261;
// BackCamerControll
struct BackCamerControll_t4813;
// SceneEffectBehaviourController
struct SceneEffectBehaviourController_t2131;
// Callback
struct Callback_t2196;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BackCamerControll
struct BackCamerControll_t4813  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BackCamerControll::m_BlackTex
	GameObject_t9 * ___m_BlackTex;
	// UnityEngine.Transform BackCamerControll::m_Blacktransform
	Transform_t78 * ___m_Blacktransform;
	// UILabel BackCamerControll::m_BlackScreenLabel
	UILabel_t1176 * ___m_BlackScreenLabel;
	// TweenAlpha BackCamerControll::m_BlackScreenLabelTween
	TweenAlpha_t1261 * ___m_BlackScreenLabelTween;
	// System.Boolean BackCamerControll::m_bAutoClose
	bool ___m_bAutoClose;
	// System.Boolean BackCamerControll::m_bIsBlackScreenPlaying
	bool ___m_bIsBlackScreenPlaying;
	// System.Boolean BackCamerControll::m_bIsBlackScreenLabelPlaying
	bool ___m_bIsBlackScreenLabelPlaying;
	// SceneEffectBehaviourController BackCamerControll::m_SceneEffecLogic
	SceneEffectBehaviourController_t2131 * ___m_SceneEffecLogic;
	// TweenAlpha BackCamerControll::m_BlackScreenTween
	TweenAlpha_t1261 * ___m_BlackScreenTween;
	// System.Boolean BackCamerControll::m_bIsCloseIdle
	bool ___m_bIsCloseIdle;
	// Callback BackCamerControll::m_finishCallback
	Callback_t2196 * ___m_finishCallback;
};
struct BackCamerControll_t4813_StaticFields{
	// BackCamerControll BackCamerControll::m_Instance
	BackCamerControll_t4813 * ___m_Instance;
};
