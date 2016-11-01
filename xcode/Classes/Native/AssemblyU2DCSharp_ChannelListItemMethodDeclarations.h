#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChannelListItem
struct ChannelListItem_t1804;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// ChangeChannelController
struct ChangeChannelController_t1803;

// System.Void ChannelListItem::.ctor()
 void ChannelListItem__ctor_m12407 (ChannelListItem_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChannelListItem::Start()
 void ChannelListItem_Start_m12408 (ChannelListItem_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChannelListItem ChannelListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,ChangeChannelController,System.String)
 ChannelListItem_t1804 * ChannelListItem_CreateItem_m12409 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, ChangeChannelController_t1803 * ___parent, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChannelListItem::SetData(ChangeChannelController,System.String)
 void ChannelListItem_SetData_m12410 (ChannelListItem_t1804 * __this, ChangeChannelController_t1803 * ___parent, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChannelListItem::OnItemClick()
 void ChannelListItem_OnItemClick_m12411 (ChannelListItem_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
