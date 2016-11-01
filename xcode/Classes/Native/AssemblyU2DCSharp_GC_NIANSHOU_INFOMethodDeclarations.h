#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_NIANSHOU_INFO
struct GC_NIANSHOU_INFO_t3538;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_NIANSHOU_INFO::.ctor()
 void GC_NIANSHOU_INFO__ctor_m27049 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NIANSHOU_INFO::get_HasRound()
 bool GC_NIANSHOU_INFO_get_HasRound_m27050 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::get_Round()
 int32_t GC_NIANSHOU_INFO_get_Round_m27051 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::set_Round(System.Int32)
 void GC_NIANSHOU_INFO_set_Round_m27052 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::SetRound(System.Int32)
 void GC_NIANSHOU_INFO_SetRound_m27053 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NIANSHOU_INFO::get_normalscneclassList()
 Object_t* GC_NIANSHOU_INFO_get_normalscneclassList_m27054 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::get_normalscneclassCount()
 int32_t GC_NIANSHOU_INFO_get_normalscneclassCount_m27055 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::GetNormalscneclass(System.Int32)
 int32_t GC_NIANSHOU_INFO_GetNormalscneclass_m27056 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::AddNormalscneclass(System.Int32)
 void GC_NIANSHOU_INFO_AddNormalscneclass_m27057 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NIANSHOU_INFO::get_superscneclassList()
 Object_t* GC_NIANSHOU_INFO_get_superscneclassList_m27058 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::get_superscneclassCount()
 int32_t GC_NIANSHOU_INFO_get_superscneclassCount_m27059 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::GetSuperscneclass(System.Int32)
 int32_t GC_NIANSHOU_INFO_GetSuperscneclass_m27060 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::AddSuperscneclass(System.Int32)
 void GC_NIANSHOU_INFO_AddSuperscneclass_m27061 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NIANSHOU_INFO::get_HasNormalvillaincount()
 bool GC_NIANSHOU_INFO_get_HasNormalvillaincount_m27062 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::get_Normalvillaincount()
 int32_t GC_NIANSHOU_INFO_get_Normalvillaincount_m27063 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::set_Normalvillaincount(System.Int32)
 void GC_NIANSHOU_INFO_set_Normalvillaincount_m27064 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::SetNormalvillaincount(System.Int32)
 void GC_NIANSHOU_INFO_SetNormalvillaincount_m27065 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NIANSHOU_INFO::get_HasSupervillaincount()
 bool GC_NIANSHOU_INFO_get_HasSupervillaincount_m27066 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::get_Supervillaincount()
 int32_t GC_NIANSHOU_INFO_get_Supervillaincount_m27067 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::set_Supervillaincount(System.Int32)
 void GC_NIANSHOU_INFO_set_Supervillaincount_m27068 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::SetSupervillaincount(System.Int32)
 void GC_NIANSHOU_INFO_SetSupervillaincount_m27069 (GC_NIANSHOU_INFO_t3538 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NIANSHOU_INFO::SerializedSize()
 int32_t GC_NIANSHOU_INFO_SerializedSize_m27070 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NIANSHOU_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_NIANSHOU_INFO_WriteTo_m27071 (GC_NIANSHOU_INFO_t3538 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_NIANSHOU_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_NIANSHOU_INFO_MergeFrom_m27072 (GC_NIANSHOU_INFO_t3538 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NIANSHOU_INFO::IsInitialized()
 bool GC_NIANSHOU_INFO_IsInitialized_m27073 (GC_NIANSHOU_INFO_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
