#pragma once
#include <stdint.h>
// InvDatabase[]
struct InvDatabaseU5BU5D_t5245;
// System.Collections.Generic.List`1<InvBaseItem>
struct List_1_t5247;
// UIAtlas
struct UIAtlas_t1593;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// InvDatabase
struct InvDatabase_t5246  : public MonoBehaviour_t18
{
	// System.Int32 InvDatabase::databaseID
	int32_t ___databaseID;
	// System.Collections.Generic.List`1<InvBaseItem> InvDatabase::items
	List_1_t5247 * ___items;
	// UIAtlas InvDatabase::iconAtlas
	UIAtlas_t1593 * ___iconAtlas;
};
struct InvDatabase_t5246_StaticFields{
	// InvDatabase[] InvDatabase::mList
	InvDatabaseU5BU5D_t5245* ___mList;
	// System.Boolean InvDatabase::mIsDirty
	bool ___mIsDirty;
};
