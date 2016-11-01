#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_ADDFRIEND
struct GC_ADDFRIEND_t3027;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_ADDFRIEND::.ctor()
 void GC_ADDFRIEND__ctor_m18237 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasGuid()
 bool GC_ADDFRIEND_get_HasGuid_m18238 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_ADDFRIEND::get_Guid()
 uint64_t GC_ADDFRIEND_get_Guid_m18239 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_Guid(System.UInt64)
 void GC_ADDFRIEND_set_Guid_m18240 (GC_ADDFRIEND_t3027 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetGuid(System.UInt64)
 void GC_ADDFRIEND_SetGuid_m18241 (GC_ADDFRIEND_t3027 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasName()
 bool GC_ADDFRIEND_get_HasName_m18242 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_ADDFRIEND::get_Name()
 String_t* GC_ADDFRIEND_get_Name_m18243 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_Name(System.String)
 void GC_ADDFRIEND_set_Name_m18244 (GC_ADDFRIEND_t3027 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetName(System.String)
 void GC_ADDFRIEND_SetName_m18245 (GC_ADDFRIEND_t3027 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasLevel()
 bool GC_ADDFRIEND_get_HasLevel_m18246 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDFRIEND::get_Level()
 int32_t GC_ADDFRIEND_get_Level_m18247 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_Level(System.Int32)
 void GC_ADDFRIEND_set_Level_m18248 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetLevel(System.Int32)
 void GC_ADDFRIEND_SetLevel_m18249 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasProf()
 bool GC_ADDFRIEND_get_HasProf_m18250 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDFRIEND::get_Prof()
 int32_t GC_ADDFRIEND_get_Prof_m18251 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_Prof(System.Int32)
 void GC_ADDFRIEND_set_Prof_m18252 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetProf(System.Int32)
 void GC_ADDFRIEND_SetProf_m18253 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasCombat()
 bool GC_ADDFRIEND_get_HasCombat_m18254 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDFRIEND::get_Combat()
 int32_t GC_ADDFRIEND_get_Combat_m18255 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_Combat(System.Int32)
 void GC_ADDFRIEND_set_Combat_m18256 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetCombat(System.Int32)
 void GC_ADDFRIEND_SetCombat_m18257 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasState()
 bool GC_ADDFRIEND_get_HasState_m18258 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDFRIEND::get_State()
 int32_t GC_ADDFRIEND_get_State_m18259 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_State(System.Int32)
 void GC_ADDFRIEND_set_State_m18260 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetState(System.Int32)
 void GC_ADDFRIEND_SetState_m18261 (GC_ADDFRIEND_t3027 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::get_HasTimeInfo()
 bool GC_ADDFRIEND_get_HasTimeInfo_m18262 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_ADDFRIEND::get_TimeInfo()
 uint32_t GC_ADDFRIEND_get_TimeInfo_m18263 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::set_TimeInfo(System.UInt32)
 void GC_ADDFRIEND_set_TimeInfo_m18264 (GC_ADDFRIEND_t3027 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::SetTimeInfo(System.UInt32)
 void GC_ADDFRIEND_SetTimeInfo_m18265 (GC_ADDFRIEND_t3027 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDFRIEND::SerializedSize()
 int32_t GC_ADDFRIEND_SerializedSize_m18266 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDFRIEND::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_ADDFRIEND_WriteTo_m18267 (GC_ADDFRIEND_t3027 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_ADDFRIEND::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_ADDFRIEND_MergeFrom_m18268 (GC_ADDFRIEND_t3027 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDFRIEND::IsInitialized()
 bool GC_ADDFRIEND_IsInitialized_m18269 (GC_ADDFRIEND_t3027 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
