#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// BelleMatrixWindow
struct BelleMatrixWindow_t1878;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleMatrixItem
struct BelleMatrixItem_t1879  : public MonoBehaviour_t18
{
	// UISprite BelleMatrixItem::sprBack
	UISprite_t1202 * ___sprBack;
	// UnityEngine.GameObject BelleMatrixItem::activeFlag
	GameObject_t9 * ___activeFlag;
	// UnityEngine.GameObject BelleMatrixItem::sprHighlight
	GameObject_t9 * ___sprHighlight;
	// UILabel BelleMatrixItem::labelName
	UILabel_t1176 * ___labelName;
	// UISprite BelleMatrixItem::matrixPic
	UISprite_t1202 * ___matrixPic;
	// UnityEngine.GameObject BelleMatrixItem::openFlag
	GameObject_t9 * ___openFlag;
	// UnityEngine.GameObject BelleMatrixItem::activeTip
	GameObject_t9 * ___activeTip;
	// BelleMatrixWindow BelleMatrixItem::parentWindow
	BelleMatrixWindow_t1878 * ___parentWindow;
};
