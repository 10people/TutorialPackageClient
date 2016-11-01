#pragma once
#include <stdint.h>
// Games.ObjAnimModule.ObjAnimModel
struct ObjAnimModel_t4799;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Obj_Mount
struct Obj_Mount_t4395  : public MonoBehaviour_t18
{
	// Games.ObjAnimModule.ObjAnimModel Obj_Mount::m_MountPlayer
	ObjAnimModel_t4799 * ___m_MountPlayer;
	// Games.LogicObj.Obj_OtherPlayer Obj_Mount::m_PlayerObj
	Obj_OtherPlayer_t1655 * ___m_PlayerObj;
	// System.Int32 Obj_Mount::m_MountID
	int32_t ___m_MountID;
};
