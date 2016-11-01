#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t8172;
// System.Security.PermissionSet
struct PermissionSet_t7953;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
 void SecurityManager__cctor_m56135 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
 bool SecurityManager_get_SecurityEnabled_m56136 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
 PermissionSet_t7953 * SecurityManager_Decode_m56137 (Object_t * __this/* static, unused */, IntPtr_t24 ___permissions, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
 PermissionSet_t7953 * SecurityManager_Decode_m56138 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___encodedPermissions, MethodInfo* method) IL2CPP_METHOD_ATTR;
