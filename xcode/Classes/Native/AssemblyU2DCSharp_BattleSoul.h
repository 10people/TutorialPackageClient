#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// BattleSoulMaker
struct BattleSoulMaker_t4472;
// BattleSoul/delDestroy
struct delDestroy_t5014;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_t5015;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BattleSoul
struct BattleSoul_t5013  : public Object_t
{
	// UnityEngine.GameObject BattleSoul::m_Go
	GameObject_t9 * ___m_Go;
	// BattleSoulMaker BattleSoul::m_Maker
	BattleSoulMaker_t4472 * ___m_Maker;
	// System.Single BattleSoul::timer
	float ___timer;
	// System.Single BattleSoul::lifetime
	float ___lifetime;
	// BattleSoul/delDestroy BattleSoul::destroySoul
	delDestroy_t5014 * ___destroySoul;
	// UnityEngine.Color BattleSoul::_initColor
	Color_t939  ____initColor;
	// UnityEngine.Color BattleSoul::_dstColor
	Color_t939  ____dstColor;
	// UnityEngine.MeshRenderer[] BattleSoul::_meshrenders
	MeshRendererU5BU5D_t5015* ____meshrenders;
};
