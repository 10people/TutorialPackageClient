#pragma once
#include <stdint.h>
// UpdateManager
struct UpdateManager_t5279;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t5281;
// BetterList`1<UpdateManager/DestroyEntry>
struct BetterList_1_t5282;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UpdateManager
struct UpdateManager_t5279  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnUpdate
	List_1_t5281 * ___mOnUpdate;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnLate
	List_1_t5281 * ___mOnLate;
	// System.Collections.Generic.List`1<UpdateManager/UpdateEntry> UpdateManager::mOnCoro
	List_1_t5281 * ___mOnCoro;
	// BetterList`1<UpdateManager/DestroyEntry> UpdateManager::mDest
	BetterList_1_t5282 * ___mDest;
	// System.Single UpdateManager::mTime
	float ___mTime;
};
struct UpdateManager_t5279_StaticFields{
	// UpdateManager UpdateManager::mInst
	UpdateManager_t5279 * ___mInst;
};
