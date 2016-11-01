#pragma once
#include <stdint.h>
// FlyWingRoot
struct FlyWingRoot_t1985;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.GameObject
struct GameObject_t9;
// UISlider
struct UISlider_t1219;
// ModelDragLogic
struct ModelDragLogic_t1242;
// UIToggle
struct UIToggle_t1220;
// UILabel
struct UILabel_t1176;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UIImageButton
struct UIImageButton_t1204;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FlyWingRoot
struct FlyWingRoot_t1985  : public MonoBehaviour_t18
{
	// System.Int32 FlyWingRoot::m_CurWantEquipFlyWingId
	int32_t ___m_CurWantEquipFlyWingId;
	// System.Int32 FlyWingRoot::m_CurClickLevelFlyWingId
	int32_t ___m_CurClickLevelFlyWingId;
	// System.Int32 FlyWingRoot::m_PlayerFakeObjID
	int32_t ___m_PlayerFakeObjID;
	// Games.FakeObject.FakeObject FlyWingRoot::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// UnityEngine.GameObject FlyWingRoot::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.Single FlyWingRoot::m_AutoAbsortTime
	float ___m_AutoAbsortTime;
	// System.Boolean FlyWingRoot::m_isAutoAbsort
	bool ___m_isAutoAbsort;
	// UISlider FlyWingRoot::m_UISlider
	UISlider_t1219 * ___m_UISlider;
	// ModelDragLogic FlyWingRoot::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// UnityEngine.GameObject FlyWingRoot::m_DreamFlyWing
	GameObject_t9 * ___m_DreamFlyWing;
	// UnityEngine.GameObject FlyWingRoot::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject FlyWingRoot::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// UnityEngine.GameObject FlyWingRoot::m_AbsortFlyWingBtn
	GameObject_t9 * ___m_AbsortFlyWingBtn;
	// UnityEngine.GameObject FlyWingRoot::m_ChooseFlyWingKindOneLight
	GameObject_t9 * ___m_ChooseFlyWingKindOneLight;
	// UnityEngine.GameObject FlyWingRoot::m_ChooseFlyWingKindSecondLight
	GameObject_t9 * ___m_ChooseFlyWingKindSecondLight;
	// UnityEngine.GameObject FlyWingRoot::m_EquipFlyWingBtn
	GameObject_t9 * ___m_EquipFlyWingBtn;
	// UnityEngine.GameObject FlyWingRoot::m_UnEquipFlyWingBtn
	GameObject_t9 * ___m_UnEquipFlyWingBtn;
	// UnityEngine.GameObject FlyWingRoot::m_NoEnoughMoneyPrompt
	GameObject_t9 * ___m_NoEnoughMoneyPrompt;
	// UIToggle FlyWingRoot::m_ChooseShowHide
	UIToggle_t1220 * ___m_ChooseShowHide;
	// UILabel FlyWingRoot::m_FlyWingKindOneName
	UILabel_t1176 * ___m_FlyWingKindOneName;
	// UILabel FlyWingRoot::m_FlyWingKindSecondName
	UILabel_t1176 * ___m_FlyWingKindSecondName;
	// UILabel FlyWingRoot::m_PropertyName1
	UILabel_t1176 * ___m_PropertyName1;
	// UILabel FlyWingRoot::m_PropertyName2
	UILabel_t1176 * ___m_PropertyName2;
	// UILabel FlyWingRoot::m_PropertyName3
	UILabel_t1176 * ___m_PropertyName3;
	// UILabel FlyWingRoot::m_PropertyName4
	UILabel_t1176 * ___m_PropertyName4;
	// UILabel FlyWingRoot::m_PropertyName5
	UILabel_t1176 * ___m_PropertyName5;
	// UILabel FlyWingRoot::m_PropertyName6
	UILabel_t1176 * ___m_PropertyName6;
	// UILabel FlyWingRoot::m_PropertyVlue1
	UILabel_t1176 * ___m_PropertyVlue1;
	// UILabel FlyWingRoot::m_PropertyVlue2
	UILabel_t1176 * ___m_PropertyVlue2;
	// UILabel FlyWingRoot::m_PropertyVlue3
	UILabel_t1176 * ___m_PropertyVlue3;
	// UILabel FlyWingRoot::m_PropertyVlue4
	UILabel_t1176 * ___m_PropertyVlue4;
	// UILabel FlyWingRoot::m_PropertyVlue5
	UILabel_t1176 * ___m_PropertyVlue5;
	// UILabel FlyWingRoot::m_PropertyVlue6
	UILabel_t1176 * ___m_PropertyVlue6;
	// UILabel FlyWingRoot::m_PropertyVlue_EX1
	UILabel_t1176 * ___m_PropertyVlue_EX1;
	// UILabel FlyWingRoot::m_PropertyVlue_EX2
	UILabel_t1176 * ___m_PropertyVlue_EX2;
	// UILabel FlyWingRoot::m_PropertyVlue_EX3
	UILabel_t1176 * ___m_PropertyVlue_EX3;
	// UILabel FlyWingRoot::m_PropertyVlue_EX4
	UILabel_t1176 * ___m_PropertyVlue_EX4;
	// UILabel FlyWingRoot::m_PropertyVlue_EX5
	UILabel_t1176 * ___m_PropertyVlue_EX5;
	// UILabel FlyWingRoot::m_PropertyVlue_EX6
	UILabel_t1176 * ___m_PropertyVlue_EX6;
	// UILabel FlyWingRoot::m_PropertyNameNow
	UILabel_t1176 * ___m_PropertyNameNow;
	// UILabel FlyWingRoot::m_PropertyVlueNow
	UILabel_t1176 * ___m_PropertyVlueNow;
	// UISprite[] FlyWingRoot::m_CurFlyWingLevelIcon
	UISpriteU5BU5D_t1201* ___m_CurFlyWingLevelIcon;
	// UISprite[] FlyWingRoot::m_CurFlyWingLevelClickIcon
	UISpriteU5BU5D_t1201* ___m_CurFlyWingLevelClickIcon;
	// UILabel[] FlyWingRoot::m_CurFlyWingLevelLabel
	UILabelU5BU5D_t1203* ___m_CurFlyWingLevelLabel;
	// UIImageButton FlyWingRoot::m_FlyWingDreamBtn
	UIImageButton_t1204 * ___m_FlyWingDreamBtn;
	// UILabel FlyWingRoot::m_FightVlue
	UILabel_t1176 * ___m_FightVlue;
	// System.Boolean FlyWingRoot::m_IsShowFakeObjDream
	bool ___m_IsShowFakeObjDream;
	// UILabel FlyWingRoot::m_ButtonLable1
	UILabel_t1176 * ___m_ButtonLable1;
	// UILabel FlyWingRoot::m_ButtonLable2
	UILabel_t1176 * ___m_ButtonLable2;
	// UILabel FlyWingRoot::m_MoneyLab
	UILabel_t1176 * ___m_MoneyLab;
};
struct FlyWingRoot_t1985_StaticFields{
	// System.Int32 FlyWingRoot::FlyWingTypeOne
	int32_t ___FlyWingTypeOne;
	// System.Int32 FlyWingRoot::FlyWingTypeSecond
	int32_t ___FlyWingTypeSecond;
	// System.Int32 FlyWingRoot::MAX_ABSORT_FLYWING
	int32_t ___MAX_ABSORT_FLYWING;
	// System.Single FlyWingRoot::AUTO_ABSORT_TIME
	float ___AUTO_ABSORT_TIME;
	// System.Int32 FlyWingRoot::ABSORT_MONEY
	int32_t ___ABSORT_MONEY;
	// System.Int32 FlyWingRoot::ABSORT_ITEM
	int32_t ___ABSORT_ITEM;
	// FlyWingRoot FlyWingRoot::m_Instance
	FlyWingRoot_t1985 * ___m_Instance;
};
