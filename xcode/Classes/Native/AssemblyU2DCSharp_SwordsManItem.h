#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// SwordsManController
struct SwordsManController_t1941;
// SwordsManLevelupController
struct SwordsManLevelupController_t1942;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SwordsManItem/Status
#include "AssemblyU2DCSharp_SwordsManItem_Status.h"
// SwordsManItem
struct SwordsManItem_t1943  : public MonoBehaviour_t18
{
	// UILabel SwordsManItem::m_LableLevel
	UILabel_t1176 * ___m_LableLevel;
	// UISprite SwordsManItem::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite SwordsManItem::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UISprite SwordsManItem::m_SelectSprite
	UISprite_t1202 * ___m_SelectSprite;
	// UISprite SwordsManItem::m_LockSprite
	UISprite_t1202 * ___m_LockSprite;
	// SwordsManController SwordsManItem::m_BackParent
	SwordsManController_t1941 * ___m_BackParent;
	// SwordsManLevelupController SwordsManItem::m_LevelUpParent
	SwordsManLevelupController_t1942 * ___m_LevelUpParent;
	// Games.SwordsMan.SwordsMan SwordsManItem::m_oSwordsMan
	SwordsMan_t1175 * ___m_oSwordsMan;
	// SwordsManItem/Status SwordsManItem::m_Status
	int32_t ___m_Status;
};
