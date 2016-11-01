#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<DamageBoard>>
struct Dictionary_2_t1373;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType>>
struct Dictionary_2_t187;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DamageBoardManager/DAMAGE_BOARD_TYPE
#include "AssemblyU2DCSharp_DamageBoardManager_DAMAGE_BOARD_TYPE.h"
// DamageBoardManager
struct DamageBoardManager_t1374  : public MonoBehaviour_t18
{
	// System.Boolean DamageBoardManager::mIsInit
	bool ___mIsInit;
};
struct DamageBoardManager_t1374_StaticFields{
	// DamageBoardManager/DAMAGE_BOARD_TYPE DamageBoardManager::mCurType
	int32_t ___mCurType;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<DamageBoard>> DamageBoardManager::m_EnabledDictionary
	Dictionary_2_t1373 * ___m_EnabledDictionary;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<DamageBoard>> DamageBoardManager::m_DisabledDictionary
	Dictionary_2_t1373 * ___m_DisabledDictionary;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_DamageBoardType>> DamageBoardManager::DamageBoardType
	Dictionary_2_t187 * ___DamageBoardType;
};
