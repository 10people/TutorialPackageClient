#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinMemberListItem
struct WuLinMemberListItem_t1951;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// WuLinRegisterMemberWindow
struct WuLinRegisterMemberWindow_t1952;

// System.Void WuLinMemberListItem::.ctor()
 void WuLinMemberListItem__ctor_m12712 (WuLinMemberListItem_t1951 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// WuLinMemberListItem WuLinMemberListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,WuLinRegisterMemberWindow,System.String,System.String,System.String)
 WuLinMemberListItem_t1951 * WuLinMemberListItem_CreateItem_m12713 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, WuLinRegisterMemberWindow_t1952 * ___parent, String_t* ___pos, String_t* ___mname, String_t* ___combat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinMemberListItem::SetData(WuLinRegisterMemberWindow,System.String,System.String,System.String)
 void WuLinMemberListItem_SetData_m12714 (WuLinMemberListItem_t1951 * __this, WuLinRegisterMemberWindow_t1952 * ___parent, String_t* ___pos, String_t* ___name, String_t* ___combat, MethodInfo* method) IL2CPP_METHOD_ATTR;
