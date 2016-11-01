#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildWarPointInfo
struct GuildWarPointInfo_t1484;
struct GuildWarPointInfo_t1484_marshaled;

// System.Boolean GuildWarPointInfo::IsVaild()
 bool GuildWarPointInfo_IsVaild_m33649 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::CleanUp()
 void GuildWarPointInfo_CleanUp_m33650 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWarPointInfo::get_PointType()
 int32_t GuildWarPointInfo_get_PointType_m33651 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_PointType(System.Int32)
 void GuildWarPointInfo_set_PointType_m33652 (GuildWarPointInfo_t1484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWarPointInfo::get_PointScore()
 int32_t GuildWarPointInfo_get_PointScore_m33653 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_PointScore(System.Int32)
 void GuildWarPointInfo_set_PointScore_m33654 (GuildWarPointInfo_t1484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GuildWarPointInfo::get_PointOwnGuildGuid()
 uint64_t GuildWarPointInfo_get_PointOwnGuildGuid_m33655 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_PointOwnGuildGuid(System.UInt64)
 void GuildWarPointInfo_set_PointOwnGuildGuid_m33656 (GuildWarPointInfo_t1484 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuildWarPointInfo::get_IsFighting()
 bool GuildWarPointInfo_get_IsFighting_m33657 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_IsFighting(System.Boolean)
 void GuildWarPointInfo_set_IsFighting_m33658 (GuildWarPointInfo_t1484 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWarPointInfo::get_MyGuildScore()
 int32_t GuildWarPointInfo_get_MyGuildScore_m33659 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_MyGuildScore(System.Int32)
 void GuildWarPointInfo_set_MyGuildScore_m33660 (GuildWarPointInfo_t1484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildWarPointInfo::get_FightGuildScore()
 int32_t GuildWarPointInfo_get_FightGuildScore_m33661 (GuildWarPointInfo_t1484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildWarPointInfo::set_FightGuildScore(System.Int32)
 void GuildWarPointInfo_set_FightGuildScore_m33662 (GuildWarPointInfo_t1484 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GuildWarPointInfo_t1484_marshal(const GuildWarPointInfo_t1484& unmarshaled, GuildWarPointInfo_t1484_marshaled& marshaled);
void GuildWarPointInfo_t1484_marshal_back(const GuildWarPointInfo_t1484_marshaled& marshaled, GuildWarPointInfo_t1484& unmarshaled);
void GuildWarPointInfo_t1484_marshal_cleanup(GuildWarPointInfo_t1484_marshaled& marshaled);
