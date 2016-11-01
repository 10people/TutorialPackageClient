#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.MountModule.MountParam
struct MountParam_t4800;
struct MountParam_t4800_marshaled;
// System.Int32[]
struct Int32U5BU5D_t116;
// GC_MOUNTCOLLECTED_FLAG
struct GC_MOUNTCOLLECTED_FLAG_t3009;

// System.Int32 Games.MountModule.MountParam::get_MountID()
 int32_t MountParam_get_MountID_m34076 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MountModule.MountParam::set_MountID(System.Int32)
 void MountParam_set_MountID_m34077 (MountParam_t4800 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.MountModule.MountParam::get_AutoFlagMountID()
 int32_t MountParam_get_AutoFlagMountID_m34078 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MountModule.MountParam::set_AutoFlagMountID(System.Int32)
 void MountParam_set_AutoFlagMountID_m34079 (MountParam_t4800 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Games.MountModule.MountParam::get_MountCollect()
 Int32U5BU5D_t116* MountParam_get_MountCollect_m34080 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Games.MountModule.MountParam::get_MountRemind()
 Int32U5BU5D_t116* MountParam_get_MountRemind_m34081 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Games.MountModule.MountParam::get_MountDeadlineTime()
 Int32U5BU5D_t116* MountParam_get_MountDeadlineTime_m34082 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MountModule.MountParam::CleanUp()
 void MountParam_CleanUp_m34083 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MountModule.MountParam::SyncMoutCollectedFlag(GC_MOUNTCOLLECTED_FLAG)
 void MountParam_SyncMoutCollectedFlag_m34084 (MountParam_t4800 * __this, GC_MOUNTCOLLECTED_FLAG_t3009 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.MountModule.MountParam::GetMoountLeftTime(System.Int32)
 int32_t MountParam_GetMoountLeftTime_m34085 (MountParam_t4800 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.MountModule.MountParam::GetMountCollectFlag(System.Int32)
 bool MountParam_GetMountCollectFlag_m34086 (MountParam_t4800 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.MountModule.MountParam::GetMountRemindFlag(System.Int32)
 bool MountParam_GetMountRemindFlag_m34087 (MountParam_t4800 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.MountModule.MountParam::ClearMountRemindFlag(System.Int32)
 void MountParam_ClearMountRemindFlag_m34088 (MountParam_t4800 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.MountModule.MountParam::MountRemindFlagCount()
 int32_t MountParam_MountRemindFlagCount_m34089 (MountParam_t4800 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void MountParam_t4800_marshal(const MountParam_t4800& unmarshaled, MountParam_t4800_marshaled& marshaled);
void MountParam_t4800_marshal_back(const MountParam_t4800_marshaled& marshaled, MountParam_t4800& unmarshaled);
void MountParam_t4800_marshal_cleanup(MountParam_t4800_marshaled& marshaled);
