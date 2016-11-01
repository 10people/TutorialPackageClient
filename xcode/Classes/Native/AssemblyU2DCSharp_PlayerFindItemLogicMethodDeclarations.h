#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerFindItemLogic
struct PlayerFindItemLogic_t1652;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// PlayerFindWindow
struct PlayerFindWindow_t1651;
// Relation
struct Relation_t1442;
// System.Object
struct Object_t;

// System.Void PlayerFindItemLogic::.ctor()
 void PlayerFindItemLogic__ctor_m10508 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerFindItemLogic::get_Guid()
 uint64_t PlayerFindItemLogic_get_Guid_m10509 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::onEnable()
 void PlayerFindItemLogic_onEnable_m10510 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerFindItemLogic PlayerFindItemLogic::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,PlayerFindWindow)
 PlayerFindItemLogic_t1652 * PlayerFindItemLogic_CreateItem_m10511 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, PlayerFindWindow_t1651 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetParent(PlayerFindWindow)
 void PlayerFindItemLogic_SetParent_m10512 (PlayerFindItemLogic_t1652 * __this, PlayerFindWindow_t1651 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::InitPlayerFindItem(Relation)
 void PlayerFindItemLogic_InitPlayerFindItem_m10513 (PlayerFindItemLogic_t1652 * __this, Relation_t1442 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::OnClickAddFriend()
 void PlayerFindItemLogic_OnClickAddFriend_m10514 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetPro(System.Int32)
 void PlayerFindItemLogic_SetPro_m10515 (PlayerFindItemLogic_t1652 * __this, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetHeadPic(System.Int32)
 void PlayerFindItemLogic_SetHeadPic_m10516 (PlayerFindItemLogic_t1652 * __this, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetName(System.String)
 void PlayerFindItemLogic_SetName_m10517 (PlayerFindItemLogic_t1652 * __this, String_t* ___szName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetLevel(System.Int32)
 void PlayerFindItemLogic_SetLevel_m10518 (PlayerFindItemLogic_t1652 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::SetCombatNum(System.Int32)
 void PlayerFindItemLogic_SetCombatNum_m10519 (PlayerFindItemLogic_t1652 * __this, int32_t ___nCombatNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::OnSelectItem()
 void PlayerFindItemLogic_OnSelectItem_m10520 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::OnCancelSelectItem()
 void PlayerFindItemLogic_OnCancelSelectItem_m10521 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::OnClickItem()
 void PlayerFindItemLogic_OnClickItem_m10522 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::onAddFriend()
 void PlayerFindItemLogic_onAddFriend_m10523 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::onFellow()
 void PlayerFindItemLogic_onFellow_m10524 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::checkFriend()
 void PlayerFindItemLogic_checkFriend_m10525 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::onClickChatPrive()
 void PlayerFindItemLogic_onClickChatPrive_m10526 (PlayerFindItemLogic_t1652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerFindItemLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void PlayerFindItemLogic_ShowChatInfoRootOver_m10527 (PlayerFindItemLogic_t1652 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
