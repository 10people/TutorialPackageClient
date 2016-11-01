#pragma once
#include <stdint.h>
// UseItemRemindLogic
struct UseItemRemindLogic_t2088;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UseItemRemindLogic
struct UseItemRemindLogic_t2088  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject UseItemRemindLogic::m_ItemRemind
	GameObject_t9 * ___m_ItemRemind;
	// UISprite UseItemRemindLogic::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite UseItemRemindLogic::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UILabel UseItemRemindLogic::m_TitleNameLabel
	UILabel_t1176 * ___m_TitleNameLabel;
	// System.Collections.Generic.List`1<Games.Item.GameItem> UseItemRemindLogic::m_UseItemBuffer
	List_1_t1244 * ___m_UseItemBuffer;
	// System.Boolean UseItemRemindLogic::m_bOnShow
	bool ___m_bOnShow;
	// System.Single UseItemRemindLogic::m_fStartShowTime
	float ___m_fStartShowTime;
	// System.Boolean UseItemRemindLogic::m_bOnHide
	bool ___m_bOnHide;
	// System.Single UseItemRemindLogic::m_fStartHideTime
	float ___m_fStartHideTime;
};
struct UseItemRemindLogic_t2088_StaticFields{
	// System.Int32 UseItemRemindLogic::m_UseItemBufferSize
	int32_t ___m_UseItemBufferSize;
	// System.Single UseItemRemindLogic::ShowTime
	float ___ShowTime;
	// System.Single UseItemRemindLogic::HideTime
	float ___HideTime;
	// UseItemRemindLogic UseItemRemindLogic::m_Instance
	UseItemRemindLogic_t2088 * ___m_Instance;
};
