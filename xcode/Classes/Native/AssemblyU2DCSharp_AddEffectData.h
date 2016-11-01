#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_Effect
struct Tab_Effect_t433;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// AddEffectData
struct AddEffectData_t2117  : public Object_t
{
	// UnityEngine.GameObject AddEffectData::_parentObj
	GameObject_t9 * ____parentObj;
	// GCGame.Table.Tab_Effect AddEffectData::_effectData
	Tab_Effect_t433 * ____effectData;
	// PlayEffectDelegate AddEffectData::_delPlayEffect
	PlayEffectDelegate_t2116 * ____delPlayEffect;
	// System.Object AddEffectData::_param
	Object_t * ____param;
};
