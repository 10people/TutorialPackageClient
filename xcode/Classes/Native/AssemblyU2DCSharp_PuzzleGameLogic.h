#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// PuzzlePieceLogic[]
struct PuzzlePieceLogicU5BU5D_t1674;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// TweenAlpha
struct TweenAlpha_t1261;
// PuzzleGameLogic
struct PuzzleGameLogic_t1676;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PuzzleGameLogic
struct PuzzleGameLogic_t1676  : public MonoBehaviour_t18
{
	// UILabel PuzzleGameLogic::m_RemainTimeLabel
	UILabel_t1176 * ___m_RemainTimeLabel;
	// PuzzlePieceLogic[] PuzzleGameLogic::m_PuzzlePiece
	PuzzlePieceLogicU5BU5D_t1674* ___m_PuzzlePiece;
	// UnityEngine.GameObject[] PuzzleGameLogic::m_PieceGoal
	GameObjectU5BU5D_t1200* ___m_PieceGoal;
	// TweenAlpha PuzzleGameLogic::m_CompleteTween
	TweenAlpha_t1261 * ___m_CompleteTween;
	// System.Int32 PuzzleGameLogic::RemainTime
	int32_t ___RemainTime;
	// System.Int32 PuzzleGameLogic::CompleteDelay
	int32_t ___CompleteDelay;
	// System.Single PuzzleGameLogic::CloseDelay
	float ___CloseDelay;
	// System.Single PuzzleGameLogic::DestDistance
	float ___DestDistance;
};
struct PuzzleGameLogic_t1676_StaticFields{
	// System.Int32 PuzzleGameLogic::m_MissionID
	int32_t ___m_MissionID;
	// PuzzleGameLogic PuzzleGameLogic::m_Instance
	PuzzleGameLogic_t1676 * ___m_Instance;
};
