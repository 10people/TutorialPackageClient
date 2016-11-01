#pragma once
#include <stdint.h>
// Games.LogicObj.Obj_NPC
struct Obj_NPC_t1569;
// System.String
struct String_t;
// BillBoard
struct BillBoard_t1570;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionBoard
struct MissionBoard_t1571  : public MonoBehaviour_t18
{
	// Games.LogicObj.Obj_NPC MissionBoard::m_MissionNpc
	Obj_NPC_t1569 * ___m_MissionNpc;
	// System.Single MissionBoard::m_MissionBoadTime
	float ___m_MissionBoadTime;
	// System.String MissionBoard::m_MissionCanAcceptedSprit
	String_t* ___m_MissionCanAcceptedSprit;
	// System.String MissionBoard::m_MissionCanCompletedSprit
	String_t* ___m_MissionCanCompletedSprit;
	// System.String MissionBoard::m_MissionCompletedSprit
	String_t* ___m_MissionCompletedSprit;
	// BillBoard MissionBoard::m_curBillBoard
	BillBoard_t1570 * ___m_curBillBoard;
};
