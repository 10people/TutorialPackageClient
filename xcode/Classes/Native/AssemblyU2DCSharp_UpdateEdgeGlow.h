#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t5070;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UpdateEdgeGlow
struct UpdateEdgeGlow_t4464  : public MonoBehaviour_t18
{
	// UnityEngine.Renderer[] UpdateEdgeGlow::_renderers
	RendererU5BU5D_t5070* ____renderers;
	// System.String UpdateEdgeGlow::m_ShaderName
	String_t* ___m_ShaderName;
	// System.Single UpdateEdgeGlow::_updateIntervalTime
	float ____updateIntervalTime;
	// System.Single UpdateEdgeGlow::_updateTime
	float ____updateTime;
	// System.Single UpdateEdgeGlow::_updateMax
	float ____updateMax;
	// System.Single UpdateEdgeGlow::_updateValue
	float ____updateValue;
	// System.Single UpdateEdgeGlow::_useTime
	float ____useTime;
	// System.Boolean UpdateEdgeGlow::_isUser
	bool ____isUser;
	// System.Single UpdateEdgeGlow::_curUpdateValue
	float ____curUpdateValue;
	// System.Single UpdateEdgeGlow::m_GradientTime
	float ___m_GradientTime;
	// System.Boolean UpdateEdgeGlow::m_IsGradienting
	bool ___m_IsGradienting;
	// System.Single UpdateEdgeGlow::m_GradientValue
	float ___m_GradientValue;
	// System.Single UpdateEdgeGlow::m_CurValue
	float ___m_CurValue;
	// System.Boolean UpdateEdgeGlow::m_IsDie
	bool ___m_IsDie;
	// System.Single UpdateEdgeGlow::m_useOutlineTime
	float ___m_useOutlineTime;
	// System.Boolean UpdateEdgeGlow::m_isBoss
	bool ___m_isBoss;
	// System.Single UpdateEdgeGlow::m_defaultValue
	float ___m_defaultValue;
	// System.Single UpdateEdgeGlow::m_continueTime
	float ___m_continueTime;
	// UnityEngine.Color UpdateEdgeGlow::m_hitStartColor
	Color_t939  ___m_hitStartColor;
	// UnityEngine.Color UpdateEdgeGlow::m_hitEndColor
	Color_t939  ___m_hitEndColor;
};
