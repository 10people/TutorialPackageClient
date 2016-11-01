#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildList
struct GuildList_t4743;
// System.Collections.Generic.List`1<GuildPreviewInfo>
struct List_1_t4742;
// GC_GUILD_RET_LIST
struct GC_GUILD_RET_LIST_t3238;

// System.Void GuildList::.ctor()
 void GuildList__ctor_m33566 (GuildList_t4743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildList::CleanUp()
 void GuildList_CleanUp_m33567 (GuildList_t4743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildPreviewInfo> GuildList::get_GuildInfoList()
 List_1_t4742 * GuildList_get_GuildInfoList_m33568 (GuildList_t4743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildList::set_GuildInfoList(System.Collections.Generic.List`1<GuildPreviewInfo>)
 void GuildList_set_GuildInfoList_m33569 (GuildList_t4743 * __this, List_1_t4742 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildList::UpdateData(GC_GUILD_RET_LIST)
 void GuildList_UpdateData_m33570 (GuildList_t4743 * __this, GC_GUILD_RET_LIST_t3238 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildPreviewInfo> GuildList::GuildSort(System.Collections.Generic.List`1<GuildPreviewInfo>)
 List_1_t4742 * GuildList_GuildSort_m33571 (Object_t * __this/* static, unused */, List_1_t4742 * ___guidlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
