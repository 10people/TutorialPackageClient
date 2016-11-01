#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_DAILYMISSION_UPDATE_RET
struct GC_DAILYMISSION_UPDATE_RET_t3163;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_DAILYMISSION_UPDATE_RET::.ctor()
 void GC_DAILYMISSION_UPDATE_RET__ctor_m20594 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DAILYMISSION_UPDATE_RET::get_HasType()
 bool GC_DAILYMISSION_UPDATE_RET_get_HasType_m20595 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::get_Type()
 int32_t GC_DAILYMISSION_UPDATE_RET_get_Type_m20596 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::set_Type(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_set_Type_m20597 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::SetType(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_SetType_m20598 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DAILYMISSION_UPDATE_RET::get_HasDonecount()
 bool GC_DAILYMISSION_UPDATE_RET_get_HasDonecount_m20599 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::get_Donecount()
 int32_t GC_DAILYMISSION_UPDATE_RET_get_Donecount_m20600 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::set_Donecount(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_set_Donecount_m20601 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::SetDonecount(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_SetDonecount_m20602 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_DAILYMISSION_UPDATE_RET::get_missionIDList()
 Object_t* GC_DAILYMISSION_UPDATE_RET_get_missionIDList_m20603 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::get_missionIDCount()
 int32_t GC_DAILYMISSION_UPDATE_RET_get_missionIDCount_m20604 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::GetMissionID(System.Int32)
 int32_t GC_DAILYMISSION_UPDATE_RET_GetMissionID_m20605 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::AddMissionID(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_AddMissionID_m20606 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_DAILYMISSION_UPDATE_RET::get_qualityTypeList()
 Object_t* GC_DAILYMISSION_UPDATE_RET_get_qualityTypeList_m20607 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::get_qualityTypeCount()
 int32_t GC_DAILYMISSION_UPDATE_RET_get_qualityTypeCount_m20608 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::GetQualityType(System.Int32)
 int32_t GC_DAILYMISSION_UPDATE_RET_GetQualityType_m20609 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::AddQualityType(System.Int32)
 void GC_DAILYMISSION_UPDATE_RET_AddQualityType_m20610 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DAILYMISSION_UPDATE_RET::SerializedSize()
 int32_t GC_DAILYMISSION_UPDATE_RET_SerializedSize_m20611 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DAILYMISSION_UPDATE_RET::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_DAILYMISSION_UPDATE_RET_WriteTo_m20612 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_DAILYMISSION_UPDATE_RET::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_DAILYMISSION_UPDATE_RET_MergeFrom_m20613 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DAILYMISSION_UPDATE_RET::IsInitialized()
 bool GC_DAILYMISSION_UPDATE_RET_IsInitialized_m20614 (GC_DAILYMISSION_UPDATE_RET_t3163 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
