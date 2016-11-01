#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.SkillModle.SkillCore
struct SkillCore_t4465;
// GCGame.Table.Tab_SkillEx
struct Tab_SkillEx_t639;
// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.SkillModle.SkillCore/SkillTargetData
struct SkillTargetData_t2118;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;

// System.Void Games.SkillModle.SkillCore::.ctor()
 void SkillCore__ctor_m34253 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SkillModle.SkillCore::get_LastSkillId()
 int32_t SkillCore_get_LastSkillId_m34254 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SkillModle.SkillCore::get_LastTargetId()
 int32_t SkillCore_get_LastTargetId_m34255 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.SkillModle.SkillCore::get_IsUsingSkill()
 bool SkillCore_get_IsUsingSkill_m34256 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_IsUsingSkill(System.Boolean)
 void SkillCore_set_IsUsingSkill_m34257 (SkillCore_t4465 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.SkillModle.SkillCore::get_LastUseSkillTime()
 float SkillCore_get_LastUseSkillTime_m34258 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_LastUseSkillTime(System.Single)
 void SkillCore_set_LastUseSkillTime_m34259 (SkillCore_t4465 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillEx Games.SkillModle.SkillCore::get_UsingSkillExInfo()
 Tab_SkillEx_t639 * SkillCore_get_UsingSkillExInfo_m34260 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_UsingSkillExInfo(GCGame.Table.Tab_SkillEx)
 void SkillCore_set_UsingSkillExInfo_m34261 (SkillCore_t4465 * __this, Tab_SkillEx_t639 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillBase Games.SkillModle.SkillCore::get_UsingSkillBaseInfo()
 Tab_SkillBase_t637 * SkillCore_get_UsingSkillBaseInfo_m34262 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_UsingSkillBaseInfo(GCGame.Table.Tab_SkillBase)
 void SkillCore_set_UsingSkillBaseInfo_m34263 (SkillCore_t4465 * __this, Tab_SkillBase_t637 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.SkillModle.SkillCore::get_UsingSkillStartAni()
 int32_t SkillCore_get_UsingSkillStartAni_m34264 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_UsingSkillStartAni(System.Int32)
 void SkillCore_set_UsingSkillStartAni_m34265 (SkillCore_t4465 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_Character Games.SkillModle.SkillCore::get_SkillSender()
 Obj_Character_t1772 * SkillCore_get_SkillSender_m34266 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_SkillSender(Games.LogicObj.Obj_Character)
 void SkillCore_set_SkillSender_m34267 (SkillCore_t4465 * __this, Obj_Character_t1772 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SkillModle.SkillCore/SkillTargetData Games.SkillModle.SkillCore::get_TargetData()
 SkillTargetData_t2118 * SkillCore_get_TargetData_m34268 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::set_TargetData(Games.SkillModle.SkillCore/SkillTargetData)
 void SkillCore_set_TargetData_m34269 (SkillCore_t4465 * __this, SkillTargetData_t2118 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::CheckSkillShouldFinish()
 void SkillCore_CheckSkillShouldFinish_m34270 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.SkillModle.SkillCore::IsUsingCrashSkill()
 bool SkillCore_IsUsingCrashSkill_m34271 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::UseSkill(System.Int32,System.Int32,System.Int32,System.String)
 void SkillCore_UseSkill_m34272 (SkillCore_t4465 * __this, int32_t ___skillId, int32_t ___senderId, int32_t ___targetId, String_t* ___skillname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.SkillModle.SkillCore::CanShowSkillProgress(System.Int32)
 bool SkillCore_CanShowSkillProgress_m34273 (SkillCore_t4465 * __this, int32_t ___skillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::OnLoadBullet(UnityEngine.GameObject,System.Object)
 void SkillCore_OnLoadBullet_m34274 (SkillCore_t4465 * __this, GameObject_t9 * ___bulletEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::PlayAnimation(System.Int32,System.Boolean)
 void SkillCore_PlayAnimation_m34275 (SkillCore_t4465 * __this, int32_t ___AnimationId, bool ___isSound, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::BreakCurSkill()
 void SkillCore_BreakCurSkill_m34276 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::SkillFinsh()
 void SkillCore_SkillFinsh_m34277 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::CameraOpt()
 void SkillCore_CameraOpt_m34278 (SkillCore_t4465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.SkillModle.SkillCore::ShowSkillName(System.Int32,System.Int32,System.String)
 void SkillCore_ShowSkillName_m34279 (Object_t * __this/* static, unused */, int32_t ___skillId, int32_t ___senderId, String_t* ___skillName, MethodInfo* method) IL2CPP_METHOD_ATTR;
