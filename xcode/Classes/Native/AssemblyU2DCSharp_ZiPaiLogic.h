#pragma once
#include <stdint.h>
// UISprite[]
struct UISpriteU5BU5D_t1201;
// System.Int32[]
struct Int32U5BU5D_t116;
// TweenAlpha
struct TweenAlpha_t1261;
// UILabel
struct UILabel_t1176;
// UIControllerBase`1<ZiPaiLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_51.h"
// ZiPaiLogic
struct ZiPaiLogic_t2111  : public UIControllerBase_1_t2112
{
	// UISprite[] ZiPaiLogic::m_NormalSprit
	UISpriteU5BU5D_t1201* ___m_NormalSprit;
	// UISprite[] ZiPaiLogic::m_AcitiveSprit
	UISpriteU5BU5D_t1201* ___m_AcitiveSprit;
	// System.Int32[] ZiPaiLogic::m_RightSort
	Int32U5BU5D_t116* ___m_RightSort;
	// System.Int32[] ZiPaiLogic::m_CurSort
	Int32U5BU5D_t116* ___m_CurSort;
	// System.Int32 ZiPaiLogic::m_nLastIndex
	int32_t ___m_nLastIndex;
	// System.Single ZiPaiLogic::m_GameTime
	float ___m_GameTime;
	// System.Single ZiPaiLogic::m_EndIntervalTime
	float ___m_EndIntervalTime;
	// System.Single ZiPaiLogic::m_CurTimeCount
	float ___m_CurTimeCount;
	// TweenAlpha ZiPaiLogic::m_FinishEffect
	TweenAlpha_t1261 * ___m_FinishEffect;
	// System.Single ZiPaiLogic::m_CheckFinishTime
	float ___m_CheckFinishTime;
	// System.Single ZiPaiLogic::m_CurCheckTimeCount
	float ___m_CurCheckTimeCount;
	// System.Boolean ZiPaiLogic::m_bFinishFlag
	bool ___m_bFinishFlag;
	// UILabel ZiPaiLogic::m_TimeCountText
	UILabel_t1176 * ___m_TimeCountText;
	// System.Single ZiPaiLogic::m_TipTimeCount
	float ___m_TipTimeCount;
};
