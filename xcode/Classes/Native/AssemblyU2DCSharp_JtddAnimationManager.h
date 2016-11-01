#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Generic.Dictionary`2<System.Int32,JtddAnimationManager/CameraEffectTime>
struct Dictionary_2_t5166;
// MotionBlur
struct MotionBlur_t1047;
// System.Int32[]
struct Int32U5BU5D_t116;
// TrackMoveControl
struct TrackMoveControl_t5167;
// JtddAnimationManager
struct JtddAnimationManager_t5168;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JtddAnimationManager
struct JtddAnimationManager_t5168  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject[] JtddAnimationManager::ScGameObject
	GameObjectU5BU5D_t1200* ___ScGameObject;
	// System.Single[] JtddAnimationManager::ScGameObjTime
	SingleU5BU5D_t744* ___ScGameObjTime;
	// UnityEngine.GameObject JtddAnimationManager::SuidaoDongHuaGameObject
	GameObject_t9 * ___SuidaoDongHuaGameObject;
	// System.Single[] JtddAnimationManager::SuiDaoTime
	SingleU5BU5D_t744* ___SuiDaoTime;
	// UnityEngine.GameObject[] JtddAnimationManager::ScCameraGameObjects
	GameObjectU5BU5D_t1200* ___ScCameraGameObjects;
	// UnityEngine.GameObject[] JtddAnimationManager::RiderObjs
	GameObjectU5BU5D_t1200* ___RiderObjs;
	// System.String[] JtddAnimationManager::m_PlayerNodePath
	StringU5BU5D_t333* ___m_PlayerNodePath;
	// System.Int32 JtddAnimationManager::m_OldIndex
	int32_t ___m_OldIndex;
	// System.Int32 JtddAnimationManager::m_CurIndex
	int32_t ___m_CurIndex;
	// System.Single JtddAnimationManager::m_CurPlayerTime
	float ___m_CurPlayerTime;
	// System.Single JtddAnimationManager::m_CurAllTime
	float ___m_CurAllTime;
	// System.Single JtddAnimationManager::m_BlurBeginTime
	float ___m_BlurBeginTime;
	// System.Single JtddAnimationManager::m_BlurEndTime
	float ___m_BlurEndTime;
	// System.Collections.Generic.Dictionary`2<System.Int32,JtddAnimationManager/CameraEffectTime> JtddAnimationManager::m_CameraEffectTimeList
	Dictionary_2_t5166 * ___m_CameraEffectTimeList;
	// MotionBlur JtddAnimationManager::m_CurMotionBlur
	MotionBlur_t1047 * ___m_CurMotionBlur;
	// System.Int32[] JtddAnimationManager::ScSoundID
	Int32U5BU5D_t116* ___ScSoundID;
	// TrackMoveControl JtddAnimationManager::m_TrackMoveControl
	TrackMoveControl_t5167 * ___m_TrackMoveControl;
	// System.Boolean JtddAnimationManager::m_IsAllAnimation
	bool ___m_IsAllAnimation;
};
struct JtddAnimationManager_t5168_StaticFields{
	// JtddAnimationManager JtddAnimationManager::m_Instance
	JtddAnimationManager_t5168 * ___m_Instance;
};
