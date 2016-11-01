#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CM_PACKET
struct CM_PACKET_t3652;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt32>
struct IList_1_t2934;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t3200;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CM_PACKET::.ctor()
 void CM_PACKET__ctor_m28722 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CM_PACKET::get_HasId()
 bool CM_PACKET_get_HasId_m28723 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_Id()
 int32_t CM_PACKET_get_Id_m28724 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::set_Id(System.Int32)
 void CM_PACKET_set_Id_m28725 (CM_PACKET_t3652 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::SetId(System.Int32)
 void CM_PACKET_SetId_m28726 (CM_PACKET_t3652 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CM_PACKET::get_HasId_string()
 bool CM_PACKET_get_HasId_string_m28727 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CM_PACKET::get_Id_string()
 String_t* CM_PACKET_get_Id_string_m28728 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::set_Id_string(System.String)
 void CM_PACKET_set_Id_string_m28729 (CM_PACKET_t3652 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::SetId_string(System.String)
 void CM_PACKET_SetId_string_m28730 (CM_PACKET_t3652 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CM_PACKET::get_arr_int32List()
 Object_t* CM_PACKET_get_arr_int32List_m28731 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_arr_int32Count()
 int32_t CM_PACKET_get_arr_int32Count_m28732 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::GetArr_int32(System.Int32)
 int32_t CM_PACKET_GetArr_int32_m28733 (CM_PACKET_t3652 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::AddArr_int32(System.Int32)
 void CM_PACKET_AddArr_int32_m28734 (CM_PACKET_t3652 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> CM_PACKET::get_arr_uint32List()
 Object_t* CM_PACKET_get_arr_uint32List_m28735 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_arr_uint32Count()
 int32_t CM_PACKET_get_arr_uint32Count_m28736 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 CM_PACKET::GetArr_uint32(System.Int32)
 uint32_t CM_PACKET_GetArr_uint32_m28737 (CM_PACKET_t3652 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::AddArr_uint32(System.UInt32)
 void CM_PACKET_AddArr_uint32_m28738 (CM_PACKET_t3652 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int64> CM_PACKET::get_arr_int64List()
 Object_t* CM_PACKET_get_arr_int64List_m28739 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_arr_int64Count()
 int32_t CM_PACKET_get_arr_int64Count_m28740 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 CM_PACKET::GetArr_int64(System.Int32)
 int64_t CM_PACKET_GetArr_int64_m28741 (CM_PACKET_t3652 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::AddArr_int64(System.Int64)
 void CM_PACKET_AddArr_int64_m28742 (CM_PACKET_t3652 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> CM_PACKET::get_arr_uint64List()
 Object_t* CM_PACKET_get_arr_uint64List_m28743 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_arr_uint64Count()
 int32_t CM_PACKET_get_arr_uint64Count_m28744 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CM_PACKET::GetArr_uint64(System.Int32)
 uint64_t CM_PACKET_GetArr_uint64_m28745 (CM_PACKET_t3652 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::AddArr_uint64(System.UInt64)
 void CM_PACKET_AddArr_uint64_m28746 (CM_PACKET_t3652 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> CM_PACKET::get_arr_stringList()
 Object_t* CM_PACKET_get_arr_stringList_m28747 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::get_arr_stringCount()
 int32_t CM_PACKET_get_arr_stringCount_m28748 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CM_PACKET::GetArr_string(System.Int32)
 String_t* CM_PACKET_GetArr_string_m28749 (CM_PACKET_t3652 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::AddArr_string(System.String)
 void CM_PACKET_AddArr_string_m28750 (CM_PACKET_t3652 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CM_PACKET::SerializedSize()
 int32_t CM_PACKET_SerializedSize_m28751 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CM_PACKET::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CM_PACKET_WriteTo_m28752 (CM_PACKET_t3652 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CM_PACKET::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CM_PACKET_MergeFrom_m28753 (CM_PACKET_t3652 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CM_PACKET::IsInitialized()
 bool CM_PACKET_IsInitialized_m28754 (CM_PACKET_t3652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
