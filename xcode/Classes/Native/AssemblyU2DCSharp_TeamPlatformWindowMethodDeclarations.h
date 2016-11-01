#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TeamPlatformWindow
struct TeamPlatformWindow_t1789;
// TabButton
struct TabButton_t1210;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void TeamPlatformWindow::.ctor()
 void TeamPlatformWindow__ctor_m14050 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::.cctor()
 void TeamPlatformWindow__cctor_m14051 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TeamPlatformWindow TeamPlatformWindow::Instance()
 TeamPlatformWindow_t1789 * TeamPlatformWindow_Instance_m14052 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::Awake()
 void TeamPlatformWindow_Awake_m14053 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::Start()
 void TeamPlatformWindow_Start_m14054 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnDestroy()
 void TeamPlatformWindow_OnDestroy_m14055 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnEnable()
 void TeamPlatformWindow_OnEnable_m14056 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnTeamTabChange(TabButton)
 void TeamPlatformWindow_OnTeamTabChange_m14057 (TeamPlatformWindow_t1789 * __this, TabButton_t1210 * ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnLoadPlayerItem(UnityEngine.GameObject,System.Object)
 void TeamPlatformWindow_OnLoadPlayerItem_m14058 (TeamPlatformWindow_t1789 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnLoadTeamItem(UnityEngine.GameObject,System.Object)
 void TeamPlatformWindow_OnLoadTeamItem_m14059 (TeamPlatformWindow_t1789 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::UpdateTeamItemInfo()
 void TeamPlatformWindow_UpdateTeamItemInfo_m14060 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::addplayerList(System.UInt64,System.String,System.Int32,System.Int32,System.Int32)
 void TeamPlatformWindow_addplayerList_m14061 (Object_t * __this/* static, unused */, uint64_t ____playerGuid, String_t* ____playerName, int32_t ____playerlevel, int32_t ____playerProf, int32_t ____playerCombat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::ClearplayerList()
 void TeamPlatformWindow_ClearplayerList_m14062 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::addTeamList(System.Int32,System.UInt64,System.String,System.Int32,System.Int32,System.Int32)
 void TeamPlatformWindow_addTeamList_m14063 (Object_t * __this/* static, unused */, int32_t ____teamID, uint64_t ____playerGuid, String_t* ____playerName, int32_t ____playerlevel, int32_t ____playerProf, int32_t ____playerCombat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::ClearTeamMap()
 void TeamPlatformWindow_ClearTeamMap_m14064 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::UpdateCopyScene(System.Int32,System.Int32,System.Int32)
 void TeamPlatformWindow_UpdateCopyScene_m14065 (TeamPlatformWindow_t1789 * __this, int32_t ____CopySceneId, int32_t ____CopyMode, int32_t ____Diffcult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnApplicationTeamClick()
 void TeamPlatformWindow_OnApplicationTeamClick_m14066 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnAutomaticTeamClick()
 void TeamPlatformWindow_OnAutomaticTeamClick_m14067 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnEnterFBClick()
 void TeamPlatformWindow_OnEnterFBClick_m14068 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::OnInvitedTeamClick()
 void TeamPlatformWindow_OnInvitedTeamClick_m14069 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TeamPlatformWindow::Update()
 void TeamPlatformWindow_Update_m14070 (TeamPlatformWindow_t1789 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
