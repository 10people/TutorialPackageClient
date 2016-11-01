#pragma once
#include <stdint.h>
// UITexture
struct UITexture_t1378;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UIControllerBase`1<MarryRootLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_11.h"
// MarryRootLogic
struct MarryRootLogic_t1532  : public UIControllerBase_1_t1533
{
	// UITexture MarryRootLogic::m_NPCHead
	UITexture_t1378 * ___m_NPCHead;
	// UILabel MarryRootLogic::m_NPCTalk
	UILabel_t1176 * ___m_NPCTalk;
	// UILabel MarryRootLogic::m_NPCName
	UILabel_t1176 * ___m_NPCName;
	// UnityEngine.GameObject MarryRootLogic::m_Button1
	GameObject_t9 * ___m_Button1;
	// UnityEngine.GameObject MarryRootLogic::m_Button2
	GameObject_t9 * ___m_Button2;
	// UILabel MarryRootLogic::m_Button1Text
	UILabel_t1176 * ___m_Button1Text;
	// UILabel MarryRootLogic::m_Button2Text
	UILabel_t1176 * ___m_Button2Text;
	// System.Int32 MarryRootLogic::m_Mode
	int32_t ___m_Mode;
};
struct MarryRootLogic_t1532_StaticFields{
	// System.Int32 MarryRootLogic::MARRY_MODE
	int32_t ___MARRY_MODE;
	// System.Int32 MarryRootLogic::DIVORCE_MODE
	int32_t ___DIVORCE_MODE;
	// System.Int32 MarryRootLogic::PARADE_MODE
	int32_t ___PARADE_MODE;
	// System.Int32 MarryRootLogic::DIVORCE_MODE_STEP1
	int32_t ___DIVORCE_MODE_STEP1;
	// System.Int32 MarryRootLogic::DIVORCE_MODE_STEP2
	int32_t ___DIVORCE_MODE_STEP2;
	// System.UInt64 MarryRootLogic::m_SavedGUID
	uint64_t ___m_SavedGUID;
};
