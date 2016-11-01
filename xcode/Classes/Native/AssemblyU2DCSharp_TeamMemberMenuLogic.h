#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TeamMemberMenuLogic
struct TeamMemberMenuLogic_t1776  : public MonoBehaviour_t18
{
	// System.UInt64 TeamMemberMenuLogic::m_Guid
	uint64_t ___m_Guid;
	// UIGrid TeamMemberMenuLogic::m_ButtonGrid
	UIGrid_t1199 * ___m_ButtonGrid;
	// UnityEngine.GameObject TeamMemberMenuLogic::m_TeamTransButton
	GameObject_t9 * ___m_TeamTransButton;
	// UnityEngine.GameObject TeamMemberMenuLogic::m_TeamLeaderButton
	GameObject_t9 * ___m_TeamLeaderButton;
	// UISprite TeamMemberMenuLogic::m_MenuBckground
	UISprite_t1202 * ___m_MenuBckground;
	// System.Int32 TeamMemberMenuLogic::m_TeamIndex
	int32_t ___m_TeamIndex;
	// System.String TeamMemberMenuLogic::m_Name
	String_t* ___m_Name;
	// System.Int32 TeamMemberMenuLogic::MenuFullHeight
	int32_t ___MenuFullHeight;
	// System.Int32 TeamMemberMenuLogic::ButtonHeight
	int32_t ___ButtonHeight;
};
