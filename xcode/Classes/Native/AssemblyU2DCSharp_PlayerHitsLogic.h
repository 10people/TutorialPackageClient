#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// TweenPosition
struct TweenPosition_t1255;
// TweenScale
struct TweenScale_t1259;
// UnityEngine.Transform
struct Transform_t78;
// PlayerHitsLogic
struct PlayerHitsLogic_t1656;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PlayerHitsLogic
struct PlayerHitsLogic_t1656  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PlayerHitsLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UISprite PlayerHitsLogic::m_BackGround
	UISprite_t1202 * ___m_BackGround;
	// UILabel PlayerHitsLogic::m_NumLabel
	UILabel_t1176 * ___m_NumLabel;
	// UnityEngine.GameObject PlayerHitsLogic::m_EffectOffset
	GameObject_t9 * ___m_EffectOffset;
	// TweenPosition PlayerHitsLogic::m_JumpEffect
	TweenPosition_t1255 * ___m_JumpEffect;
	// TweenScale PlayerHitsLogic::m_CriticalEffect
	TweenScale_t1259 * ___m_CriticalEffect;
	// UnityEngine.Transform PlayerHitsLogic::m_CachedTrans
	Transform_t78 * ___m_CachedTrans;
	// UnityEngine.Transform PlayerHitsLogic::m_CachedFirstChildTrans
	Transform_t78 * ___m_CachedFirstChildTrans;
	// UISprite PlayerHitsLogic::m_SpriteHit
	UISprite_t1202 * ___m_SpriteHit;
	// UnityEngine.Vector3 PlayerHitsLogic::m_PositionOffset
	Vector3_t121  ___m_PositionOffset;
	// UnityEngine.Vector3 PlayerHitsLogic::m_PlayerModelHeightOffset
	Vector3_t121  ___m_PlayerModelHeightOffset;
	// System.Int32 PlayerHitsLogic::m_curShowCount
	int32_t ___m_curShowCount;
	// System.Boolean PlayerHitsLogic::m_isInverse
	bool ___m_isInverse;
};
struct PlayerHitsLogic_t1656_StaticFields{
	// PlayerHitsLogic PlayerHitsLogic::m_Instance
	PlayerHitsLogic_t1656 * ___m_Instance;
};
