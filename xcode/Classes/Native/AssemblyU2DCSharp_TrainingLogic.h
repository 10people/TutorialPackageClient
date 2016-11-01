#pragma once
#include <stdint.h>
// TrainingLogic
struct TrainingLogic_t1781;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UIImageButton
struct UIImageButton_t1204;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TrainingLogic
struct TrainingLogic_t1781  : public MonoBehaviour_t18
{
	// UISprite TrainingLogic::m_TrainingProgress
	UISprite_t1202 * ___m_TrainingProgress;
	// UILabel TrainingLogic::m_TrainingProgressLabel
	UILabel_t1176 * ___m_TrainingProgressLabel;
	// UnityEngine.GameObject TrainingLogic::m_TrainingTips
	GameObject_t9 * ___m_TrainingTips;
	// UISprite TrainingLogic::m_TrainingTipsBG
	UISprite_t1202 * ___m_TrainingTipsBG;
	// UILabel TrainingLogic::m_TrainingTipsLabel
	UILabel_t1176 * ___m_TrainingTipsLabel;
	// UILabel TrainingLogic::m_TrainingTipsName
	UILabel_t1176 * ___m_TrainingTipsName;
	// UnityEngine.GameObject[] TrainingLogic::m_TrainingStage
	GameObjectU5BU5D_t1200* ___m_TrainingStage;
	// UnityEngine.GameObject TrainingLogic::m_TrainingStageGrid
	GameObject_t9 * ___m_TrainingStageGrid;
	// UILabel TrainingLogic::m_CurrentExpLabel
	UILabel_t1176 * ___m_CurrentExpLabel;
	// UILabel TrainingLogic::m_NextTrainingName
	UILabel_t1176 * ___m_NextTrainingName;
	// UILabel TrainingLogic::m_NextTrainingEffect
	UILabel_t1176 * ___m_NextTrainingEffect;
	// UILabel TrainingLogic::m_NextTrainingExpName
	UILabel_t1176 * ___m_NextTrainingExpName;
	// UILabel TrainingLogic::m_TrainingStageName
	UILabel_t1176 * ___m_TrainingStageName;
	// UILabel[] TrainingLogic::m_TrainingEffectAttr
	UILabelU5BU5D_t1203* ___m_TrainingEffectAttr;
	// UnityEngine.GameObject TrainingLogic::m_TrainingEffect
	GameObject_t9 * ___m_TrainingEffect;
	// UILabel TrainingLogic::m_AddCombatValueLabel
	UILabel_t1176 * ___m_AddCombatValueLabel;
	// UIImageButton TrainingLogic::m_SubmitButton
	UIImageButton_t1204 * ___m_SubmitButton;
	// UnityEngine.GameObject TrainingLogic::m_LastTrainingArrow
	GameObject_t9 * ___m_LastTrainingArrow;
	// UnityEngine.GameObject TrainingLogic::m_NextTrainingArrow
	GameObject_t9 * ___m_NextTrainingArrow;
	// UnityEngine.GameObject TrainingLogic::m_ChoosePointGameObject
	GameObject_t9 * ___m_ChoosePointGameObject;
	// System.Int32 TrainingLogic::m_TrainingMax
	int32_t ___m_TrainingMax;
	// System.Int32 TrainingLogic::m_TrainingExp
	int32_t ___m_TrainingExp;
	// System.Int32 TrainingLogic::m_TrainingLevel
	int32_t ___m_TrainingLevel;
	// System.Boolean TrainingLogic::m_AddTraining
	bool ___m_AddTraining;
	// System.Boolean TrainingLogic::m_MinusTraining
	bool ___m_MinusTraining;
	// System.Single TrainingLogic::m_ChangeSpeed
	float ___m_ChangeSpeed;
	// System.Int32 TrainingLogic::m_StageIndex
	int32_t ___m_StageIndex;
	// System.Int32 TrainingLogic::m_StageDragIndex
	int32_t ___m_StageDragIndex;
	// UnityEngine.Vector3 TrainingLogic::m_TouchPos
	Vector3_t121  ___m_TouchPos;
	// System.Boolean TrainingLogic::m_bTurning
	bool ___m_bTurning;
	// System.Int32 TrainingLogic::m_TurnDirection
	int32_t ___m_TurnDirection;
	// UnityEngine.Vector3 TrainingLogic::m_PreTrainingPos
	Vector3_t121  ___m_PreTrainingPos;
	// UnityEngine.Vector3 TrainingLogic::m_CurTrainingPos
	Vector3_t121  ___m_CurTrainingPos;
	// UnityEngine.Vector3 TrainingLogic::m_NextTrainingPos
	Vector3_t121  ___m_NextTrainingPos;
	// System.Boolean TrainingLogic::m_TurningMore
	bool ___m_TurningMore;
	// System.Boolean TrainingLogic::m_LevelUpTurning
	bool ___m_LevelUpTurning;
	// System.Int32 TrainingLogic::m_OriginStage
	int32_t ___m_OriginStage;
	// System.Int32 TrainingLogic::m_ChangeStageCount
	int32_t ___m_ChangeStageCount;
	// System.Int32 TrainingLogic::m_ChoosePoint
	int32_t ___m_ChoosePoint;
	// System.Int32[] TrainingLogic::m_TrainingEffectVal
	Int32U5BU5D_t116* ___m_TrainingEffectVal;
	// System.String[] TrainingLogic::m_TrainingEffectDic
	StringU5BU5D_t333* ___m_TrainingEffectDic;
};
struct TrainingLogic_t1781_StaticFields{
	// TrainingLogic TrainingLogic::m_Instance
	TrainingLogic_t1781 * ___m_Instance;
};
