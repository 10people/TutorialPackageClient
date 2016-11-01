#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t1252;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// ObjEffectBehaviourController
struct ObjEffectBehaviourController_t2122;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// GCGame.Table.Tab_Animation
struct Tab_Animation_t341;
// UnityEngine.AnimationState
struct AnimationState_t4530;
// System.Collections.Generic.Dictionary`2<System.Int32,GCGame.Table.Tab_Animation>
struct Dictionary_2_t4531;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t4532;
// Callback
struct Callback_t2196;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.Animation_Modle.AnimationLogic
struct AnimationLogic_t4470  : public MonoBehaviour_t18
{
	// UnityEngine.Animation Games.Animation_Modle.AnimationLogic::m_animation
	Animation_t1252 * ___m_animation;
	// System.String Games.Animation_Modle.AnimationLogic::m_animResFilePath
	String_t* ___m_animResFilePath;
	// UnityEngine.GameObject Games.Animation_Modle.AnimationLogic::m_animGameObj
	GameObject_t9 * ___m_animGameObj;
	// ObjEffectBehaviourController Games.Animation_Modle.AnimationLogic::m_objEffectController
	ObjEffectBehaviourController_t2122 * ___m_objEffectController;
	// Games.LogicObj.Obj_Character Games.Animation_Modle.AnimationLogic::m_ObjChar
	Obj_Character_t1772 * ___m_ObjChar;
	// System.Boolean Games.Animation_Modle.AnimationLogic::m_IsUpdate
	bool ___m_IsUpdate;
	// System.Single Games.Animation_Modle.AnimationLogic::m_DelaySpeedTime
	float ___m_DelaySpeedTime;
	// System.Single Games.Animation_Modle.AnimationLogic::m_DelayFrameTime
	float ___m_DelayFrameTime;
	// System.Single Games.Animation_Modle.AnimationLogic::m_DunFrameBegionTime
	float ___m_DunFrameBegionTime;
	// System.Boolean Games.Animation_Modle.AnimationLogic::m_IsDunFrame
	bool ___m_IsDunFrame;
	// System.Single Games.Animation_Modle.AnimationLogic::m_CurPlayTime
	float ___m_CurPlayTime;
	// GCGame.Table.Tab_Animation Games.Animation_Modle.AnimationLogic::m_CurrentAnimation
	Tab_Animation_t341 * ___m_CurrentAnimation;
	// System.Boolean Games.Animation_Modle.AnimationLogic::m_IsDunFramePlay
	bool ___m_IsDunFramePlay;
	// System.Int32 Games.Animation_Modle.AnimationLogic::m_CurrentAnimationId
	int32_t ___m_CurrentAnimationId;
	// UnityEngine.AnimationState Games.Animation_Modle.AnimationLogic::m_curAnimState
	AnimationState_t4530 * ___m_curAnimState;
	// GCGame.Table.Tab_Animation Games.Animation_Modle.AnimationLogic::m_curAnimData
	Tab_Animation_t341 * ___m_curAnimData;
	// System.Collections.Generic.Dictionary`2<System.Int32,GCGame.Table.Tab_Animation> Games.Animation_Modle.AnimationLogic::animStateCache
	Dictionary_2_t4531 * ___animStateCache;
	// System.Collections.Generic.LinkedList`1<System.Int32> Games.Animation_Modle.AnimationLogic::m_NeedCheckEndCallBack
	LinkedList_1_t4532 * ___m_NeedCheckEndCallBack;
	// Callback Games.Animation_Modle.AnimationLogic::m_AnimFinishSpecificCallback
	Callback_t2196 * ___m_AnimFinishSpecificCallback;
	// System.Single Games.Animation_Modle.AnimationLogic::m_fLastLoopTime
	float ___m_fLastLoopTime;
	// System.Int32 Games.Animation_Modle.AnimationLogic::m_nLoopTimes
	int32_t ___m_nLoopTimes;
};
