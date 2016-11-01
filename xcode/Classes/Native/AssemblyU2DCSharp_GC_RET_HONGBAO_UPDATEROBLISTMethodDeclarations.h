#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_HONGBAO_UPDATEROBLIST
struct GC_RET_HONGBAO_UPDATEROBLIST_t2051;
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

// System.Void GC_RET_HONGBAO_UPDATEROBLIST::.ctor()
 void GC_RET_HONGBAO_UPDATEROBLIST__ctor_m26946 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_HONGBAO_UPDATEROBLIST::get_hongbaoguidList()
 Object_t* GC_RET_HONGBAO_UPDATEROBLIST_get_hongbaoguidList_m26947 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::get_hongbaoguidCount()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_get_hongbaoguidCount_m26948 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_HONGBAO_UPDATEROBLIST::GetHongbaoguid(System.Int32)
 uint64_t GC_RET_HONGBAO_UPDATEROBLIST_GetHongbaoguid_m26949 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::AddHongbaoguid(System.UInt64)
 void GC_RET_HONGBAO_UPDATEROBLIST_AddHongbaoguid_m26950 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_HONGBAO_UPDATEROBLIST::get_sendernameList()
 Object_t* GC_RET_HONGBAO_UPDATEROBLIST_get_sendernameList_m26951 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::get_sendernameCount()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_get_sendernameCount_m26952 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_HONGBAO_UPDATEROBLIST::GetSendername(System.Int32)
 String_t* GC_RET_HONGBAO_UPDATEROBLIST_GetSendername_m26953 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::AddSendername(System.String)
 void GC_RET_HONGBAO_UPDATEROBLIST_AddSendername_m26954 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HONGBAO_UPDATEROBLIST::get_typeList()
 Object_t* GC_RET_HONGBAO_UPDATEROBLIST_get_typeList_m26955 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::get_typeCount()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_get_typeCount_m26956 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::GetType(System.Int32)
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_GetType_m26957 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::AddType(System.Int32)
 void GC_RET_HONGBAO_UPDATEROBLIST_AddType_m26958 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HONGBAO_UPDATEROBLIST::get_yuanbaoList()
 Object_t* GC_RET_HONGBAO_UPDATEROBLIST_get_yuanbaoList_m26959 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::get_yuanbaoCount()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_get_yuanbaoCount_m26960 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::GetYuanbao(System.Int32)
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_GetYuanbao_m26961 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::AddYuanbao(System.Int32)
 void GC_RET_HONGBAO_UPDATEROBLIST_AddYuanbao_m26962 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_HONGBAO_UPDATEROBLIST::get_SenderguidList()
 Object_t* GC_RET_HONGBAO_UPDATEROBLIST_get_SenderguidList_m26963 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::get_SenderguidCount()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_get_SenderguidCount_m26964 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_HONGBAO_UPDATEROBLIST::GetSenderguid(System.Int32)
 uint64_t GC_RET_HONGBAO_UPDATEROBLIST_GetSenderguid_m26965 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::AddSenderguid(System.UInt64)
 void GC_RET_HONGBAO_UPDATEROBLIST_AddSenderguid_m26966 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HONGBAO_UPDATEROBLIST::SerializedSize()
 int32_t GC_RET_HONGBAO_UPDATEROBLIST_SerializedSize_m26967 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HONGBAO_UPDATEROBLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_HONGBAO_UPDATEROBLIST_WriteTo_m26968 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_HONGBAO_UPDATEROBLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_HONGBAO_UPDATEROBLIST_MergeFrom_m26969 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_HONGBAO_UPDATEROBLIST::IsInitialized()
 bool GC_RET_HONGBAO_UPDATEROBLIST_IsInitialized_m26970 (GC_RET_HONGBAO_UPDATEROBLIST_t2051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
