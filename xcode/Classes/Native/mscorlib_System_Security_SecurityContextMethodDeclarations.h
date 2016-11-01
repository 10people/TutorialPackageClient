#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityContext
struct SecurityContext_t8166;
// System.Threading.CompressedStack
struct CompressedStack_t8165;

// System.Void System.Security.SecurityContext::.ctor()
 void SecurityContext__ctor_m56093 (SecurityContext_t8166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
 void SecurityContext__ctor_m56094 (SecurityContext_t8166 * __this, SecurityContext_t8166 * ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
 SecurityContext_t8166 * SecurityContext_Capture_m56095 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
 bool SecurityContext_get_FlowSuppressed_m56096 (SecurityContext_t8166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
 CompressedStack_t8165 * SecurityContext_get_CompressedStack_m56097 (SecurityContext_t8166 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
