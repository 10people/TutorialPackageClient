#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TrackMoveControl
struct TrackMoveControl_t5167  : public MonoBehaviour_t18
{
	// System.Single TrackMoveControl::_moveDistance
	float ____moveDistance;
	// UnityEngine.Vector3 TrackMoveControl::_curPosition
	Vector3_t121  ____curPosition;
	// UnityEngine.GameObject[] TrackMoveControl::MoveObjects
	GameObjectU5BU5D_t1200* ___MoveObjects;
	// System.Single TrackMoveControl::MoveValue
	float ___MoveValue;
	// System.Boolean TrackMoveControl::m_IsInit
	bool ___m_IsInit;
};
