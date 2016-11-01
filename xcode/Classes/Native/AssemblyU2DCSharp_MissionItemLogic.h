#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// TweenScale
struct TweenScale_t1259;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionItemLogic
struct MissionItemLogic_t1574  : public MonoBehaviour_t18
{
	// UILabel MissionItemLogic::m_MissionTitle
	UILabel_t1176 * ___m_MissionTitle;
	// UILabel MissionItemLogic::m_MissionInfo
	UILabel_t1176 * ___m_MissionInfo;
	// UnityEngine.GameObject MissionItemLogic::m_MissionComplete
	GameObject_t9 * ___m_MissionComplete;
	// UnityEngine.GameObject MissionItemLogic::m_MissionNoComplete
	GameObject_t9 * ___m_MissionNoComplete;
	// System.Int32 MissionItemLogic::m_MissionID
	int32_t ___m_MissionID;
	// TweenScale MissionItemLogic::m_EffectSprite
	TweenScale_t1259 * ___m_EffectSprite;
	// UISprite MissionItemLogic::ItemIcon
	UISprite_t1202 * ___ItemIcon;
	// UISprite MissionItemLogic::ItemDiKuang
	UISprite_t1202 * ___ItemDiKuang;
	// UnityEngine.GameObject MissionItemLogic::ItemDuang
	GameObject_t9 * ___ItemDuang;
	// UISprite MissionItemLogic::ProcessSprite
	UISprite_t1202 * ___ProcessSprite;
};
