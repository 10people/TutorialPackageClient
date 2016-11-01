#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TargetFrameLogic
struct TargetFrameLogic_t1771;
// System.String
struct String_t;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TargetFrameLogic::.ctor()
 void TargetFrameLogic__ctor_m11698 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::.cctor()
 void TargetFrameLogic__cctor_m11699 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TargetFrameLogic TargetFrameLogic::Instance()
 TargetFrameLogic_t1771 * TargetFrameLogic_Instance_m11700 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::CleanHpInfo()
 void TargetFrameLogic_CleanHpInfo_m11701 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::SwitchHpInfo(Games.LogicObj.Obj_Character)
 void TargetFrameLogic_SwitchHpInfo_m11702 (TargetFrameLogic_t1771 * __this, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 TargetFrameLogic::get_TargetGuid()
 uint64_t TargetFrameLogic_get_TargetGuid_m11703 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::set_TargetGuid(System.UInt64)
 void TargetFrameLogic_set_TargetGuid_m11704 (TargetFrameLogic_t1771 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TargetFrameLogic::get_StrTargetName()
 String_t* TargetFrameLogic_get_StrTargetName_m11705 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::set_StrTargetName(System.String)
 void TargetFrameLogic_set_StrTargetName_m11706 (TargetFrameLogic_t1771 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TargetFrameLogic::get_TargetServerID()
 int32_t TargetFrameLogic_get_TargetServerID_m11707 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::set_TargetServerID(System.Int32)
 void TargetFrameLogic_set_TargetServerID_m11708 (TargetFrameLogic_t1771 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::Awake()
 void TargetFrameLogic_Awake_m11709 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::Start()
 void TargetFrameLogic_Start_m11710 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::Update()
 void TargetFrameLogic_Update_m11711 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::OnDestroy()
 void TargetFrameLogic_OnDestroy_m11712 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::PlayTween(System.Boolean)
 void TargetFrameLogic_PlayTween_m11713 (TargetFrameLogic_t1771 * __this, bool ___nDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::ChangeTarget(Games.LogicObj.Obj_Character)
 void TargetFrameLogic_ChangeTarget_m11714 (TargetFrameLogic_t1771 * __this, Obj_Character_t1772 * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::CancelTarget()
 void TargetFrameLogic_CancelTarget_m11715 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::ChangeTargetNameColor(UnityEngine.Color)
 void TargetFrameLogic_ChangeTargetNameColor_m11716 (TargetFrameLogic_t1771 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::ShowTargetFrame()
 void TargetFrameLogic_ShowTargetFrame_m11717 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::HideTargetFrame()
 void TargetFrameLogic_HideTargetFrame_m11718 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::CheckHideHPText()
 void TargetFrameLogic_CheckHideHPText_m11719 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::OnClickTargetFrame()
 void TargetFrameLogic_OnClickTargetFrame_m11720 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::SetTargetName(Games.LogicObj.Obj_Character)
 void TargetFrameLogic_SetTargetName_m11721 (TargetFrameLogic_t1771 * __this, Obj_Character_t1772 * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TargetFrameLogic::IsGuildBossNpc(Games.LogicObj.Obj_Character)
 bool TargetFrameLogic_IsGuildBossNpc_m11722 (TargetFrameLogic_t1771 * __this, Obj_Character_t1772 * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::UpdateHpShow(System.Int32,System.Int32,System.Int32)
 void TargetFrameLogic_UpdateHpShow_m11723 (TargetFrameLogic_t1771 * __this, int32_t ___curHp, int32_t ___maxHp, int32_t ___hpCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::InitHpColorData()
 void TargetFrameLogic_InitHpColorData_m11724 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::ClearHpShow()
 void TargetFrameLogic_ClearHpShow_m11725 (TargetFrameLogic_t1771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TargetFrameLogic::UpdateBossHpShow(System.Int32,System.Int32,System.Int32)
 void TargetFrameLogic_UpdateBossHpShow_m11726 (TargetFrameLogic_t1771 * __this, int32_t ___hp, int32_t ___maxHp, int32_t ___hpCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TargetFrameLogic::getBeforSprite(System.String)
 String_t* TargetFrameLogic_getBeforSprite_m11727 (TargetFrameLogic_t1771 * __this, String_t* ___temString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TargetFrameLogic::getNextSprite(System.String)
 String_t* TargetFrameLogic_getNextSprite_m11728 (TargetFrameLogic_t1771 * __this, String_t* ___temString, MethodInfo* method) IL2CPP_METHOD_ATTR;
