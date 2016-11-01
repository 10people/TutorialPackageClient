#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.Fellow.Fellow
struct Fellow_t1174;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MaterialPartnerItemLogic
struct MaterialPartnerItemLogic_t1541  : public MonoBehaviour_t18
{
	// UISprite MaterialPartnerItemLogic::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite MaterialPartnerItemLogic::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UnityEngine.GameObject MaterialPartnerItemLogic::m_SelectMark
	GameObject_t9 * ___m_SelectMark;
	// Games.Fellow.Fellow MaterialPartnerItemLogic::m_fellow
	Fellow_t1174 * ___m_fellow;
	// System.Boolean MaterialPartnerItemLogic::m_bChoose
	bool ___m_bChoose;
	// System.Int32 MaterialPartnerItemLogic::m_StarExp
	int32_t ___m_StarExp;
};
