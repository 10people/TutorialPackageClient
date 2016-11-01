#pragma once
#include <stdint.h>
// SceneMapLogic
struct SceneMapLogic_t1708;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UITexture
struct UITexture_t1378;
// UnityEngine.Transform
struct Transform_t78;
// UISprite
struct UISprite_t1202;
// UIImageButton
struct UIImageButton_t1204;
// GCGame.Table.Tab_SceneClass
struct Tab_SceneClass_t621;
// RecycleList`1<SceneMapLogic/FriendNPCData>
struct RecycleList_1_t1710;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1711;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SceneMapLogic
struct SceneMapLogic_t1708  : public MonoBehaviour_t18
{
	// UILabel SceneMapLogic::m_SceneNameLabel
	UILabel_t1176 * ___m_SceneNameLabel;
	// UILabel SceneMapLogic::m_ScenePosLablex
	UILabel_t1176 * ___m_ScenePosLablex;
	// UILabel SceneMapLogic::m_ScenePosLabley
	UILabel_t1176 * ___m_ScenePosLabley;
	// UnityEngine.GameObject SceneMapLogic::m_TransmitPointGrid
	GameObject_t9 * ___m_TransmitPointGrid;
	// UITexture SceneMapLogic::m_TextureMap
	UITexture_t1378 * ___m_TextureMap;
	// UITexture SceneMapLogic::m_TextureRole
	UITexture_t1378 * ___m_TextureRole;
	// UnityEngine.GameObject SceneMapLogic::m_ObjMapDot
	GameObject_t9 * ___m_ObjMapDot;
	// UnityEngine.GameObject SceneMapLogic::m_ObjMapNpc
	GameObject_t9 * ___m_ObjMapNpc;
	// UnityEngine.GameObject SceneMapLogic::m_ObjMapNpcForVillain
	GameObject_t9 * ___m_ObjMapNpcForVillain;
	// UnityEngine.Transform SceneMapLogic::m_MapRoot
	Transform_t78 * ___m_MapRoot;
	// UISprite SceneMapLogic::m_ClickEffectSprite
	UISprite_t1202 * ___m_ClickEffectSprite;
	// UnityEngine.Transform SceneMapLogic::m_ClickEffectTran
	Transform_t78 * ___m_ClickEffectTran;
	// UIImageButton SceneMapLogic::m_BtnChangeChannel
	UIImageButton_t1204 * ___m_BtnChangeChannel;
	// System.Int32 SceneMapLogic::m_curSceneID
	int32_t ___m_curSceneID;
	// GCGame.Table.Tab_SceneClass SceneMapLogic::m_curTabScene
	Tab_SceneClass_t621 * ___m_curTabScene;
	// System.Boolean SceneMapLogic::m_bLoadingItem
	bool ___m_bLoadingItem;
	// System.Collections.Generic.List`1<UnityEngine.Transform> SceneMapLogic::m_ObjMapFriendDotList
	List_1_t1711 * ___m_ObjMapFriendDotList;
};
struct SceneMapLogic_t1708_StaticFields{
	// SceneMapLogic SceneMapLogic::m_Instance
	SceneMapLogic_t1708 * ___m_Instance;
	// System.Int32 SceneMapLogic::m_curNPCListScene
	int32_t ___m_curNPCListScene;
	// RecycleList`1<SceneMapLogic/FriendNPCData> SceneMapLogic::m_FriendNPCRecycleList
	RecycleList_1_t1710 * ___m_FriendNPCRecycleList;
};
