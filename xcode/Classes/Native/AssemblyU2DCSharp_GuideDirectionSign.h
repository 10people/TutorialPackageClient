#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// AutoSearchPoint
struct AutoSearchPoint_t4537;
// AutoSearchPath
struct AutoSearchPath_t4536;
// UnityEngine.NavMeshPath
struct NavMeshPath_t5173;
struct NavMeshPath_t5173_marshaled;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// GuideDirectionSign/ArrowAnim[]
struct ArrowAnimU5BU5D_t5174;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GuideDirectionSign
struct GuideDirectionSign_t5171  : public MonoBehaviour_t18
{
	// System.Single GuideDirectionSign::m_fReCalcPathtimer
	float ___m_fReCalcPathtimer;
	// System.Single GuideDirectionSign::m_fCheckCornerReachTimer
	float ___m_fCheckCornerReachTimer;
	// UnityEngine.Transform GuideDirectionSign::m_circleTrans
	Transform_t78 * ___m_circleTrans;
	// UnityEngine.Transform GuideDirectionSign::m_arrowTrans
	Transform_t78 * ___m_arrowTrans;
	// UnityEngine.Transform GuideDirectionSign::m_destEffectTrans
	Transform_t78 * ___m_destEffectTrans;
	// UnityEngine.Transform[] GuideDirectionSign::m_ArrowEffectTrans
	TransformU5BU5D_t77* ___m_ArrowEffectTrans;
	// System.Boolean GuideDirectionSign::m_bShowDestEffect
	bool ___m_bShowDestEffect;
	// Games.LogicObj.Obj_MainPlayer GuideDirectionSign::m_mainPlayer
	Obj_MainPlayer_t1732 * ___m_mainPlayer;
	// AutoSearchPoint GuideDirectionSign::m_Destination
	AutoSearchPoint_t4537 * ___m_Destination;
	// AutoSearchPath GuideDirectionSign::m_Path
	AutoSearchPath_t4536 * ___m_Path;
	// UnityEngine.NavMeshPath GuideDirectionSign::m_NavPath
	NavMeshPath_t5173 * ___m_NavPath;
	// UnityEngine.Vector3[] GuideDirectionSign::m_NavPathCorners
	Vector3U5BU5D_t1262* ___m_NavPathCorners;
	// System.Int32 GuideDirectionSign::m_nNextCornerIdx
	int32_t ___m_nNextCornerIdx;
	// System.Boolean GuideDirectionSign::_hasInited
	bool ____hasInited;
	// System.Int32 GuideDirectionSign::arrowsMax
	int32_t ___arrowsMax;
	// System.Single GuideDirectionSign::arrowinterval
	float ___arrowinterval;
	// GuideDirectionSign/ArrowAnim[] GuideDirectionSign::arrowAnims
	ArrowAnimU5BU5D_t5174* ___arrowAnims;
};
struct GuideDirectionSign_t5171_StaticFields{
	// System.String GuideDirectionSign::m_EffectPrefabPath
	String_t* ___m_EffectPrefabPath;
	// System.String GuideDirectionSign::m_EffectPrefab2Path
	String_t* ___m_EffectPrefab2Path;
	// System.String GuideDirectionSign::m_EffectPrefab3Path
	String_t* ___m_EffectPrefab3Path;
	// System.String GuideDirectionSign::m_arrowObjectName
	String_t* ___m_arrowObjectName;
	// System.String GuideDirectionSign::m_rotatedCircleName
	String_t* ___m_rotatedCircleName;
	// System.Single GuideDirectionSign::m_fCornerReachCheckDistanceSqr
	float ___m_fCornerReachCheckDistanceSqr;
	// System.Single GuideDirectionSign::m_fReCalcPathInterval
	float ___m_fReCalcPathInterval;
	// System.Single GuideDirectionSign::m_fCheckCornerReachInterval
	float ___m_fCheckCornerReachInterval;
	// System.Single GuideDirectionSign::m_fArrowRotateSpeed
	float ___m_fArrowRotateSpeed;
	// System.Boolean GuideDirectionSign::m_bHasDestination
	bool ___m_bHasDestination;
};
