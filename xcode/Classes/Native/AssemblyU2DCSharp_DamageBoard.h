#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UILabel
struct UILabel_t1176;
// UniformAcceleratedMotion
struct UniformAcceleratedMotion_t1369;
// TweenScale
struct TweenScale_t1259;
// TweenAlpha
struct TweenAlpha_t1261;
// UIFont
struct UIFont_t1286;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DamageBoard
struct DamageBoard_t1370  : public MonoBehaviour_t18
{
	// UnityEngine.Transform DamageBoard::m_DamageBoardRootTransform
	Transform_t78 * ___m_DamageBoardRootTransform;
	// UILabel DamageBoard::m_DamageBoardLabel
	UILabel_t1176 * ___m_DamageBoardLabel;
	// UniformAcceleratedMotion DamageBoard::m_UAMotion
	UniformAcceleratedMotion_t1369 * ___m_UAMotion;
	// TweenScale DamageBoard::m_TweenScalePlus
	TweenScale_t1259 * ___m_TweenScalePlus;
	// TweenScale DamageBoard::m_TweenScaleMinus
	TweenScale_t1259 * ___m_TweenScaleMinus;
	// TweenAlpha DamageBoard::m_TweenAlpha
	TweenAlpha_t1261 * ___m_TweenAlpha;
	// System.Single DamageBoard::m_ShowTime
	float ___m_ShowTime;
	// UIFont DamageBoard::m_PlayerSkillDamageFont
	UIFont_t1286 * ___m_PlayerSkillDamageFont;
	// UIFont DamageBoard::m_OtherSkillDamageFont
	UIFont_t1286 * ___m_OtherSkillDamageFont;
	// System.Single DamageBoard::m_totalShowTime
	float ___m_totalShowTime;
	// System.Boolean DamageBoard::m_run
	bool ___m_run;
	// UISprite DamageBoard::m_BG
	UISprite_t1202 * ___m_BG;
};
