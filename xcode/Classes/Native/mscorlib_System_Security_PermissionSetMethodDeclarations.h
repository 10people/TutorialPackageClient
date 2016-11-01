#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t7953;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.PermissionSet::.ctor()
 void PermissionSet__ctor_m56089 (PermissionSet_t7953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
 void PermissionSet__ctor_m56090 (PermissionSet_t7953 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
 void PermissionSet_set_DeclarativeSecurity_m56091 (PermissionSet_t7953 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
 PermissionSet_t7953 * PermissionSet_CreateFromBinaryFormat_m56092 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
