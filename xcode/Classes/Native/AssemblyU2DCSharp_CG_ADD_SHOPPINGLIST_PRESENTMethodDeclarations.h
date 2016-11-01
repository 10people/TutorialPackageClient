#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_ADD_SHOPPINGLIST_PRESENT
struct CG_ADD_SHOPPINGLIST_PRESENT_t3479;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_ADD_SHOPPINGLIST_PRESENT::.ctor()
 void CG_ADD_SHOPPINGLIST_PRESENT__ctor_m26125 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_PRESENT::get_HasReceiverGUID()
 bool CG_ADD_SHOPPINGLIST_PRESENT_get_HasReceiverGUID_m26126 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_ADD_SHOPPINGLIST_PRESENT::get_ReceiverGUID()
 uint64_t CG_ADD_SHOPPINGLIST_PRESENT_get_ReceiverGUID_m26127 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::set_ReceiverGUID(System.UInt64)
 void CG_ADD_SHOPPINGLIST_PRESENT_set_ReceiverGUID_m26128 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::SetReceiverGUID(System.UInt64)
 void CG_ADD_SHOPPINGLIST_PRESENT_SetReceiverGUID_m26129 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_PRESENT::get_HasReceiverName()
 bool CG_ADD_SHOPPINGLIST_PRESENT_get_HasReceiverName_m26130 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_ADD_SHOPPINGLIST_PRESENT::get_ReceiverName()
 String_t* CG_ADD_SHOPPINGLIST_PRESENT_get_ReceiverName_m26131 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::set_ReceiverName(System.String)
 void CG_ADD_SHOPPINGLIST_PRESENT_set_ReceiverName_m26132 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::SetReceiverName(System.String)
 void CG_ADD_SHOPPINGLIST_PRESENT_SetReceiverName_m26133 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_ADD_SHOPPINGLIST_PRESENT::get_GoodsIDList()
 Object_t* CG_ADD_SHOPPINGLIST_PRESENT_get_GoodsIDList_m26134 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::get_GoodsIDCount()
 int32_t CG_ADD_SHOPPINGLIST_PRESENT_get_GoodsIDCount_m26135 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::GetGoodsID(System.Int32)
 int32_t CG_ADD_SHOPPINGLIST_PRESENT_GetGoodsID_m26136 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::AddGoodsID(System.Int32)
 void CG_ADD_SHOPPINGLIST_PRESENT_AddGoodsID_m26137 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_ADD_SHOPPINGLIST_PRESENT::get_GoodsCountList()
 Object_t* CG_ADD_SHOPPINGLIST_PRESENT_get_GoodsCountList_m26138 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::get_GoodsCountCount()
 int32_t CG_ADD_SHOPPINGLIST_PRESENT_get_GoodsCountCount_m26139 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::GetGoodsCount(System.Int32)
 int32_t CG_ADD_SHOPPINGLIST_PRESENT_GetGoodsCount_m26140 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::AddGoodsCount(System.Int32)
 void CG_ADD_SHOPPINGLIST_PRESENT_AddGoodsCount_m26141 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_PRESENT::SerializedSize()
 int32_t CG_ADD_SHOPPINGLIST_PRESENT_SerializedSize_m26142 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_PRESENT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_ADD_SHOPPINGLIST_PRESENT_WriteTo_m26143 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_ADD_SHOPPINGLIST_PRESENT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_ADD_SHOPPINGLIST_PRESENT_MergeFrom_m26144 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_PRESENT::IsInitialized()
 bool CG_ADD_SHOPPINGLIST_PRESENT_IsInitialized_m26145 (CG_ADD_SHOPPINGLIST_PRESENT_t3479 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
