#pragma once
#include <stdint.h>
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoMovePos
#include "AssemblyU2DCSharp_AutoMovePos.h"
// AutoMove
struct AutoMove_t4468  : public MonoBehaviour_t18
{
	// System.Int32 AutoMove::m_nCurPosSerial
	int32_t ___m_nCurPosSerial;
	// System.Boolean AutoMove::m_bIsMove
	bool ___m_bIsMove;
	// Games.LogicObj.Obj_Character AutoMove::m_BindObj
	Obj_Character_t1772 * ___m_BindObj;
	// AutoMovePos AutoMove::m_AutoMovePos
	AutoMovePos_t4533  ___m_AutoMovePos;
};
