#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t7152;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t7153;

// System.Void System.Net.Authorization::.ctor(System.String)
 void Authorization__ctor_m49713 (Authorization_t7152 * __this, String_t* ___token, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
 void Authorization__ctor_m49714 (Authorization_t7152 * __this, String_t* ___token, bool ___complete, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
 void Authorization__ctor_m49715 (Authorization_t7152 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
 String_t* Authorization_get_Message_m49716 (Authorization_t7152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
 bool Authorization_get_Complete_m49717 (Authorization_t7152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
 Object_t * Authorization_get_Module_m49718 (Authorization_t7152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
 void Authorization_set_Module_m49719 (Authorization_t7152 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
