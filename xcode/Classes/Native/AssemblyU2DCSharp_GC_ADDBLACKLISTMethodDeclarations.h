#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_ADDBLACKLIST
struct GC_ADDBLACKLIST_t3037;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_ADDBLACKLIST::.ctor()
 void GC_ADDBLACKLIST__ctor_m18443 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasGuid()
 bool GC_ADDBLACKLIST_get_HasGuid_m18444 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_ADDBLACKLIST::get_Guid()
 uint64_t GC_ADDBLACKLIST_get_Guid_m18445 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_Guid(System.UInt64)
 void GC_ADDBLACKLIST_set_Guid_m18446 (GC_ADDBLACKLIST_t3037 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetGuid(System.UInt64)
 void GC_ADDBLACKLIST_SetGuid_m18447 (GC_ADDBLACKLIST_t3037 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasName()
 bool GC_ADDBLACKLIST_get_HasName_m18448 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_ADDBLACKLIST::get_Name()
 String_t* GC_ADDBLACKLIST_get_Name_m18449 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_Name(System.String)
 void GC_ADDBLACKLIST_set_Name_m18450 (GC_ADDBLACKLIST_t3037 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetName(System.String)
 void GC_ADDBLACKLIST_SetName_m18451 (GC_ADDBLACKLIST_t3037 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasLevel()
 bool GC_ADDBLACKLIST_get_HasLevel_m18452 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDBLACKLIST::get_Level()
 int32_t GC_ADDBLACKLIST_get_Level_m18453 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_Level(System.Int32)
 void GC_ADDBLACKLIST_set_Level_m18454 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetLevel(System.Int32)
 void GC_ADDBLACKLIST_SetLevel_m18455 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasProf()
 bool GC_ADDBLACKLIST_get_HasProf_m18456 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDBLACKLIST::get_Prof()
 int32_t GC_ADDBLACKLIST_get_Prof_m18457 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_Prof(System.Int32)
 void GC_ADDBLACKLIST_set_Prof_m18458 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetProf(System.Int32)
 void GC_ADDBLACKLIST_SetProf_m18459 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasCombat()
 bool GC_ADDBLACKLIST_get_HasCombat_m18460 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDBLACKLIST::get_Combat()
 int32_t GC_ADDBLACKLIST_get_Combat_m18461 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_Combat(System.Int32)
 void GC_ADDBLACKLIST_set_Combat_m18462 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetCombat(System.Int32)
 void GC_ADDBLACKLIST_SetCombat_m18463 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasState()
 bool GC_ADDBLACKLIST_get_HasState_m18464 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDBLACKLIST::get_State()
 int32_t GC_ADDBLACKLIST_get_State_m18465 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_State(System.Int32)
 void GC_ADDBLACKLIST_set_State_m18466 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetState(System.Int32)
 void GC_ADDBLACKLIST_SetState_m18467 (GC_ADDBLACKLIST_t3037 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::get_HasTimeInfo()
 bool GC_ADDBLACKLIST_get_HasTimeInfo_m18468 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_ADDBLACKLIST::get_TimeInfo()
 uint32_t GC_ADDBLACKLIST_get_TimeInfo_m18469 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::set_TimeInfo(System.UInt32)
 void GC_ADDBLACKLIST_set_TimeInfo_m18470 (GC_ADDBLACKLIST_t3037 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::SetTimeInfo(System.UInt32)
 void GC_ADDBLACKLIST_SetTimeInfo_m18471 (GC_ADDBLACKLIST_t3037 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ADDBLACKLIST::SerializedSize()
 int32_t GC_ADDBLACKLIST_SerializedSize_m18472 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ADDBLACKLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_ADDBLACKLIST_WriteTo_m18473 (GC_ADDBLACKLIST_t3037 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_ADDBLACKLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_ADDBLACKLIST_MergeFrom_m18474 (GC_ADDBLACKLIST_t3037 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ADDBLACKLIST::IsInitialized()
 bool GC_ADDBLACKLIST_IsInitialized_m18475 (GC_ADDBLACKLIST_t3037 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
