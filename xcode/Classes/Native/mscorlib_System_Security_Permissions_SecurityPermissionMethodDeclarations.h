#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t8152;
// System.Security.IPermission
struct IPermission_t8154;
// System.Security.SecurityElement
struct SecurityElement_t7730;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission__ctor_m56040 (SecurityPermission_t8152 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission_set_Flags_m56041 (SecurityPermission_t8152 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
 bool SecurityPermission_IsUnrestricted_m56042 (SecurityPermission_t8152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
 bool SecurityPermission_IsSubsetOf_m56043 (SecurityPermission_t8152 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
 SecurityElement_t7730 * SecurityPermission_ToXml_m56044 (SecurityPermission_t8152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
 bool SecurityPermission_IsEmpty_m56045 (SecurityPermission_t8152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
 SecurityPermission_t8152 * SecurityPermission_Cast_m56046 (SecurityPermission_t8152 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
