#pragma once
#include <stdint.h>
// EquipRemindLogic
struct EquipRemindLogic_t1381;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// UIImageButton
struct UIImageButton_t1204;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquipRemindLogic
struct EquipRemindLogic_t1381  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject EquipRemindLogic::m_EquipRemind
	GameObject_t9 * ___m_EquipRemind;
	// UISprite EquipRemindLogic::m_EquipIconSprite
	UISprite_t1202 * ___m_EquipIconSprite;
	// UISprite EquipRemindLogic::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UILabel EquipRemindLogic::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UILabel EquipRemindLogic::m_LevelLabel
	UILabel_t1176 * ___m_LevelLabel;
	// System.Collections.Generic.List`1<Games.Item.GameItem> EquipRemindLogic::m_EquipBuffer
	List_1_t1244 * ___m_EquipBuffer;
	// System.Boolean EquipRemindLogic::m_bOnShow
	bool ___m_bOnShow;
	// System.Single EquipRemindLogic::m_fStartShowTime
	float ___m_fStartShowTime;
	// System.Boolean EquipRemindLogic::m_bOnHide
	bool ___m_bOnHide;
	// System.Single EquipRemindLogic::m_fStartHideTime
	float ___m_fStartHideTime;
	// UIImageButton EquipRemindLogic::m_EquipButton
	UIImageButton_t1204 * ___m_EquipButton;
	// System.Int32 EquipRemindLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct EquipRemindLogic_t1381_StaticFields{
	// System.Int32 EquipRemindLogic::EquipBufferSize
	int32_t ___EquipBufferSize;
	// System.Single EquipRemindLogic::ShowTime
	float ___ShowTime;
	// System.Single EquipRemindLogic::HideTime
	float ___HideTime;
	// EquipRemindLogic EquipRemindLogic::m_Instance
	EquipRemindLogic_t1381 * ___m_Instance;
	// System.Int32 EquipRemindLogic::m_OpenNewPlayerIndex
	int32_t ___m_OpenNewPlayerIndex;
};
