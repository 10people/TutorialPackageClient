#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_EQUIP_ENCHANCE
struct CG_EQUIP_ENCHANCE_t3015;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_EQUIP_ENCHANCE::.ctor()
 void CG_EQUIP_ENCHANCE__ctor_m18026 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_EQUIP_ENCHANCE::get_HasPacktype()
 bool CG_EQUIP_ENCHANCE_get_HasPacktype_m18027 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_EQUIP_ENCHANCE::get_Packtype()
 int32_t CG_EQUIP_ENCHANCE_get_Packtype_m18028 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::set_Packtype(System.Int32)
 void CG_EQUIP_ENCHANCE_set_Packtype_m18029 (CG_EQUIP_ENCHANCE_t3015 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::SetPacktype(System.Int32)
 void CG_EQUIP_ENCHANCE_SetPacktype_m18030 (CG_EQUIP_ENCHANCE_t3015 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_EQUIP_ENCHANCE::get_HasEquipguid()
 bool CG_EQUIP_ENCHANCE_get_HasEquipguid_m18031 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_EQUIP_ENCHANCE::get_Equipguid()
 uint64_t CG_EQUIP_ENCHANCE_get_Equipguid_m18032 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::set_Equipguid(System.UInt64)
 void CG_EQUIP_ENCHANCE_set_Equipguid_m18033 (CG_EQUIP_ENCHANCE_t3015 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::SetEquipguid(System.UInt64)
 void CG_EQUIP_ENCHANCE_SetEquipguid_m18034 (CG_EQUIP_ENCHANCE_t3015 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> CG_EQUIP_ENCHANCE::get_materialguidList()
 Object_t* CG_EQUIP_ENCHANCE_get_materialguidList_m18035 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_EQUIP_ENCHANCE::get_materialguidCount()
 int32_t CG_EQUIP_ENCHANCE_get_materialguidCount_m18036 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_EQUIP_ENCHANCE::GetMaterialguid(System.Int32)
 uint64_t CG_EQUIP_ENCHANCE_GetMaterialguid_m18037 (CG_EQUIP_ENCHANCE_t3015 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::AddMaterialguid(System.UInt64)
 void CG_EQUIP_ENCHANCE_AddMaterialguid_m18038 (CG_EQUIP_ENCHANCE_t3015 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> CG_EQUIP_ENCHANCE::get_materialcountList()
 Object_t* CG_EQUIP_ENCHANCE_get_materialcountList_m18039 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_EQUIP_ENCHANCE::get_materialcountCount()
 int32_t CG_EQUIP_ENCHANCE_get_materialcountCount_m18040 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_EQUIP_ENCHANCE::GetMaterialcount(System.Int32)
 int32_t CG_EQUIP_ENCHANCE_GetMaterialcount_m18041 (CG_EQUIP_ENCHANCE_t3015 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::AddMaterialcount(System.Int32)
 void CG_EQUIP_ENCHANCE_AddMaterialcount_m18042 (CG_EQUIP_ENCHANCE_t3015 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_EQUIP_ENCHANCE::SerializedSize()
 int32_t CG_EQUIP_ENCHANCE_SerializedSize_m18043 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_EQUIP_ENCHANCE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_EQUIP_ENCHANCE_WriteTo_m18044 (CG_EQUIP_ENCHANCE_t3015 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_EQUIP_ENCHANCE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_EQUIP_ENCHANCE_MergeFrom_m18045 (CG_EQUIP_ENCHANCE_t3015 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_EQUIP_ENCHANCE::IsInitialized()
 bool CG_EQUIP_ENCHANCE_IsInitialized_m18046 (CG_EQUIP_ENCHANCE_t3015 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
