#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerFindWindow
struct PlayerFindWindow_t1651;
// GC_FINDPLAYER
struct GC_FINDPLAYER_t2029;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// PlayerFindItemLogic
struct PlayerFindItemLogic_t1652;

// System.Void PlayerFindWindow::.ctor()
 void PlayerFindWindow__ctor_m13608 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::.cctor()
 void PlayerFindWindow__cctor_m13609 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerFindWindow PlayerFindWindow::Instance()
 PlayerFindWindow_t1651 * PlayerFindWindow_Instance_m13610 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::Awake()
 void PlayerFindWindow_Awake_m13611 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnEnable()
 void PlayerFindWindow_OnEnable_m13612 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnDestroy()
 void PlayerFindWindow_OnDestroy_m13613 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnDisable()
 void PlayerFindWindow_OnDisable_m13614 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::UpdatePlayerFindResult(GC_FINDPLAYER)
 void PlayerFindWindow_UpdatePlayerFindResult_m13615 (PlayerFindWindow_t1651 * __this, GC_FINDPLAYER_t2029 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnLoadPlayerFindItem(UnityEngine.GameObject,System.Object)
 void PlayerFindWindow_OnLoadPlayerFindItem_m13616 (PlayerFindWindow_t1651 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnClickSearch()
 void PlayerFindWindow_OnClickSearch_m13617 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::ClearPleyrFindItem()
 void PlayerFindWindow_ClearPleyrFindItem_m13618 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OpenNearByTab()
 void PlayerFindWindow_OpenNearByTab_m13619 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::SetSelectPlayerItem(PlayerFindItemLogic)
 void PlayerFindWindow_SetSelectPlayerItem_m13620 (PlayerFindWindow_t1651 * __this, PlayerFindItemLogic_t1652 * ___SelectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnClickPlayerItem(PlayerFindItemLogic)
 void PlayerFindWindow_OnClickPlayerItem_m13621 (PlayerFindWindow_t1651 * __this, PlayerFindItemLogic_t1652 * ___SelectItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnClickAddFriend()
 void PlayerFindWindow_OnClickAddFriend_m13622 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindWindow::OnClickTrail()
 void PlayerFindWindow_OnClickTrail_m13623 (PlayerFindWindow_t1651 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
