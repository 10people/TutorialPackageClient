#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// GCGame.Table.Tab_Teleport
struct Tab_Teleport_t681;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TeleportPoint
struct TeleportPoint_t4526  : public MonoBehaviour_t18
{
	// System.Int32 TeleportPoint::TeleportID
	int32_t ___TeleportID;
	// System.Int32 TeleportPoint::ActiveRadius
	int32_t ___ActiveRadius;
	// System.Boolean TeleportPoint::m_bValid
	bool ___m_bValid;
	// System.Single TeleportPoint::m_fLastInvaildTime
	float ___m_fLastInvaildTime;
	// UnityEngine.GameObject TeleportPoint::m_HeadInfoBoard
	GameObject_t9 * ___m_HeadInfoBoard;
	// UnityEngine.GameObject TeleportPoint::m_NameBoard
	GameObject_t9 * ___m_NameBoard;
	// UnityEngine.Transform TeleportPoint::m_MainPlayerTransform
	Transform_t78 * ___m_MainPlayerTransform;
	// UnityEngine.Transform TeleportPoint::m_TeleportTransform
	Transform_t78 * ___m_TeleportTransform;
	// GCGame.Table.Tab_Teleport TeleportPoint::m_tabTeleport
	Tab_Teleport_t681 * ___m_tabTeleport;
	// System.Boolean TeleportPoint::m_bEnterPKSceneCancel
	bool ___m_bEnterPKSceneCancel;
};
