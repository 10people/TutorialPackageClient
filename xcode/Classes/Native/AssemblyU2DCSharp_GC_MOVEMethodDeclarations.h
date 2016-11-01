#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MOVE
struct GC_MOVE_t2952;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MOVE::.ctor()
 void GC_MOVE__ctor_m16747 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOVE::get_HasServerid()
 bool GC_MOVE_get_HasServerid_m16748 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::get_Serverid()
 int32_t GC_MOVE_get_Serverid_m16749 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::set_Serverid(System.Int32)
 void GC_MOVE_set_Serverid_m16750 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::SetServerid(System.Int32)
 void GC_MOVE_SetServerid_m16751 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOVE::get_HasPoscount()
 bool GC_MOVE_get_HasPoscount_m16752 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::get_Poscount()
 int32_t GC_MOVE_get_Poscount_m16753 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::set_Poscount(System.Int32)
 void GC_MOVE_set_Poscount_m16754 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::SetPoscount(System.Int32)
 void GC_MOVE_SetPoscount_m16755 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOVE::get_posserialList()
 Object_t* GC_MOVE_get_posserialList_m16756 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::get_posserialCount()
 int32_t GC_MOVE_get_posserialCount_m16757 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::GetPosserial(System.Int32)
 int32_t GC_MOVE_GetPosserial_m16758 (GC_MOVE_t2952 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::AddPosserial(System.Int32)
 void GC_MOVE_AddPosserial_m16759 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOVE::get_posxList()
 Object_t* GC_MOVE_get_posxList_m16760 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::get_posxCount()
 int32_t GC_MOVE_get_posxCount_m16761 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::GetPosx(System.Int32)
 int32_t GC_MOVE_GetPosx_m16762 (GC_MOVE_t2952 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::AddPosx(System.Int32)
 void GC_MOVE_AddPosx_m16763 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOVE::get_poszList()
 Object_t* GC_MOVE_get_poszList_m16764 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::get_poszCount()
 int32_t GC_MOVE_get_poszCount_m16765 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::GetPosz(System.Int32)
 int32_t GC_MOVE_GetPosz_m16766 (GC_MOVE_t2952 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::AddPosz(System.Int32)
 void GC_MOVE_AddPosz_m16767 (GC_MOVE_t2952 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOVE::SerializedSize()
 int32_t GC_MOVE_SerializedSize_m16768 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOVE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MOVE_WriteTo_m16769 (GC_MOVE_t2952 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MOVE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MOVE_MergeFrom_m16770 (GC_MOVE_t2952 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOVE::IsInitialized()
 bool GC_MOVE_IsInitialized_m16771 (GC_MOVE_t2952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
