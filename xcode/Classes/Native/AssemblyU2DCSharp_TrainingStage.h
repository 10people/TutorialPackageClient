#pragma once
#include <stdint.h>
// TrainingLogic
struct TrainingLogic_t1781;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TrainingStage
struct TrainingStage_t1782  : public MonoBehaviour_t18
{
	// TrainingLogic TrainingStage::m_ParentLogic
	TrainingLogic_t1781 * ___m_ParentLogic;
	// UnityEngine.GameObject[] TrainingStage::m_TrainingPoint
	GameObjectU5BU5D_t1200* ___m_TrainingPoint;
	// UnityEngine.GameObject[] TrainingStage::m_TrainingActive
	GameObjectU5BU5D_t1200* ___m_TrainingActive;
	// UISprite TrainingStage::m_TrainingPic
	UISprite_t1202 * ___m_TrainingPic;
	// UnityEngine.GameObject TrainingStage::m_BranchPoint
	GameObject_t9 * ___m_BranchPoint;
	// UnityEngine.GameObject TrainingStage::m_BranchActive
	GameObject_t9 * ___m_BranchActive;
	// UnityEngine.GameObject TrainingStage::m_BranchLock
	GameObject_t9 * ___m_BranchLock;
	// System.Int32 TrainingStage::m_TrainingGroup
	int32_t ___m_TrainingGroup;
	// System.Int32 TrainingStage::m_BranchTraining
	int32_t ___m_BranchTraining;
};
