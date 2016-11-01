#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_SYSTEMSHOP_BUY
struct CG_SYSTEMSHOP_BUY_t2955;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_SYSTEMSHOP_BUY::.ctor()
 void CG_SYSTEMSHOP_BUY__ctor_m16806 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SYSTEMSHOP_BUY::get_HasNpcId()
 bool CG_SYSTEMSHOP_BUY_get_HasNpcId_m16807 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SYSTEMSHOP_BUY::get_NpcId()
 int32_t CG_SYSTEMSHOP_BUY_get_NpcId_m16808 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::set_NpcId(System.Int32)
 void CG_SYSTEMSHOP_BUY_set_NpcId_m16809 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::SetNpcId(System.Int32)
 void CG_SYSTEMSHOP_BUY_SetNpcId_m16810 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SYSTEMSHOP_BUY::get_HasShopId()
 bool CG_SYSTEMSHOP_BUY_get_HasShopId_m16811 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SYSTEMSHOP_BUY::get_ShopId()
 int32_t CG_SYSTEMSHOP_BUY_get_ShopId_m16812 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::set_ShopId(System.Int32)
 void CG_SYSTEMSHOP_BUY_set_ShopId_m16813 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::SetShopId(System.Int32)
 void CG_SYSTEMSHOP_BUY_SetShopId_m16814 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SYSTEMSHOP_BUY::get_HasMercIndex()
 bool CG_SYSTEMSHOP_BUY_get_HasMercIndex_m16815 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SYSTEMSHOP_BUY::get_MercIndex()
 int32_t CG_SYSTEMSHOP_BUY_get_MercIndex_m16816 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::set_MercIndex(System.Int32)
 void CG_SYSTEMSHOP_BUY_set_MercIndex_m16817 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::SetMercIndex(System.Int32)
 void CG_SYSTEMSHOP_BUY_SetMercIndex_m16818 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SYSTEMSHOP_BUY::get_HasBuyNum()
 bool CG_SYSTEMSHOP_BUY_get_HasBuyNum_m16819 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SYSTEMSHOP_BUY::get_BuyNum()
 int32_t CG_SYSTEMSHOP_BUY_get_BuyNum_m16820 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::set_BuyNum(System.Int32)
 void CG_SYSTEMSHOP_BUY_set_BuyNum_m16821 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::SetBuyNum(System.Int32)
 void CG_SYSTEMSHOP_BUY_SetBuyNum_m16822 (CG_SYSTEMSHOP_BUY_t2955 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SYSTEMSHOP_BUY::SerializedSize()
 int32_t CG_SYSTEMSHOP_BUY_SerializedSize_m16823 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SYSTEMSHOP_BUY::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_SYSTEMSHOP_BUY_WriteTo_m16824 (CG_SYSTEMSHOP_BUY_t2955 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_SYSTEMSHOP_BUY::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_SYSTEMSHOP_BUY_MergeFrom_m16825 (CG_SYSTEMSHOP_BUY_t2955 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SYSTEMSHOP_BUY::IsInitialized()
 bool CG_SYSTEMSHOP_BUY_IsInitialized_m16826 (CG_SYSTEMSHOP_BUY_t2955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
