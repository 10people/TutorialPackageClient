#pragma once
#include <stdint.h>
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.GameObject
struct GameObject_t9;
// ModelDragLogic
struct ModelDragLogic_t1242;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FlyWingDream
struct FlyWingDream_t1410  : public MonoBehaviour_t18
{
	// System.Int32 FlyWingDream::m_CurClickItemId
	int32_t ___m_CurClickItemId;
	// System.Int32 FlyWingDream::m_PlayerFakeObjID
	int32_t ___m_PlayerFakeObjID;
	// Games.FakeObject.FakeObject FlyWingDream::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// UnityEngine.GameObject FlyWingDream::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// ModelDragLogic FlyWingDream::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UnityEngine.GameObject FlyWingDream::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject FlyWingDream::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// UILabel FlyWingDream::m_DreamText
	UILabel_t1176 * ___m_DreamText;
	// UnityEngine.GameObject FlyWingDream::m_DreamFlyWingListItem
	GameObject_t9 * ___m_DreamFlyWingListItem;
	// UIGrid FlyWingDream::m_DreamFlyWingListGrid
	UIGrid_t1199 * ___m_DreamFlyWingListGrid;
};
