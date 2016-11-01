#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SceneMapLogic
struct SceneMapLogic_t1708;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// GCGame.Table.Tab_SceneClass
struct Tab_SceneClass_t621;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SceneMapLogic::.ctor()
 void SceneMapLogic__ctor_m11129 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::.cctor()
 void SceneMapLogic__cctor_m11130 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SceneMapLogic SceneMapLogic::Instance()
 SceneMapLogic_t1708 * SceneMapLogic_Instance_m11131 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::Awake()
 void SceneMapLogic_Awake_m11132 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnDestroy()
 void SceneMapLogic_OnDestroy_m11133 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::Start()
 void SceneMapLogic_Start_m11134 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SceneMapLogic::UpdateTeamPos()
 Object_t * SceneMapLogic_UpdateTeamPos_m11135 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::InitSceneTransmitPoint()
 void SceneMapLogic_InitSceneTransmitPoint_m11136 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnLoadTransmitPoint(UnityEngine.GameObject,System.Object)
 void SceneMapLogic_OnLoadTransmitPoint_m11137 (SceneMapLogic_t1708 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::CloseWindow()
 void SceneMapLogic_CloseWindow_m11138 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::GoToMainCity()
 void SceneMapLogic_GoToMainCity_m11139 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::ShowOtherPlayers()
 void SceneMapLogic_ShowOtherPlayers_m11140 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnWorldMapClick()
 void SceneMapLogic_OnWorldMapClick_m11141 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::ShowSceneInfo(GCGame.Table.Tab_SceneClass)
 void SceneMapLogic_ShowSceneInfo_m11142 (SceneMapLogic_t1708 * __this, Tab_SceneClass_t621 * ___curTabScene, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnChangeChannelClick()
 void SceneMapLogic_OnChangeChannelClick_m11143 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SceneMapLogic::ScenePosToMapPos(UnityEngine.Vector3,GCGame.Table.Tab_SceneClass)
 Vector3_t121  SceneMapLogic_ScenePosToMapPos_m11144 (SceneMapLogic_t1708 * __this, Vector3_t121  ___scenePos, Tab_SceneClass_t621 * ___curTabScene, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SceneMapLogic::MapPosToScenePos(UnityEngine.Vector3,GCGame.Table.Tab_SceneClass)
 Vector3_t121  SceneMapLogic_MapPosToScenePos_m11145 (SceneMapLogic_t1708 * __this, Vector3_t121  ___mapPos, Tab_SceneClass_t621 * ___curTabScene, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnSceneMapClick()
 void SceneMapLogic_OnSceneMapClick_m11146 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::StopPlayClickEffect()
 void SceneMapLogic_StopPlayClickEffect_m11147 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneMapLogic::OnEnable()
 void SceneMapLogic_OnEnable_m11148 (SceneMapLogic_t1708 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
