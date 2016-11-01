#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_Animation
struct Tab_Animation_t341;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_Animation::.ctor()
 void Tab_Animation__ctor_m1232 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Animation::GetInstanceFile()
 String_t* Tab_Animation_GetInstanceFile_m1233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_Animation::get_AinmName()
 String_t* Tab_Animation_get_AinmName_m1234 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::get_AnimID()
 int32_t Tab_Animation_get_AnimID_m1235 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_Animation::get_DelayFrameSpeed()
 float Tab_Animation_get_DelayFrameSpeed_m1236 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_Animation::get_DelayFrameTime()
 float Tab_Animation_get_DelayFrameTime_m1237 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_Animation::get_DelaySpeedTime()
 float Tab_Animation_get_DelaySpeedTime_m1238 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::get_EndEffect()
 int32_t Tab_Animation_get_EndEffect_m1239 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Animation::get_IsCallEnd()
 bool Tab_Animation_get_IsCallEnd_m1240 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Animation::get_IsCanBreak()
 bool Tab_Animation_get_IsCanBreak_m1241 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::getIsStartEffectAutoEndCount()
 int32_t Tab_Animation_getIsStartEffectAutoEndCount_m1242 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Animation::GetIsStartEffectAutoEndbyIndex(System.Int32)
 bool Tab_Animation_GetIsStartEffectAutoEndbyIndex_m1243 (Tab_Animation_t341 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte GCGame.Table.Tab_Animation::get_Layer()
 uint8_t Tab_Animation_get_Layer_m1244 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::get_LoopOverAnimId()
 int32_t Tab_Animation_get_LoopOverAnimId_m1245 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::get_LoopTime()
 int32_t Tab_Animation_get_LoopTime_m1246 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::get_NextAnimId()
 int32_t Tab_Animation_get_NextAnimId_m1247 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte GCGame.Table.Tab_Animation::get_PlayMode()
 uint8_t Tab_Animation_get_PlayMode_m1248 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte GCGame.Table.Tab_Animation::get_QueueMode()
 uint8_t Tab_Animation_get_QueueMode_m1249 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_Animation::get_SPEED()
 float Tab_Animation_get_SPEED_m1250 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 GCGame.Table.Tab_Animation::get_SoundBreakKeep()
 int16_t Tab_Animation_get_SoundBreakKeep_m1251 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 GCGame.Table.Tab_Animation::get_SoundID()
 int16_t Tab_Animation_get_SoundID_m1252 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::getStartEffectCount()
 int32_t Tab_Animation_getStartEffectCount_m1253 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_Animation::GetStartEffectbyIndex(System.Int32)
 int32_t Tab_Animation_GetStartEffectbyIndex_m1254 (Tab_Animation_t341 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GCGame.Table.Tab_Animation::get_TransitTime()
 float Tab_Animation_get_TransitTime_m1255 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte GCGame.Table.Tab_Animation::get_WrapMode()
 uint8_t Tab_Animation_get_WrapMode_m1256 (Tab_Animation_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_Animation::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_Animation_LoadTable_m1257 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_Animation::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_Animation_SerializableTable_m1258 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
