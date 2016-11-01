#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ShareTargetChooseLogic
struct ShareTargetChooseLogic_t1716;
// System.String
struct String_t;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Object
struct Object_t;
// TabButton
struct TabButton_t1210;

// System.Void ShareTargetChooseLogic::.ctor()
 void ShareTargetChooseLogic__ctor_m11178 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::.cctor()
 void ShareTargetChooseLogic__cctor_m11179 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ShareTargetChooseLogic ShareTargetChooseLogic::Instance()
 ShareTargetChooseLogic_t1716 * ShareTargetChooseLogic_Instance_m11180 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ShareTargetChooseLogic::get_AdditionShareMsg()
 String_t* ShareTargetChooseLogic_get_AdditionShareMsg_m11181 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::set_AdditionShareMsg(System.String)
 void ShareTargetChooseLogic_set_AdditionShareMsg_m11182 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ShareTargetChooseLogic::get_IsYaoHe()
 bool ShareTargetChooseLogic_get_IsYaoHe_m11183 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::set_IsYaoHe(System.Boolean)
 void ShareTargetChooseLogic_set_IsYaoHe_m11184 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::Awake()
 void ShareTargetChooseLogic_Awake_m11185 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::Start()
 void ShareTargetChooseLogic_Start_m11186 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::OnDestroy()
 void ShareTargetChooseLogic_OnDestroy_m11187 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitEquipShare(Games.Item.GameItem,System.String,System.Boolean)
 void ShareTargetChooseLogic_InitEquipShare_m11188 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, String_t* ___additionShareMsg, bool ___IsYaoHe, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::OnLoadEquipShare(System.Boolean,System.Object)
 void ShareTargetChooseLogic_OnLoadEquipShare_m11189 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitEquipShareInfo(Games.Item.GameItem)
 void ShareTargetChooseLogic_InitEquipShareInfo_m11190 (ShareTargetChooseLogic_t1716 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitItemShare(Games.Item.GameItem,System.String,System.Boolean)
 void ShareTargetChooseLogic_InitItemShare_m11191 (Object_t * __this/* static, unused */, GameItem_t1172 * ___item, String_t* ___additionShareMsg, bool ___bIsYaoHe, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::OnLoadItemShare(System.Boolean,System.Object)
 void ShareTargetChooseLogic_OnLoadItemShare_m11192 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitItemShareInfo(Games.Item.GameItem)
 void ShareTargetChooseLogic_InitItemShareInfo_m11193 (ShareTargetChooseLogic_t1716 * __this, GameItem_t1172 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitGuildShare(System.UInt64,System.String)
 void ShareTargetChooseLogic_InitGuildShare_m11194 (Object_t * __this/* static, unused */, uint64_t ___guildId, String_t* ___additionShareMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::OnLoadGuildShare(System.Boolean,System.Object)
 void ShareTargetChooseLogic_OnLoadGuildShare_m11195 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::InitGuildShareInfo(System.UInt64)
 void ShareTargetChooseLogic_InitGuildShareInfo_m11196 (ShareTargetChooseLogic_t1716 * __this, uint64_t ___guild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::ShareTargetOnClick(TabButton)
 void ShareTargetChooseLogic_ShareTargetOnClick_m11197 (ShareTargetChooseLogic_t1716 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::ShareTargetOK()
 void ShareTargetChooseLogic_ShareTargetOK_m11198 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::ShareTargetCancel()
 void ShareTargetChooseLogic_ShareTargetCancel_m11199 (ShareTargetChooseLogic_t1716 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareTargetChooseLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void ShareTargetChooseLogic_ShowChatInfoRootOver_m11200 (ShareTargetChooseLogic_t1716 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
