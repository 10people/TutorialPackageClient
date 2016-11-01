#pragma once
#include <stdint.h>
// MountAndFellowLogic
struct MountAndFellowLogic_t1586;
// MountItem
struct MountItem_t1587;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// ModelDragLogic
struct ModelDragLogic_t1242;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MountAndFellowLogic
struct MountAndFellowLogic_t1586  : public MonoBehaviour_t18
{
	// MountItem MountAndFellowLogic::m_MountItemObj
	MountItem_t1587 * ___m_MountItemObj;
	// UnityEngine.GameObject MountAndFellowLogic::m_MountRoot_UIGrid
	GameObject_t9 * ___m_MountRoot_UIGrid;
	// UILabel MountAndFellowLogic::m_MountName
	UILabel_t1176 * ___m_MountName;
	// UILabel MountAndFellowLogic::m_MountDec
	UILabel_t1176 * ___m_MountDec;
	// UILabel MountAndFellowLogic::m_MountSource
	UILabel_t1176 * ___m_MountSource;
	// UILabel MountAndFellowLogic::m_SpeedDec
	UILabel_t1176 * ___m_SpeedDec;
	// UILabel MountAndFellowLogic::m_RidingButtonDec
	UILabel_t1176 * ___m_RidingButtonDec;
	// UIImageButton MountAndFellowLogic::m_RideButton
	UIImageButton_t1204 * ___m_RideButton;
	// UILabel MountAndFellowLogic::m_NoMountDec
	UILabel_t1176 * ___m_NoMountDec;
	// UILabel MountAndFellowLogic::m_MountLeftTime
	UILabel_t1176 * ___m_MountLeftTime;
	// System.Int32 MountAndFellowLogic::m_CurMountID
	int32_t ___m_CurMountID;
	// System.Int32 MountAndFellowLogic::m_nUpdateLeftTimeInterval
	int32_t ___m_nUpdateLeftTimeInterval;
	// Games.FakeObject.FakeObject MountAndFellowLogic::m_MountFakeObj
	FakeObject_t1241 * ___m_MountFakeObj;
	// System.Collections.Generic.List`1<System.Int32> MountAndFellowLogic::m_MountItem
	List_1_t90 * ___m_MountItem;
	// UnityEngine.GameObject MountAndFellowLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject MountAndFellowLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// ModelDragLogic MountAndFellowLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
};
struct MountAndFellowLogic_t1586_StaticFields{
	// MountAndFellowLogic MountAndFellowLogic::m_Instance
	MountAndFellowLogic_t1586 * ___m_Instance;
};
