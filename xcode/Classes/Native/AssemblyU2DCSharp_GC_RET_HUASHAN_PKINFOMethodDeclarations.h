#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_HUASHAN_PKINFO
struct GC_RET_HUASHAN_PKINFO_t3406;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_HUASHAN_PKINFO::.ctor()
 void GC_RET_HUASHAN_PKINFO__ctor_m24808 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_HUASHAN_PKINFO::get_HasRounder()
 bool GC_RET_HUASHAN_PKINFO_get_HasRounder_m24809 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HUASHAN_PKINFO::get_Rounder()
 int32_t GC_RET_HUASHAN_PKINFO_get_Rounder_m24810 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::set_Rounder(System.Int32)
 void GC_RET_HUASHAN_PKINFO_set_Rounder_m24811 (GC_RET_HUASHAN_PKINFO_t3406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::SetRounder(System.Int32)
 void GC_RET_HUASHAN_PKINFO_SetRounder_m24812 (GC_RET_HUASHAN_PKINFO_t3406 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_HUASHAN_PKINFO::get_fristnameList()
 Object_t* GC_RET_HUASHAN_PKINFO_get_fristnameList_m24813 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HUASHAN_PKINFO::get_fristnameCount()
 int32_t GC_RET_HUASHAN_PKINFO_get_fristnameCount_m24814 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_HUASHAN_PKINFO::GetFristname(System.Int32)
 String_t* GC_RET_HUASHAN_PKINFO_GetFristname_m24815 (GC_RET_HUASHAN_PKINFO_t3406 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::AddFristname(System.String)
 void GC_RET_HUASHAN_PKINFO_AddFristname_m24816 (GC_RET_HUASHAN_PKINFO_t3406 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_HUASHAN_PKINFO::get_secondnameList()
 Object_t* GC_RET_HUASHAN_PKINFO_get_secondnameList_m24817 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HUASHAN_PKINFO::get_secondnameCount()
 int32_t GC_RET_HUASHAN_PKINFO_get_secondnameCount_m24818 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_HUASHAN_PKINFO::GetSecondname(System.Int32)
 String_t* GC_RET_HUASHAN_PKINFO_GetSecondname_m24819 (GC_RET_HUASHAN_PKINFO_t3406 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::AddSecondname(System.String)
 void GC_RET_HUASHAN_PKINFO_AddSecondname_m24820 (GC_RET_HUASHAN_PKINFO_t3406 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_HUASHAN_PKINFO::get_winnernameList()
 Object_t* GC_RET_HUASHAN_PKINFO_get_winnernameList_m24821 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HUASHAN_PKINFO::get_winnernameCount()
 int32_t GC_RET_HUASHAN_PKINFO_get_winnernameCount_m24822 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_HUASHAN_PKINFO::GetWinnername(System.Int32)
 String_t* GC_RET_HUASHAN_PKINFO_GetWinnername_m24823 (GC_RET_HUASHAN_PKINFO_t3406 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::AddWinnername(System.String)
 void GC_RET_HUASHAN_PKINFO_AddWinnername_m24824 (GC_RET_HUASHAN_PKINFO_t3406 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HUASHAN_PKINFO::SerializedSize()
 int32_t GC_RET_HUASHAN_PKINFO_SerializedSize_m24825 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HUASHAN_PKINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_HUASHAN_PKINFO_WriteTo_m24826 (GC_RET_HUASHAN_PKINFO_t3406 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_HUASHAN_PKINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_HUASHAN_PKINFO_MergeFrom_m24827 (GC_RET_HUASHAN_PKINFO_t3406 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_HUASHAN_PKINFO::IsInitialized()
 bool GC_RET_HUASHAN_PKINFO_IsInitialized_m24828 (GC_RET_HUASHAN_PKINFO_t3406 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
