#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvDatabase
struct InvDatabase_t5246;
// InvDatabase[]
struct InvDatabaseU5BU5D_t5245;
// InvBaseItem
struct InvBaseItem_t5244;
// System.String
struct String_t;

// System.Void InvDatabase::.ctor()
 void InvDatabase__ctor_m37309 (InvDatabase_t5246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::.cctor()
 void InvDatabase__cctor_m37310 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase[] InvDatabase::get_list()
 InvDatabaseU5BU5D_t5245* InvDatabase_get_list_m37311 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnEnable()
 void InvDatabase_OnEnable_m37312 (InvDatabase_t5246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvDatabase::OnDisable()
 void InvDatabase_OnDisable_m37313 (InvDatabase_t5246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::GetItem(System.Int32)
 InvBaseItem_t5244 * InvDatabase_GetItem_m37314 (InvDatabase_t5246 * __this, int32_t ___id16, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvDatabase InvDatabase::GetDatabase(System.Int32)
 InvDatabase_t5246 * InvDatabase_GetDatabase_m37315 (Object_t * __this/* static, unused */, int32_t ___dbID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByID(System.Int32)
 InvBaseItem_t5244 * InvDatabase_FindByID_m37316 (Object_t * __this/* static, unused */, int32_t ___id32, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvDatabase::FindByName(System.String)
 InvBaseItem_t5244 * InvDatabase_FindByName_m37317 (Object_t * __this/* static, unused */, String_t* ___exact, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
 int32_t InvDatabase_FindItemID_m37318 (Object_t * __this/* static, unused */, InvBaseItem_t5244 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
