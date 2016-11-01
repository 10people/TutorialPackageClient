#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Action
struct Action_t1425;
// GCGame.Table.Tab_ItemGetWay
struct Tab_ItemGetWay_t507;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GetInfoItem
struct GetInfoItem_t1426  : public MonoBehaviour_t18
{
	// UISprite GetInfoItem::sprIcon
	UISprite_t1202 * ___sprIcon;
	// UILabel GetInfoItem::lblInfo
	UILabel_t1176 * ___lblInfo;
	// UnityEngine.GameObject GetInfoItem::btnGo
	GameObject_t9 * ___btnGo;
	// System.Action GetInfoItem::closeUIHandler
	Action_t1425 * ___closeUIHandler;
	// GCGame.Table.Tab_ItemGetWay GetInfoItem::mWay
	Tab_ItemGetWay_t507 * ___mWay;
};
