#pragma once
#include <stdint.h>
// EquipStrengthenItemLogic
struct EquipStrengthenItemLogic_t1389;
// Games.Item.GameItem
struct GameItem_t1172;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// EquipStrengthenItemLogic/Type
#include "AssemblyU2DCSharp_EquipStrengthenItemLogic_Type.h"
// ShowItemInfo
struct ShowItemInfo_t1392  : public MonoBehaviour_t18
{
	// EquipStrengthenItemLogic ShowItemInfo::itemLogic
	EquipStrengthenItemLogic_t1389 * ___itemLogic;
	// Games.Item.GameItem ShowItemInfo::m_item
	GameItem_t1172 * ___m_item;
	// EquipStrengthenItemLogic/Type ShowItemInfo::m_type
	int32_t ___m_type;
	// UILabel ShowItemInfo::countLabel
	UILabel_t1176 * ___countLabel;
	// UnityEngine.GameObject ShowItemInfo::equipInfoPart
	GameObject_t9 * ___equipInfoPart;
	// UnityEngine.GameObject ShowItemInfo::materialInfoPart
	GameObject_t9 * ___materialInfoPart;
	// UILabel ShowItemInfo::materialLevel
	UILabel_t1176 * ___materialLevel;
	// UILabel ShowItemInfo::materialExp
	UILabel_t1176 * ___materialExp;
	// UILabel ShowItemInfo::equipStarNum
	UILabel_t1176 * ___equipStarNum;
	// UILabel ShowItemInfo::zhanLiNum
	UILabel_t1176 * ___zhanLiNum;
	// UILabel ShowItemInfo::useLevelNum
	UILabel_t1176 * ___useLevelNum;
	// UILabel ShowItemInfo::baseInfoName
	UILabel_t1176 * ___baseInfoName;
	// UILabel ShowItemInfo::baseInfoCount
	UILabel_t1176 * ___baseInfoCount;
	// UISprite ShowItemInfo::baseInfoIcon
	UISprite_t1202 * ___baseInfoIcon;
	// UISprite ShowItemInfo::baseInfoQuality
	UISprite_t1202 * ___baseInfoQuality;
	// UnityEngine.GameObject[] ShowItemInfo::m_AttrWhole
	GameObjectU5BU5D_t1200* ___m_AttrWhole;
	// UILabel[] ShowItemInfo::m_Attr
	UILabelU5BU5D_t1203* ___m_Attr;
	// UILabel[] ShowItemInfo::m_AttrValue
	UILabelU5BU5D_t1203* ___m_AttrValue;
	// UILabel[] ShowItemInfo::m_EnchanceAttr
	UILabelU5BU5D_t1203* ___m_EnchanceAttr;
	// System.Int32 ShowItemInfo::curCount
	int32_t ___curCount;
};
