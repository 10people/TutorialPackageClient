#pragma once
#include <stdint.h>
// RewardAwardItem[]
struct RewardAwardItemU5BU5D_t1375;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// UISprite
struct UISprite_t1202;
// RewardAwardItem
struct RewardAwardItem_t1376;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem>
struct Dictionary_2_t1377;
// UITexture
struct UITexture_t1378;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.AwardActivity.DaySignInItem
#include "AssemblyU2DCSharp_Games_AwardActivity_DaySignInItem.h"
// DaySignAwardLogic
struct DaySignAwardLogic_t1228  : public MonoBehaviour_t18
{
	// RewardAwardItem[] DaySignAwardLogic::m_AwardItem
	RewardAwardItemU5BU5D_t1375* ___m_AwardItem;
	// UILabel DaySignAwardLogic::ButtonRewardTipsDetail
	UILabel_t1176 * ___ButtonRewardTipsDetail;
	// UIImageButton DaySignAwardLogic::ButtonGetAward
	UIImageButton_t1204 * ___ButtonGetAward;
	// UILabel DaySignAwardLogic::DrawOrSupplyButton
	UILabel_t1176 * ___DrawOrSupplyButton;
	// UIImageButton DaySignAwardLogic::ButtonReadDetial
	UIImageButton_t1204 * ___ButtonReadDetial;
	// UILabel DaySignAwardLogic::CurMounthIndex
	UILabel_t1176 * ___CurMounthIndex;
	// UILabel DaySignAwardLogic::AllSignedCountsMounth
	UILabel_t1176 * ___AllSignedCountsMounth;
	// UISprite DaySignAwardLogic::RewardDescribe
	UISprite_t1202 * ___RewardDescribe;
	// UILabel DaySignAwardLogic::RewardDescribeLb
	UILabel_t1176 * ___RewardDescribeLb;
	// RewardAwardItem DaySignAwardLogic::m_pointedItem
	RewardAwardItem_t1376 * ___m_pointedItem;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.DaySignInItem> DaySignAwardLogic::DataSignInInfoList
	Dictionary_2_t1377 * ___DataSignInInfoList;
	// System.Int32 DaySignAwardLogic::m_currentSelectedIndex
	int32_t ___m_currentSelectedIndex;
	// Games.AwardActivity.DaySignInItem DaySignAwardLogic::currentSelectedItem
	DaySignInItem_t1379  ___currentSelectedItem;
	// System.Boolean DaySignAwardLogic::isNowWaitingforRewardResult
	bool ___isNowWaitingforRewardResult;
	// UITexture DaySignAwardLogic::m_BellePic
	UITexture_t1378 * ___m_BellePic;
	// UILabel DaySignAwardLogic::m_BelleName
	UILabel_t1176 * ___m_BelleName;
	// UILabel DaySignAwardLogic::m_BelleDesc
	UILabel_t1176 * ___m_BelleDesc;
};
