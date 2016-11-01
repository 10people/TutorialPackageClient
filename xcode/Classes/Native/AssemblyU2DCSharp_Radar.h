#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIPanel
struct UIPanel_t1364;
// System.Collections.Generic.List`1<UISprite>
struct List_1_t1305;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Radar
struct Radar_t2033  : public MonoBehaviour_t18
{
	// System.Single Radar::m_mapTexWidth
	float ___m_mapTexWidth;
	// System.Single Radar::m_mapTexHeight
	float ___m_mapTexHeight;
	// System.Single Radar::MapScreenHalfWidth
	float ___MapScreenHalfWidth;
	// System.Single Radar::MapScreenHalfHeight
	float ___MapScreenHalfHeight;
	// System.Single Radar::UPDATE_DELAY
	float ___UPDATE_DELAY;
	// UnityEngine.GameObject Radar::MapClip
	GameObject_t9 * ___MapClip;
	// UnityEngine.GameObject Radar::ObjArrow
	GameObject_t9 * ___ObjArrow;
	// UnityEngine.GameObject Radar::FriendPoint
	GameObject_t9 * ___FriendPoint;
	// UnityEngine.GameObject Radar::NeutralPoint
	GameObject_t9 * ___NeutralPoint;
	// UnityEngine.GameObject Radar::EnemyPoint
	GameObject_t9 * ___EnemyPoint;
	// UnityEngine.GameObject Radar::OtherPoint
	GameObject_t9 * ___OtherPoint;
	// UILabel Radar::LabelPos
	UILabel_t1176 * ___LabelPos;
	// UnityEngine.GameObject Radar::TexTarget
	GameObject_t9 * ___TexTarget;
	// UILabel Radar::LabelSceneName
	UILabel_t1176 * ___LabelSceneName;
	// UILabel Radar::LabelChannel
	UILabel_t1176 * ___LabelChannel;
	// UIPanel Radar::PanelMapClip
	UIPanel_t1364 * ___PanelMapClip;
	// UnityEngine.Vector3 Radar::arrowPos
	Vector3_t121  ___arrowPos;
	// UnityEngine.Vector3 Radar::arrowRot
	Vector3_t121  ___arrowRot;
	// UnityEngine.Vector3 Radar::mapPos
	Vector3_t121  ___mapPos;
	// System.Collections.Generic.List`1<UISprite> Radar::TexListFriend
	List_1_t1305 * ___TexListFriend;
	// System.Collections.Generic.List`1<UISprite> Radar::TexListNeutral
	List_1_t1305 * ___TexListNeutral;
	// System.Collections.Generic.List`1<UISprite> Radar::TexListEnemy
	List_1_t1305 * ___TexListEnemy;
	// System.Collections.Generic.List`1<UISprite> Radar::TexListOther
	List_1_t1305 * ___TexListOther;
	// System.Single Radar::m_scale
	float ___m_scale;
	// System.Boolean Radar::m_bLoadMap
	bool ___m_bLoadMap;
};
