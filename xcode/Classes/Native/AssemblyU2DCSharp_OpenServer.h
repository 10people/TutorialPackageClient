#pragma once
#include <stdint.h>
// OpenServer
struct OpenServer_t1609;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OpenServer
struct OpenServer_t1609  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject OpenServer::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject OpenServer::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// Games.FakeObject.FakeObject OpenServer::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// System.Int32 OpenServer::m_FakeID
	int32_t ___m_FakeID;
};
struct OpenServer_t1609_StaticFields{
	// OpenServer OpenServer::m_Instance
	OpenServer_t1609 * ___m_Instance;
};
