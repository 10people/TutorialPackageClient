#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILDACTIVITY_BOSSDATA
struct GC_GUILDACTIVITY_BOSSDATA_t3429;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILDACTIVITY_BOSSDATA::.ctor()
 void GC_GUILDACTIVITY_BOSSDATA__ctor_m25167 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILDACTIVITY_BOSSDATA::get_HasSceneclassid()
 bool GC_GUILDACTIVITY_BOSSDATA_get_HasSceneclassid_m25168 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILDACTIVITY_BOSSDATA::get_Sceneclassid()
 int32_t GC_GUILDACTIVITY_BOSSDATA_get_Sceneclassid_m25169 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::set_Sceneclassid(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_set_Sceneclassid_m25170 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::SetSceneclassid(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_SetSceneclassid_m25171 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILDACTIVITY_BOSSDATA::get_HasSceneinstid()
 bool GC_GUILDACTIVITY_BOSSDATA_get_HasSceneinstid_m25172 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILDACTIVITY_BOSSDATA::get_Sceneinstid()
 int32_t GC_GUILDACTIVITY_BOSSDATA_get_Sceneinstid_m25173 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::set_Sceneinstid(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_set_Sceneinstid_m25174 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::SetSceneinstid(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_SetSceneinstid_m25175 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILDACTIVITY_BOSSDATA::get_HasPosX()
 bool GC_GUILDACTIVITY_BOSSDATA_get_HasPosX_m25176 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILDACTIVITY_BOSSDATA::get_PosX()
 int32_t GC_GUILDACTIVITY_BOSSDATA_get_PosX_m25177 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::set_PosX(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_set_PosX_m25178 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::SetPosX(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_SetPosX_m25179 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILDACTIVITY_BOSSDATA::get_HasPosZ()
 bool GC_GUILDACTIVITY_BOSSDATA_get_HasPosZ_m25180 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILDACTIVITY_BOSSDATA::get_PosZ()
 int32_t GC_GUILDACTIVITY_BOSSDATA_get_PosZ_m25181 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::set_PosZ(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_set_PosZ_m25182 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::SetPosZ(System.Int32)
 void GC_GUILDACTIVITY_BOSSDATA_SetPosZ_m25183 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILDACTIVITY_BOSSDATA::SerializedSize()
 int32_t GC_GUILDACTIVITY_BOSSDATA_SerializedSize_m25184 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILDACTIVITY_BOSSDATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILDACTIVITY_BOSSDATA_WriteTo_m25185 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILDACTIVITY_BOSSDATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILDACTIVITY_BOSSDATA_MergeFrom_m25186 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILDACTIVITY_BOSSDATA::IsInitialized()
 bool GC_GUILDACTIVITY_BOSSDATA_IsInitialized_m25187 (GC_GUILDACTIVITY_BOSSDATA_t3429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
