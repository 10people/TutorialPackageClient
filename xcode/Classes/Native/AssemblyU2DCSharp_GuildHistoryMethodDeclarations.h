#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildHistory
struct GuildHistory_t1439;
// System.String[]
struct StringU5BU5D_t333;
// System.String
struct String_t;

// System.Void GuildHistory::.ctor()
 void GuildHistory__ctor_m33555 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildHistory::CleanUp()
 void GuildHistory_CleanUp_m33556 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuildHistory::IsValid()
 bool GuildHistory_IsValid_m33557 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildHistory::get_HistoryType()
 int32_t GuildHistory_get_HistoryType_m33558 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildHistory::set_HistoryType(System.Int32)
 void GuildHistory_set_HistoryType_m33559 (GuildHistory_t1439 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildHistory::get_HistoryTime()
 int32_t GuildHistory_get_HistoryTime_m33560 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildHistory::set_HistoryTime(System.Int32)
 void GuildHistory_set_HistoryTime_m33561 (GuildHistory_t1439 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] GuildHistory::get_HistoryText()
 StringU5BU5D_t333* GuildHistory_get_HistoryText_m33562 (GuildHistory_t1439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildHistory::set_HistoryText(System.String[])
 void GuildHistory_set_HistoryText_m33563 (GuildHistory_t1439 * __this, StringU5BU5D_t333* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GuildHistory::GetTypeDic(System.Int32)
 String_t* GuildHistory_GetTypeDic_m33564 (Object_t * __this/* static, unused */, int32_t ___nHistoryType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildHistory::GetTypeTextCount(System.Int32)
 int32_t GuildHistory_GetTypeTextCount_m33565 (Object_t * __this/* static, unused */, int32_t ___nHistoryType, MethodInfo* method) IL2CPP_METHOD_ATTR;
