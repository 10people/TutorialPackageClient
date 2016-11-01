#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_PUSH_NOTIFICATION
struct GC_PUSH_NOTIFICATION_t3365;
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

// System.Void GC_PUSH_NOTIFICATION::.ctor()
 void GC_PUSH_NOTIFICATION__ctor_m24143 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_PUSH_NOTIFICATION::get_newsList()
 Object_t* GC_PUSH_NOTIFICATION_get_newsList_m24144 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::get_newsCount()
 int32_t GC_PUSH_NOTIFICATION_get_newsCount_m24145 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_PUSH_NOTIFICATION::GetNews(System.Int32)
 String_t* GC_PUSH_NOTIFICATION_GetNews_m24146 (GC_PUSH_NOTIFICATION_t3365 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_PUSH_NOTIFICATION::AddNews(System.String)
 void GC_PUSH_NOTIFICATION_AddNews_m24147 (GC_PUSH_NOTIFICATION_t3365 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_PUSH_NOTIFICATION::get_dataList()
 Object_t* GC_PUSH_NOTIFICATION_get_dataList_m24148 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::get_dataCount()
 int32_t GC_PUSH_NOTIFICATION_get_dataCount_m24149 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::GetData(System.Int32)
 int32_t GC_PUSH_NOTIFICATION_GetData_m24150 (GC_PUSH_NOTIFICATION_t3365 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_PUSH_NOTIFICATION::AddData(System.Int32)
 void GC_PUSH_NOTIFICATION_AddData_m24151 (GC_PUSH_NOTIFICATION_t3365 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_PUSH_NOTIFICATION::get_RepeatList()
 Object_t* GC_PUSH_NOTIFICATION_get_RepeatList_m24152 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::get_RepeatCount()
 int32_t GC_PUSH_NOTIFICATION_get_RepeatCount_m24153 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::GetRepeat(System.Int32)
 int32_t GC_PUSH_NOTIFICATION_GetRepeat_m24154 (GC_PUSH_NOTIFICATION_t3365 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_PUSH_NOTIFICATION::AddRepeat(System.Int32)
 void GC_PUSH_NOTIFICATION_AddRepeat_m24155 (GC_PUSH_NOTIFICATION_t3365 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_PUSH_NOTIFICATION::SerializedSize()
 int32_t GC_PUSH_NOTIFICATION_SerializedSize_m24156 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_PUSH_NOTIFICATION::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_PUSH_NOTIFICATION_WriteTo_m24157 (GC_PUSH_NOTIFICATION_t3365 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_PUSH_NOTIFICATION::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_PUSH_NOTIFICATION_MergeFrom_m24158 (GC_PUSH_NOTIFICATION_t3365 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_PUSH_NOTIFICATION::IsInitialized()
 bool GC_PUSH_NOTIFICATION_IsInitialized_m24159 (GC_PUSH_NOTIFICATION_t3365 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
