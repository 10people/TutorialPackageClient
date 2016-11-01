#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_Impact
struct Tab_Impact_t503;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_Impact::.ctor()
 void Tab_Impact__ctor_m2415 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Impact::GetInstanceFile()
 String_t* Tab_Impact_GetInstanceFile_m2416 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Impact::get_BuffIcon()
 String_t* Tab_Impact_get_BuffIcon_m2417 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_BuffType()
 int32_t Tab_Impact_get_BuffType_m2418 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_DelayTime()
 int32_t Tab_Impact_get_DelayTime_m2419 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_EffectId()
 int32_t Tab_Impact_get_EffectId_m2420 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_FadeOutRule()
 int32_t Tab_Impact_get_FadeOutRule_m2421 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_ImpactID()
 int32_t Tab_Impact_get_ImpactID_m2422 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_IsEffectToObj()
 int32_t Tab_Impact_get_IsEffectToObj_m2423 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_IsFellowTallent()
 int32_t Tab_Impact_get_IsFellowTallent_m2424 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_IsForever()
 int32_t Tab_Impact_get_IsForever_m2425 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_IsNeedNoticeClient()
 int32_t Tab_Impact_get_IsNeedNoticeClient_m2426 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_IsRemoveEffectFadeOut()
 int32_t Tab_Impact_get_IsRemoveEffectFadeOut_m2427 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_LogicID()
 int32_t Tab_Impact_get_LogicID_m2428 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_MaxBuffCount()
 int32_t Tab_Impact_get_MaxBuffCount_m2429 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_MaxOverlayCount()
 int32_t Tab_Impact_get_MaxOverlayCount_m2430 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_MutexcollectionId()
 int32_t Tab_Impact_get_MutexcollectionId_m2431 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_Mutexpriority()
 int32_t Tab_Impact_get_Mutexpriority_m2432 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Impact::get_Name()
 String_t* Tab_Impact_get_Name_m2433 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::getParamValueCount()
 int32_t Tab_Impact_getParamValueCount_m2434 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::GetParamValuebyIndex(System.Int32)
 int32_t Tab_Impact_GetParamValuebyIndex_m2435 (Tab_Impact_t503 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_PlayTime()
 int32_t Tab_Impact_get_PlayTime_m2436 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Impact::get_StartMotionID()
 int32_t Tab_Impact_get_StartMotionID_m2437 (Tab_Impact_t503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Impact::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_Impact_LoadTable_m2438 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_Impact::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_Impact_SerializableTable_m2439 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
