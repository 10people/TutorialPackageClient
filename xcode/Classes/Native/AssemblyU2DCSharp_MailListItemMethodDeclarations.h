#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MailListItem
struct MailListItem_t1900;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// MailRecvWindow
struct MailRecvWindow_t1899;
// MailData/UserMail
struct UserMail_t1901;

// System.Void MailListItem::.ctor()
 void MailListItem__ctor_m12491 (MailListItem_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailListItem::Start()
 void MailListItem_Start_m12492 (MailListItem_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MailListItem MailListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,MailRecvWindow,MailData/UserMail)
 MailListItem_t1900 * MailListItem_CreateItem_m12493 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resObj, String_t* ___name, MailRecvWindow_t1899 * ___parent, UserMail_t1901 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailListItem::SetData(MailRecvWindow,MailData/UserMail)
 void MailListItem_SetData_m12494 (MailListItem_t1900 * __this, MailRecvWindow_t1899 * ___parent, UserMail_t1901 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailListItem::OnItemClick()
 void MailListItem_OnItemClick_m12495 (MailListItem_t1900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MailListItem::EnableHighlight(System.Boolean)
 void MailListItem_EnableHighlight_m12496 (MailListItem_t1900 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
