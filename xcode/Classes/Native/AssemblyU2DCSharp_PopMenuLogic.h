#pragma once
#include <stdint.h>
// PopMenuLogic
struct PopMenuLogic_t1663;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PopMenuLogic
struct PopMenuLogic_t1663  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PopMenuLogic::m_PopMenuOffset
	GameObject_t9 * ___m_PopMenuOffset;
	// UnityEngine.GameObject PopMenuLogic::m_MenuItemGrid
	GameObject_t9 * ___m_MenuItemGrid;
	// System.Int32 PopMenuLogic::m_MenuItemsNum
	int32_t ___m_MenuItemsNum;
	// System.UInt64 PopMenuLogic::m_PopMenuSelectGuid
	uint64_t ___m_PopMenuSelectGuid;
	// System.String PopMenuLogic::m_PopMenuSelectName
	String_t* ___m_PopMenuSelectName;
	// UnityEngine.GameObject PopMenuLogic::m_resMenuItem
	GameObject_t9 * ___m_resMenuItem;
};
struct PopMenuLogic_t1663_StaticFields{
	// PopMenuLogic PopMenuLogic::m_Instance
	PopMenuLogic_t1663 * ___m_Instance;
};
