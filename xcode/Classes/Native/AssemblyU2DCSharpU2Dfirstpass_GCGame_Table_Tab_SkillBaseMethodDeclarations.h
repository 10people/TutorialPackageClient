#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_SkillBase
struct Tab_SkillBase_t637;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_SkillBase::.ctor()
 void Tab_SkillBase__ctor_m3202 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SkillBase::GetInstanceFile()
 String_t* Tab_SkillBase_GetInstanceFile_m3203 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::getChangeModeCount()
 int32_t Tab_SkillBase_getChangeModeCount_m3204 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::GetChangeModebyIndex(System.Int32)
 int32_t Tab_SkillBase_GetChangeModebyIndex_m3205 (Tab_SkillBase_t637 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_FirstIndex()
 int32_t Tab_SkillBase_get_FirstIndex_m3206 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_HasPublicCd()
 int32_t Tab_SkillBase_get_HasPublicCd_m3207 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SkillBase::get_Icon()
 String_t* Tab_SkillBase_get_Icon_m3208 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_Id()
 int32_t Tab_SkillBase_get_Id_m3209 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsAutoSelectTar()
 int32_t Tab_SkillBase_get_IsAutoSelectTar_m3210 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsBreakBeAttacked()
 int32_t Tab_SkillBase_get_IsBreakBeAttacked_m3211 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsMove()
 int32_t Tab_SkillBase_get_IsMove_m3212 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsMoveBreak()
 int32_t Tab_SkillBase_get_IsMoveBreak_m3213 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsMoveToTarInAutoCombat()
 int32_t Tab_SkillBase_get_IsMoveToTarInAutoCombat_m3214 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::getIsNeedStopEffectIdCount()
 int32_t Tab_SkillBase_getIsNeedStopEffectIdCount_m3215 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::GetIsNeedStopEffectIdbyIndex(System.Int32)
 int32_t Tab_SkillBase_GetIsNeedStopEffectIdbyIndex_m3216 (Tab_SkillBase_t637 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsNeedWeapon()
 int32_t Tab_SkillBase_get_IsNeedWeapon_m3217 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsShowSkillName()
 int32_t Tab_SkillBase_get_IsShowSkillName_m3218 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_IsSkillBreak()
 int32_t Tab_SkillBase_get_IsSkillBreak_m3219 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_LevelUpIndex()
 int32_t Tab_SkillBase_get_LevelUpIndex_m3220 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SkillBase::get_Name()
 String_t* Tab_SkillBase_get_Name_m3221 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_NextIndex()
 int32_t Tab_SkillBase_get_NextIndex_m3222 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_PlayAttackSound()
 int32_t Tab_SkillBase_get_PlayAttackSound_m3223 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_PriorityAutoFight()
 int32_t Tab_SkillBase_get_PriorityAutoFight_m3224 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_ProfessionId()
 int32_t Tab_SkillBase_get_ProfessionId_m3225 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_SelLogic()
 int32_t Tab_SkillBase_get_SelLogic_m3226 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_SkillClass()
 int32_t Tab_SkillBase_get_SkillClass_m3227 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SkillBase::get_SkillIntro()
 String_t* Tab_SkillBase_get_SkillIntro_m3228 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_TargetType()
 int32_t Tab_SkillBase_get_TargetType_m3229 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_UseType()
 int32_t Tab_SkillBase_get_UseType_m3230 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SkillBase::get_XpSkillIndex()
 int32_t Tab_SkillBase_get_XpSkillIndex_m3231 (Tab_SkillBase_t637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_SkillBase::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_SkillBase_LoadTable_m3232 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_SkillBase::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_SkillBase_SerializableTable_m3233 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
