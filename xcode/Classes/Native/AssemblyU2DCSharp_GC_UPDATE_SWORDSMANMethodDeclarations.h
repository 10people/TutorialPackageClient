#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_UPDATE_SWORDSMAN
struct GC_UPDATE_SWORDSMAN_t3333;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_UPDATE_SWORDSMAN::.ctor()
 void GC_UPDATE_SWORDSMAN__ctor_m23720 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_SWORDSMAN::get_HasPacktype()
 bool GC_UPDATE_SWORDSMAN_get_HasPacktype_m23721 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_Packtype()
 int32_t GC_UPDATE_SWORDSMAN_get_Packtype_m23722 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::set_Packtype(System.Int32)
 void GC_UPDATE_SWORDSMAN_set_Packtype_m23723 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::SetPacktype(System.Int32)
 void GC_UPDATE_SWORDSMAN_SetPacktype_m23724 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_SWORDSMAN::get_packindexList()
 Object_t* GC_UPDATE_SWORDSMAN_get_packindexList_m23725 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_packindexCount()
 int32_t GC_UPDATE_SWORDSMAN_get_packindexCount_m23726 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::GetPackindex(System.Int32)
 int32_t GC_UPDATE_SWORDSMAN_GetPackindex_m23727 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddPackindex(System.Int32)
 void GC_UPDATE_SWORDSMAN_AddPackindex_m23728 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_UPDATE_SWORDSMAN::get_guidList()
 Object_t* GC_UPDATE_SWORDSMAN_get_guidList_m23729 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_guidCount()
 int32_t GC_UPDATE_SWORDSMAN_get_guidCount_m23730 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_UPDATE_SWORDSMAN::GetGuid(System.Int32)
 uint64_t GC_UPDATE_SWORDSMAN_GetGuid_m23731 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddGuid(System.UInt64)
 void GC_UPDATE_SWORDSMAN_AddGuid_m23732 (GC_UPDATE_SWORDSMAN_t3333 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_SWORDSMAN::get_dataidList()
 Object_t* GC_UPDATE_SWORDSMAN_get_dataidList_m23733 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_dataidCount()
 int32_t GC_UPDATE_SWORDSMAN_get_dataidCount_m23734 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::GetDataid(System.Int32)
 int32_t GC_UPDATE_SWORDSMAN_GetDataid_m23735 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddDataid(System.Int32)
 void GC_UPDATE_SWORDSMAN_AddDataid_m23736 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_SWORDSMAN::get_expList()
 Object_t* GC_UPDATE_SWORDSMAN_get_expList_m23737 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_expCount()
 int32_t GC_UPDATE_SWORDSMAN_get_expCount_m23738 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::GetExp(System.Int32)
 int32_t GC_UPDATE_SWORDSMAN_GetExp_m23739 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddExp(System.Int32)
 void GC_UPDATE_SWORDSMAN_AddExp_m23740 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_SWORDSMAN::get_levelList()
 Object_t* GC_UPDATE_SWORDSMAN_get_levelList_m23741 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_levelCount()
 int32_t GC_UPDATE_SWORDSMAN_get_levelCount_m23742 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::GetLevel(System.Int32)
 int32_t GC_UPDATE_SWORDSMAN_GetLevel_m23743 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddLevel(System.Int32)
 void GC_UPDATE_SWORDSMAN_AddLevel_m23744 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_SWORDSMAN::get_lockList()
 Object_t* GC_UPDATE_SWORDSMAN_get_lockList_m23745 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::get_lockCount()
 int32_t GC_UPDATE_SWORDSMAN_get_lockCount_m23746 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::GetLock(System.Int32)
 int32_t GC_UPDATE_SWORDSMAN_GetLock_m23747 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::AddLock(System.Int32)
 void GC_UPDATE_SWORDSMAN_AddLock_m23748 (GC_UPDATE_SWORDSMAN_t3333 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_SWORDSMAN::SerializedSize()
 int32_t GC_UPDATE_SWORDSMAN_SerializedSize_m23749 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_SWORDSMAN::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_UPDATE_SWORDSMAN_WriteTo_m23750 (GC_UPDATE_SWORDSMAN_t3333 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_UPDATE_SWORDSMAN::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_UPDATE_SWORDSMAN_MergeFrom_m23751 (GC_UPDATE_SWORDSMAN_t3333 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_SWORDSMAN::IsInitialized()
 bool GC_UPDATE_SWORDSMAN_IsInitialized_m23752 (GC_UPDATE_SWORDSMAN_t3333 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
