#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildMakeItem
struct GuildMakeItem_t1447;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// GuildMake
struct GuildMake_t1448;
// GuildShopMakeItem
#include "AssemblyU2DCSharp_GuildShopMakeItem.h"

// System.Void GuildMakeItem::.ctor()
 void GuildMakeItem__ctor_m12449 (GuildMakeItem_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildMakeItem GuildMakeItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,GuildMake,GuildShopMakeItem)
 GuildMakeItem_t1447 * GuildMakeItem_CreateItem_m12450 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resObj, String_t* ___name, GuildMake_t1448 * ___parent, GuildShopMakeItem_t1449  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMakeItem::SetData(GuildMake,GuildShopMakeItem)
 void GuildMakeItem_SetData_m12451 (GuildMakeItem_t1447 * __this, GuildMake_t1448 * ___parent, GuildShopMakeItem_t1449  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildShopMakeItem GuildMakeItem::GetData()
 GuildShopMakeItem_t1449  GuildMakeItem_GetData_m12452 (GuildMakeItem_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMakeItem::OnItemClick()
 void GuildMakeItem_OnItemClick_m12453 (GuildMakeItem_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMakeItem::EnableHighlight(System.Boolean)
 void GuildMakeItem_EnableHighlight_m12454 (GuildMakeItem_t1447 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
