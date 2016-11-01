#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_VILLAIN_INFO
struct GC_VILLAIN_INFO_t3514;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_VILLAIN_INFO::.ctor()
 void GC_VILLAIN_INFO__ctor_m26653 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VILLAIN_INFO::get_HasRound()
 bool GC_VILLAIN_INFO_get_HasRound_m26654 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::get_Round()
 int32_t GC_VILLAIN_INFO_get_Round_m26655 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::set_Round(System.Int32)
 void GC_VILLAIN_INFO_set_Round_m26656 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::SetRound(System.Int32)
 void GC_VILLAIN_INFO_SetRound_m26657 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_VILLAIN_INFO::get_normalscneclassList()
 Object_t* GC_VILLAIN_INFO_get_normalscneclassList_m26658 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::get_normalscneclassCount()
 int32_t GC_VILLAIN_INFO_get_normalscneclassCount_m26659 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::GetNormalscneclass(System.Int32)
 int32_t GC_VILLAIN_INFO_GetNormalscneclass_m26660 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::AddNormalscneclass(System.Int32)
 void GC_VILLAIN_INFO_AddNormalscneclass_m26661 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_VILLAIN_INFO::get_superscneclassList()
 Object_t* GC_VILLAIN_INFO_get_superscneclassList_m26662 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::get_superscneclassCount()
 int32_t GC_VILLAIN_INFO_get_superscneclassCount_m26663 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::GetSuperscneclass(System.Int32)
 int32_t GC_VILLAIN_INFO_GetSuperscneclass_m26664 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::AddSuperscneclass(System.Int32)
 void GC_VILLAIN_INFO_AddSuperscneclass_m26665 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VILLAIN_INFO::get_HasNormalvillaincount()
 bool GC_VILLAIN_INFO_get_HasNormalvillaincount_m26666 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::get_Normalvillaincount()
 int32_t GC_VILLAIN_INFO_get_Normalvillaincount_m26667 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::set_Normalvillaincount(System.Int32)
 void GC_VILLAIN_INFO_set_Normalvillaincount_m26668 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::SetNormalvillaincount(System.Int32)
 void GC_VILLAIN_INFO_SetNormalvillaincount_m26669 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VILLAIN_INFO::get_HasSupervillaincount()
 bool GC_VILLAIN_INFO_get_HasSupervillaincount_m26670 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::get_Supervillaincount()
 int32_t GC_VILLAIN_INFO_get_Supervillaincount_m26671 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::set_Supervillaincount(System.Int32)
 void GC_VILLAIN_INFO_set_Supervillaincount_m26672 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::SetSupervillaincount(System.Int32)
 void GC_VILLAIN_INFO_SetSupervillaincount_m26673 (GC_VILLAIN_INFO_t3514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_VILLAIN_INFO::SerializedSize()
 int32_t GC_VILLAIN_INFO_SerializedSize_m26674 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_VILLAIN_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_VILLAIN_INFO_WriteTo_m26675 (GC_VILLAIN_INFO_t3514 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_VILLAIN_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_VILLAIN_INFO_MergeFrom_m26676 (GC_VILLAIN_INFO_t3514 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_VILLAIN_INFO::IsInitialized()
 bool GC_VILLAIN_INFO_IsInitialized_m26677 (GC_VILLAIN_INFO_t3514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
