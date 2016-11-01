#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.ImpactModle.ClientImpactInfo
struct ClientImpactInfo_t4749;
struct ClientImpactInfo_t4749_marshaled;

// System.Void Games.ImpactModle.ClientImpactInfo::CleanUp()
 void ClientImpactInfo_CleanUp_m33677 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ImpactModle.ClientImpactInfo::IsVaild()
 bool ClientImpactInfo_IsVaild_m33678 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ImpactModle.ClientImpactInfo::get_ImpactId()
 int32_t ClientImpactInfo_get_ImpactId_m33679 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ImpactModle.ClientImpactInfo::set_ImpactId(System.Int32)
 void ClientImpactInfo_set_ImpactId_m33680 (ClientImpactInfo_t4749 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.ImpactModle.ClientImpactInfo::get_ImpactLogicId()
 int32_t ClientImpactInfo_get_ImpactLogicId_m33681 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ImpactModle.ClientImpactInfo::set_ImpactLogicId(System.Int32)
 void ClientImpactInfo_set_ImpactLogicId_m33682 (ClientImpactInfo_t4749 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.ImpactModle.ClientImpactInfo::get_IsForever()
 bool ClientImpactInfo_get_IsForever_m33683 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ImpactModle.ClientImpactInfo::set_IsForever(System.Boolean)
 void ClientImpactInfo_set_IsForever_m33684 (ClientImpactInfo_t4749 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.ImpactModle.ClientImpactInfo::get_RemainTime()
 float ClientImpactInfo_get_RemainTime_m33685 (ClientImpactInfo_t4749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.ImpactModle.ClientImpactInfo::set_RemainTime(System.Single)
 void ClientImpactInfo_set_RemainTime_m33686 (ClientImpactInfo_t4749 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ClientImpactInfo_t4749_marshal(const ClientImpactInfo_t4749& unmarshaled, ClientImpactInfo_t4749_marshaled& marshaled);
void ClientImpactInfo_t4749_marshal_back(const ClientImpactInfo_t4749_marshaled& marshaled, ClientImpactInfo_t4749& unmarshaled);
void ClientImpactInfo_t4749_marshal_cleanup(ClientImpactInfo_t4749_marshaled& marshaled);
