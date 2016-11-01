#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.AnimationClip
struct AnimationClip_t2149;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t5268;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayIdleAnimations
struct PlayIdleAnimations_t5269  : public MonoBehaviour_t18
{
	// UnityEngine.Animation PlayIdleAnimations::mAnim
	Animation_t1252 * ___mAnim;
	// UnityEngine.AnimationClip PlayIdleAnimations::mIdle
	AnimationClip_t2149 * ___mIdle;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> PlayIdleAnimations::mBreaks
	List_1_t5268 * ___mBreaks;
	// System.Single PlayIdleAnimations::mNextBreak
	float ___mNextBreak;
	// System.Int32 PlayIdleAnimations::mLastIndex
	int32_t ___mLastIndex;
};
