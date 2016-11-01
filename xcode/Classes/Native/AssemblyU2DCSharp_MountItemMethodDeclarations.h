#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MountItem
struct MountItem_t1587;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void MountItem::.ctor()
 void MountItem__ctor_m9874 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::.cctor()
 void MountItem__cctor_m9875 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::SetName(System.String)
 void MountItem_SetName_m9876 (MountItem_t1587 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::SetIcon(System.String)
 void MountItem_SetIcon_m9877 (MountItem_t1587 * __this, String_t* ___strSpritName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::SetCollectFlag(System.Boolean)
 void MountItem_SetCollectFlag_m9878 (MountItem_t1587 * __this, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::SetRemindFlag(System.Boolean)
 void MountItem_SetRemindFlag_m9879 (MountItem_t1587 * __this, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MountItem::get_MountID()
 int32_t MountItem_get_MountID_m9880 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::set_MountID(System.Int32)
 void MountItem_set_MountID_m9881 (MountItem_t1587 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MountItem MountItem::Instance()
 MountItem_t1587 * MountItem_Instance_m9882 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::Awake()
 void MountItem_Awake_m9883 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::Start()
 void MountItem_Start_m9884 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::MountItemClick()
 void MountItem_MountItemClick_m9885 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::DisableItemUI()
 void MountItem_DisableItemUI_m9886 (MountItem_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::AutoFlagButton(UnityEngine.GameObject)
 void MountItem_AutoFlagButton_m9887 (MountItem_t1587 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountItem::MarkAutoMountFlag(System.Int32)
 void MountItem_MarkAutoMountFlag_m9888 (MountItem_t1587 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
