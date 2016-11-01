#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// DamageBoardManager
struct DamageBoardManager_t1374;
// SceneEffectBehaviourController
struct SceneEffectBehaviourController_t2131;
// GameObjectPool
struct GameObjectPool_t2186;
// GuideDirectionSign
struct GuideDirectionSign_t5171;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// Games.Scene.ActiveScene
struct ActiveScene_t2175  : public Object_t
{
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_MainCamera
	GameObject_t9 * ___m_MainCamera;
	// System.Int32 Games.Scene.ActiveScene::m_nCurSceneServerID
	int32_t ___m_nCurSceneServerID;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_UIRoot
	GameObject_t9 * ___m_UIRoot;
	// UnityEngine.GameObject[] Games.Scene.ActiveScene::m_SceneAudioSources
	GameObjectU5BU5D_t1200* ___m_SceneAudioSources;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_Teleport
	GameObject_t9 * ___m_Teleport;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_TeleportCopyScene
	GameObject_t9 * ___m_TeleportCopyScene;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_DamageBoardRoot
	GameObject_t9 * ___m_DamageBoardRoot;
	// DamageBoardManager Games.Scene.ActiveScene::m_DamageBoardManager
	DamageBoardManager_t1374 * ___m_DamageBoardManager;
	// UnityEngine.GameObject[] Games.Scene.ActiveScene::m_QingGongPointList
	GameObjectU5BU5D_t1200* ___m_QingGongPointList;
	// SceneEffectBehaviourController Games.Scene.ActiveScene::m_sceneEffect
	SceneEffectBehaviourController_t2131 * ___m_sceneEffect;
	// System.Single Games.Scene.ActiveScene::m_ChangeTime
	float ___m_ChangeTime;
	// System.Single Games.Scene.ActiveScene::m_SceneTimeScaleStart
	float ___m_SceneTimeScaleStart;
	// GameObjectPool Games.Scene.ActiveScene::m_NameBoardPool
	GameObjectPool_t2186 * ___m_NameBoardPool;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_MovingCircle
	GameObject_t9 * ___m_MovingCircle;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_SelectCircle
	GameObject_t9 * ___m_SelectCircle;
	// UnityEngine.GameObject Games.Scene.ActiveScene::m_SelectObj
	GameObject_t9 * ___m_SelectObj;
	// GuideDirectionSign Games.Scene.ActiveScene::m_GuideDirSign
	GuideDirectionSign_t5171 * ___m_GuideDirSign;
	// System.Single Games.Scene.ActiveScene::m_curMainPlayerCircleScale
	float ___m_curMainPlayerCircleScale;
	// System.Single Games.Scene.ActiveScene::m_curMainPlayerCircleScaleOnMount
	float ___m_curMainPlayerCircleScaleOnMount;
	// UnityEngine.GameObject Games.Scene.ActiveScene::<NameBoardRoot>k__BackingField
	GameObject_t9 * ___U3CNameBoardRootU3Ek__BackingField;
	// UnityEngine.GameObject Games.Scene.ActiveScene::<FakeObjRoot>k__BackingField
	GameObject_t9 * ___U3CFakeObjRootU3Ek__BackingField;
	// UnityEngine.GameObject Games.Scene.ActiveScene::<DropItemBoardRoot>k__BackingField
	GameObject_t9 * ___U3CDropItemBoardRootU3Ek__BackingField;
};
struct ActiveScene_t2175_StaticFields{
	// UnityEngine.LayerMask Games.Scene.ActiveScene::MoveLayerMask
	LayerMask_t39  ___MoveLayerMask;
	// UnityEngine.RaycastHit Games.Scene.ActiveScene::m_moveRaycastHit
	RaycastHit_t11  ___m_moveRaycastHit;
};
