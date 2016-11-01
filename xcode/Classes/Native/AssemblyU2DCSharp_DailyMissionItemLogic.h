#pragma once
#include <stdint.h>
// DailyMissionItemLogic
struct DailyMissionItemLogic_t1367;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite
struct UISprite_t1202;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DailyMissionItemLogic
struct DailyMissionItemLogic_t1367  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject DailyMissionItemLogic::m_DailyMissionRefresh
	GameObject_t9 * ___m_DailyMissionRefresh;
	// System.Int32 DailyMissionItemLogic::m_nMissionID
	int32_t ___m_nMissionID;
	// System.Byte DailyMissionItemLogic::m_yQuality
	uint8_t ___m_yQuality;
	// System.Int32 DailyMissionItemLogic::m_nKind
	int32_t ___m_nKind;
	// UILabel DailyMissionItemLogic::m_NameText
	UILabel_t1176 * ___m_NameText;
	// UILabel DailyMissionItemLogic::m_QualityColorText
	UILabel_t1176 * ___m_QualityColorText;
	// UILabel DailyMissionItemLogic::m_ActivenessText
	UILabel_t1176 * ___m_ActivenessText;
	// UILabel DailyMissionItemLogic::m_StateText
	UILabel_t1176 * ___m_StateText;
	// UILabel DailyMissionItemLogic::m_UpdateText
	UILabel_t1176 * ___m_UpdateText;
	// UILabel DailyMissionItemLogic::m_MisDec
	UILabel_t1176 * ___m_MisDec;
	// UIImageButton DailyMissionItemLogic::m_StateButton
	UIImageButton_t1204 * ___m_StateButton;
	// UIImageButton DailyMissionItemLogic::m_UpdateButton
	UIImageButton_t1204 * ___m_UpdateButton;
	// UIGrid DailyMissionItemLogic::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// UnityEngine.GameObject[] DailyMissionItemLogic::m_AwardItem
	GameObjectU5BU5D_t1200* ___m_AwardItem;
	// UISprite DailyMissionItemLogic::m_ItemSprit
	UISprite_t1202 * ___m_ItemSprit;
	// UILabel[] DailyMissionItemLogic::m_AwardItemNumLable
	UILabelU5BU5D_t1203* ___m_AwardItemNumLable;
	// System.Int32 DailyMissionItemLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct DailyMissionItemLogic_t1367_StaticFields{
	// System.Int32 DailyMissionItemLogic::MaxItemCount
	int32_t ___MaxItemCount;
	// DailyMissionItemLogic DailyMissionItemLogic::m_Instance
	DailyMissionItemLogic_t1367 * ___m_Instance;
};
