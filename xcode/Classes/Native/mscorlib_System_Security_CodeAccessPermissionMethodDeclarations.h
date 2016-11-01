#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t8153;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t8154;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t7730;
// System.Type
struct Type_t;

// System.Void System.Security.CodeAccessPermission::.ctor()
 void CodeAccessPermission__ctor_m56083 (CodeAccessPermission_t8153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
 bool CodeAccessPermission_Equals_m56084 (CodeAccessPermission_t8153 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
 int32_t CodeAccessPermission_GetHashCode_m56085 (CodeAccessPermission_t8153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsSubsetOf(System.Security.IPermission)
// System.String System.Security.CodeAccessPermission::ToString()
 String_t* CodeAccessPermission_ToString_m56086 (CodeAccessPermission_t8153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::ToXml()
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
 SecurityElement_t7730 * CodeAccessPermission_Element_m56087 (CodeAccessPermission_t8153 * __this, int32_t ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
 void CodeAccessPermission_ThrowInvalidPermission_m56088 (Object_t * __this/* static, unused */, Object_t * ___target, Type_t * ___expected, MethodInfo* method) IL2CPP_METHOD_ATTR;
