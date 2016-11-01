#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_UNEQUIP_ITEM
struct CG_UNEQUIP_ITEM_t2978;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_UNEQUIP_ITEM::.ctor()
 void CG_UNEQUIP_ITEM__ctor_m17325 (CG_UNEQUIP_ITEM_t2978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_UNEQUIP_ITEM::get_HasEquipguid()
 bool CG_UNEQUIP_ITEM_get_HasEquipguid_m17326 (CG_UNEQUIP_ITEM_t2978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_UNEQUIP_ITEM::get_Equipguid()
 uint64_t CG_UNEQUIP_ITEM_get_Equipguid_m17327 (CG_UNEQUIP_ITEM_t2978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_UNEQUIP_ITEM::set_Equipguid(System.UInt64)
 void CG_UNEQUIP_ITEM_set_Equipguid_m17328 (CG_UNEQUIP_ITEM_t2978 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_UNEQUIP_ITEM::SetEquipguid(System.UInt64)
 void CG_UNEQUIP_ITEM_SetEquipguid_m17329 (CG_UNEQUIP_ITEM_t2978 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_UNEQUIP_ITEM::SerializedSize()
 int32_t CG_UNEQUIP_ITEM_SerializedSize_m17330 (CG_UNEQUIP_ITEM_t2978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_UNEQUIP_ITEM::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_UNEQUIP_ITEM_WriteTo_m17331 (CG_UNEQUIP_ITEM_t2978 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_UNEQUIP_ITEM::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_UNEQUIP_ITEM_MergeFrom_m17332 (CG_UNEQUIP_ITEM_t2978 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_UNEQUIP_ITEM::IsInitialized()
 bool CG_UNEQUIP_ITEM_IsInitialized_m17333 (CG_UNEQUIP_ITEM_t2978 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
