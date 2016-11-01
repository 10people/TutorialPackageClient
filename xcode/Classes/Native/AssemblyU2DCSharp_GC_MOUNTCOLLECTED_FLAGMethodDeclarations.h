#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MOUNTCOLLECTED_FLAG
struct GC_MOUNTCOLLECTED_FLAG_t3009;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MOUNTCOLLECTED_FLAG::.ctor()
 void GC_MOUNTCOLLECTED_FLAG__ctor_m17948 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOUNTCOLLECTED_FLAG::get_HasAutoMountFlag()
 bool GC_MOUNTCOLLECTED_FLAG_get_HasAutoMountFlag_m17949 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::get_AutoMountFlag()
 int32_t GC_MOUNTCOLLECTED_FLAG_get_AutoMountFlag_m17950 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::set_AutoMountFlag(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_set_AutoMountFlag_m17951 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::SetAutoMountFlag(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_SetAutoMountFlag_m17952 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOUNTCOLLECTED_FLAG::get_HasCurMountID()
 bool GC_MOUNTCOLLECTED_FLAG_get_HasCurMountID_m17953 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::get_CurMountID()
 int32_t GC_MOUNTCOLLECTED_FLAG_get_CurMountID_m17954 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::set_CurMountID(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_set_CurMountID_m17955 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::SetCurMountID(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_SetCurMountID_m17956 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::get_MountCollectedFlagList()
 Object_t* GC_MOUNTCOLLECTED_FLAG_get_MountCollectedFlagList_m17957 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::get_MountCollectedFlagCount()
 int32_t GC_MOUNTCOLLECTED_FLAG_get_MountCollectedFlagCount_m17958 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::GetMountCollectedFlag(System.Int32)
 int32_t GC_MOUNTCOLLECTED_FLAG_GetMountCollectedFlag_m17959 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::AddMountCollectedFlag(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_AddMountCollectedFlag_m17960 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::get_MountLeftTimeList()
 Object_t* GC_MOUNTCOLLECTED_FLAG_get_MountLeftTimeList_m17961 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::get_MountLeftTimeCount()
 int32_t GC_MOUNTCOLLECTED_FLAG_get_MountLeftTimeCount_m17962 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::GetMountLeftTime(System.Int32)
 int32_t GC_MOUNTCOLLECTED_FLAG_GetMountLeftTime_m17963 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::AddMountLeftTime(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_AddMountLeftTime_m17964 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MOUNTCOLLECTED_FLAG::get_MountRemindFlagList()
 Object_t* GC_MOUNTCOLLECTED_FLAG_get_MountRemindFlagList_m17965 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::get_MountRemindFlagCount()
 int32_t GC_MOUNTCOLLECTED_FLAG_get_MountRemindFlagCount_m17966 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::GetMountRemindFlag(System.Int32)
 int32_t GC_MOUNTCOLLECTED_FLAG_GetMountRemindFlag_m17967 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::AddMountRemindFlag(System.Int32)
 void GC_MOUNTCOLLECTED_FLAG_AddMountRemindFlag_m17968 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MOUNTCOLLECTED_FLAG::SerializedSize()
 int32_t GC_MOUNTCOLLECTED_FLAG_SerializedSize_m17969 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MOUNTCOLLECTED_FLAG::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MOUNTCOLLECTED_FLAG_WriteTo_m17970 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MOUNTCOLLECTED_FLAG::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MOUNTCOLLECTED_FLAG_MergeFrom_m17971 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MOUNTCOLLECTED_FLAG::IsInitialized()
 bool GC_MOUNTCOLLECTED_FLAG_IsInitialized_m17972 (GC_MOUNTCOLLECTED_FLAG_t3009 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
