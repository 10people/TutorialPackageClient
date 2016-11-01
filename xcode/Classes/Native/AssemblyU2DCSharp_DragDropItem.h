#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UIRoot
struct UIRoot_t5259;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DragDropItem
struct DragDropItem_t5260  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject DragDropItem::prefab
	GameObject_t9 * ___prefab;
	// UnityEngine.Transform DragDropItem::mTrans
	Transform_t78 * ___mTrans;
	// System.Boolean DragDropItem::mPressed
	bool ___mPressed;
	// System.Int32 DragDropItem::mTouchID
	int32_t ___mTouchID;
	// System.Boolean DragDropItem::mIsDragging
	bool ___mIsDragging;
	// System.Boolean DragDropItem::mSticky
	bool ___mSticky;
	// UnityEngine.Transform DragDropItem::mParent
	Transform_t78 * ___mParent;
	// UIRoot DragDropItem::mRoot
	UIRoot_t5259 * ___mRoot;
};
