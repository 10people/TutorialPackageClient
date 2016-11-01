#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_ADD_SHOPPINGLIST_WAITPAY
struct CG_ADD_SHOPPINGLIST_WAITPAY_t3484;
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

// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::.ctor()
 void CG_ADD_SHOPPINGLIST_WAITPAY__ctor_m26214 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_WAITPAY::get_HasReceiverGUID()
 bool CG_ADD_SHOPPINGLIST_WAITPAY_get_HasReceiverGUID_m26215 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_ADD_SHOPPINGLIST_WAITPAY::get_ReceiverGUID()
 uint64_t CG_ADD_SHOPPINGLIST_WAITPAY_get_ReceiverGUID_m26216 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::set_ReceiverGUID(System.UInt64)
 void CG_ADD_SHOPPINGLIST_WAITPAY_set_ReceiverGUID_m26217 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::SetReceiverGUID(System.UInt64)
 void CG_ADD_SHOPPINGLIST_WAITPAY_SetReceiverGUID_m26218 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_WAITPAY::get_HasReceiverName()
 bool CG_ADD_SHOPPINGLIST_WAITPAY_get_HasReceiverName_m26219 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CG_ADD_SHOPPINGLIST_WAITPAY::get_ReceiverName()
 String_t* CG_ADD_SHOPPINGLIST_WAITPAY_get_ReceiverName_m26220 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::set_ReceiverName(System.String)
 void CG_ADD_SHOPPINGLIST_WAITPAY_set_ReceiverName_m26221 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::SetReceiverName(System.String)
 void CG_ADD_SHOPPINGLIST_WAITPAY_SetReceiverName_m26222 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_ADD_SHOPPINGLIST_WAITPAY::get_GoodsIDList()
 Object_t* CG_ADD_SHOPPINGLIST_WAITPAY_get_GoodsIDList_m26223 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::get_GoodsIDCount()
 int32_t CG_ADD_SHOPPINGLIST_WAITPAY_get_GoodsIDCount_m26224 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::GetGoodsID(System.Int32)
 int32_t CG_ADD_SHOPPINGLIST_WAITPAY_GetGoodsID_m26225 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::AddGoodsID(System.Int32)
 void CG_ADD_SHOPPINGLIST_WAITPAY_AddGoodsID_m26226 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_ADD_SHOPPINGLIST_WAITPAY::get_GoodsCountList()
 Object_t* CG_ADD_SHOPPINGLIST_WAITPAY_get_GoodsCountList_m26227 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::get_GoodsCountCount()
 int32_t CG_ADD_SHOPPINGLIST_WAITPAY_get_GoodsCountCount_m26228 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::GetGoodsCount(System.Int32)
 int32_t CG_ADD_SHOPPINGLIST_WAITPAY_GetGoodsCount_m26229 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::AddGoodsCount(System.Int32)
 void CG_ADD_SHOPPINGLIST_WAITPAY_AddGoodsCount_m26230 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ADD_SHOPPINGLIST_WAITPAY::SerializedSize()
 int32_t CG_ADD_SHOPPINGLIST_WAITPAY_SerializedSize_m26231 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ADD_SHOPPINGLIST_WAITPAY::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_ADD_SHOPPINGLIST_WAITPAY_WriteTo_m26232 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_ADD_SHOPPINGLIST_WAITPAY::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_ADD_SHOPPINGLIST_WAITPAY_MergeFrom_m26233 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ADD_SHOPPINGLIST_WAITPAY::IsInitialized()
 bool CG_ADD_SHOPPINGLIST_WAITPAY_IsInitialized_m26234 (CG_ADD_SHOPPINGLIST_WAITPAY_t3484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
