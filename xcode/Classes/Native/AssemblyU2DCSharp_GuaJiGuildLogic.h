#pragma once
#include <stdint.h>
// TweenPosition
struct TweenPosition_t1255;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuaJiGuildLogic
struct GuaJiGuildLogic_t1432  : public MonoBehaviour_t18
{
	// TweenPosition GuaJiGuildLogic::m_GuiJiObjTween
	TweenPosition_t1255 * ___m_GuiJiObjTween;
	// UISprite GuaJiGuildLogic::m_GuiJiIcon
	UISprite_t1202 * ___m_GuiJiIcon;
	// System.Single GuaJiGuildLogic::m_PositionDuration
	float ___m_PositionDuration;
	// System.Single GuaJiGuildLogic::m_continueShowTime
	float ___m_continueShowTime;
	// System.Single GuaJiGuildLogic::m_passTime
	float ___m_passTime;
	// System.Boolean GuaJiGuildLogic::m_IsClick
	bool ___m_IsClick;
	// System.Boolean GuaJiGuildLogic::m_IsPlayed
	bool ___m_IsPlayed;
	// UnityEngine.GameObject GuaJiGuildLogic::m_HandObject
	GameObject_t9 * ___m_HandObject;
	// UnityEngine.GameObject GuaJiGuildLogic::m_RotationItem
	GameObject_t9 * ___m_RotationItem;
};
