#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIWidget
struct UIWidget_t5195;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t5238;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIItemStorage
struct UIItemStorage_t5239  : public MonoBehaviour_t18
{
	// System.Int32 UIItemStorage::maxItemCount
	int32_t ___maxItemCount;
	// System.Int32 UIItemStorage::maxRows
	int32_t ___maxRows;
	// System.Int32 UIItemStorage::maxColumns
	int32_t ___maxColumns;
	// UnityEngine.GameObject UIItemStorage::template
	GameObject_t9 * ___template;
	// UIWidget UIItemStorage::background
	UIWidget_t5195 * ___background;
	// System.Int32 UIItemStorage::spacing
	int32_t ___spacing;
	// System.Int32 UIItemStorage::padding
	int32_t ___padding;
	// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::mItems
	List_1_t5238 * ___mItems;
};
