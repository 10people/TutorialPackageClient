#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t8169;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.Security.Policy.Evidence
struct Evidence_t7952;
// System.Runtime.Remoting.Contexts.Context
struct Context_t8019;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m56448 (AppDomain_t8169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t8169 * AppDomain_getCurDomain_m56449 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t8169 * AppDomain_get_CurrentDomain_m56450 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t7067 * AppDomain_LoadAssembly_m56451 (AppDomain_t8169 * __this, String_t* ___assemblyRef, Evidence_t7952 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t7067 * AppDomain_Load_m56452 (AppDomain_t8169 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t7067 * AppDomain_Load_m56453 (AppDomain_t8169 * __this, String_t* ___assemblyString, Evidence_t7952 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t8019 * AppDomain_InternalGetContext_m56454 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t8019 * AppDomain_InternalGetDefaultContext_m56455 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m56456 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m56457 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m56458 (AppDomain_t8169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
