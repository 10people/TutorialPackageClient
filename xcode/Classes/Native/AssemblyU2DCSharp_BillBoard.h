#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BillBoard
struct BillBoard_t1570  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BillBoard::m_BindObj
	GameObject_t9 * ___m_BindObj;
	// System.Single BillBoard::m_fDeltaHeight
	float ___m_fDeltaHeight;
	// UnityEngine.Transform BillBoard::m_Transform
	Transform_t78 * ___m_Transform;
	// UnityEngine.Vector3 BillBoard::m_Position
	Vector3_t121  ___m_Position;
	// UnityEngine.Transform BillBoard::m_BindObjTrans
	Transform_t78 * ___m_BindObjTrans;
};
