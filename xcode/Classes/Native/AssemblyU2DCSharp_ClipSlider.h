#pragma once
#include <stdint.h>
// UIPanel
struct UIPanel_t1364;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ClipSlider
struct ClipSlider_t1849  : public MonoBehaviour_t18
{
	// UIPanel ClipSlider::m_LoadingSliderPanel
	UIPanel_t1364 * ___m_LoadingSliderPanel;
	// UnityEngine.GameObject ClipSlider::m_LoadingEffect
	GameObject_t9 * ___m_LoadingEffect;
	// System.Single ClipSlider::m_clipStartPos
	float ___m_clipStartPos;
	// System.Single ClipSlider::m_clipEndPos
	float ___m_clipEndPos;
	// System.Single ClipSlider::m_effectStartPos
	float ___m_effectStartPos;
	// UnityEngine.Vector4 ClipSlider::m_vecClipRange
	Vector4_t942  ___m_vecClipRange;
	// UnityEngine.Vector3 ClipSlider::m_vecEffectPos
	Vector3_t121  ___m_vecEffectPos;
	// System.Single ClipSlider::m_nextProgressValue
	float ___m_nextProgressValue;
	// System.Single ClipSlider::m_curSpeed
	float ___m_curSpeed;
	// System.Single ClipSlider::m_curProgressValue
	float ___m_curProgressValue;
};
