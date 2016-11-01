#pragma once
#include <stdint.h>
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// System.Int32[]
struct Int32U5BU5D_t116;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WorldMapWindow
struct WorldMapWindow_t2083  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject[] WorldMapWindow::m_MapTexs
	GameObjectU5BU5D_t1200* ___m_MapTexs;
	// System.Int32[] WorldMapWindow::m_MapIDs
	Int32U5BU5D_t116* ___m_MapIDs;
	// UnityEngine.Vector3[] WorldMapWindow::m_RolePos
	Vector3U5BU5D_t1262* ___m_RolePos;
	// UnityEngine.GameObject WorldMapWindow::m_SprRole
	GameObject_t9 * ___m_SprRole;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WorldMapWindow::m_objTeamSprite
	List_1_t1289 * ___m_objTeamSprite;
	// System.Int32 WorldMapWindow::m_curShowSceneID
	int32_t ___m_curShowSceneID;
};
