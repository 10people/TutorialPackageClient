#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_FINDPLAYER
struct GC_FINDPLAYER_t2029;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_FINDPLAYER::.ctor()
 void GC_FINDPLAYER__ctor_m18540 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_FINDPLAYER::get_guidList()
 Object_t* GC_FINDPLAYER_get_guidList_m18541 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_guidCount()
 int32_t GC_FINDPLAYER_get_guidCount_m18542 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_FINDPLAYER::GetGuid(System.Int32)
 uint64_t GC_FINDPLAYER_GetGuid_m18543 (GC_FINDPLAYER_t2029 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::AddGuid(System.UInt64)
 void GC_FINDPLAYER_AddGuid_m18544 (GC_FINDPLAYER_t2029 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_FINDPLAYER::get_NameList()
 Object_t* GC_FINDPLAYER_get_NameList_m18545 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_NameCount()
 int32_t GC_FINDPLAYER_get_NameCount_m18546 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_FINDPLAYER::GetName(System.Int32)
 String_t* GC_FINDPLAYER_GetName_m18547 (GC_FINDPLAYER_t2029 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::AddName(System.String)
 void GC_FINDPLAYER_AddName_m18548 (GC_FINDPLAYER_t2029 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_FINDPLAYER::get_LevelList()
 Object_t* GC_FINDPLAYER_get_LevelList_m18549 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_LevelCount()
 int32_t GC_FINDPLAYER_get_LevelCount_m18550 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::GetLevel(System.Int32)
 int32_t GC_FINDPLAYER_GetLevel_m18551 (GC_FINDPLAYER_t2029 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::AddLevel(System.Int32)
 void GC_FINDPLAYER_AddLevel_m18552 (GC_FINDPLAYER_t2029 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_FINDPLAYER::get_ProfList()
 Object_t* GC_FINDPLAYER_get_ProfList_m18553 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_ProfCount()
 int32_t GC_FINDPLAYER_get_ProfCount_m18554 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::GetProf(System.Int32)
 int32_t GC_FINDPLAYER_GetProf_m18555 (GC_FINDPLAYER_t2029 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::AddProf(System.Int32)
 void GC_FINDPLAYER_AddProf_m18556 (GC_FINDPLAYER_t2029 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_FINDPLAYER::get_CombatList()
 Object_t* GC_FINDPLAYER_get_CombatList_m18557 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_CombatCount()
 int32_t GC_FINDPLAYER_get_CombatCount_m18558 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::GetCombat(System.Int32)
 int32_t GC_FINDPLAYER_GetCombat_m18559 (GC_FINDPLAYER_t2029 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::AddCombat(System.Int32)
 void GC_FINDPLAYER_AddCombat_m18560 (GC_FINDPLAYER_t2029 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_FINDPLAYER::get_HasRet()
 bool GC_FINDPLAYER_get_HasRet_m18561 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::get_Ret()
 int32_t GC_FINDPLAYER_get_Ret_m18562 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::set_Ret(System.Int32)
 void GC_FINDPLAYER_set_Ret_m18563 (GC_FINDPLAYER_t2029 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::SetRet(System.Int32)
 void GC_FINDPLAYER_SetRet_m18564 (GC_FINDPLAYER_t2029 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FINDPLAYER::SerializedSize()
 int32_t GC_FINDPLAYER_SerializedSize_m18565 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FINDPLAYER::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_FINDPLAYER_WriteTo_m18566 (GC_FINDPLAYER_t2029 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_FINDPLAYER::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_FINDPLAYER_MergeFrom_m18567 (GC_FINDPLAYER_t2029 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_FINDPLAYER::IsInitialized()
 bool GC_FINDPLAYER_IsInitialized_m18568 (GC_FINDPLAYER_t2029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
