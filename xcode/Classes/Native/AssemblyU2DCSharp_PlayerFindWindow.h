#pragma once
#include <stdint.h>
// PlayerFindWindow
struct PlayerFindWindow_t1651;
// UnityEngine.GameObject
struct GameObject_t9;
// UIInput
struct UIInput_t1231;
// UIImageButton
struct UIImageButton_t1204;
// PlayerFindItemLogic
struct PlayerFindItemLogic_t1652;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerFindWindow
struct PlayerFindWindow_t1651  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PlayerFindWindow::m_PlayerFindListGrid
	GameObject_t9 * ___m_PlayerFindListGrid;
	// UIInput PlayerFindWindow::m_NameInput
	UIInput_t1231 * ___m_NameInput;
	// UIImageButton PlayerFindWindow::m_AddFreindButton
	UIImageButton_t1204 * ___m_AddFreindButton;
	// UIImageButton PlayerFindWindow::m_TrailButton
	UIImageButton_t1204 * ___m_TrailButton;
	// PlayerFindItemLogic PlayerFindWindow::m_SelectItem
	PlayerFindItemLogic_t1652 * ___m_SelectItem;
};
struct PlayerFindWindow_t1651_StaticFields{
	// PlayerFindWindow PlayerFindWindow::m_Instance
	PlayerFindWindow_t1651 * ___m_Instance;
};
