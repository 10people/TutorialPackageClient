#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t8032;
// System.Security.SecurityContext
struct SecurityContext_t8166;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
 void ExecutionContext__ctor_m56376 (ExecutionContext_t8032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
 void ExecutionContext__ctor_m56377 (ExecutionContext_t8032 * __this, ExecutionContext_t8032 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext__ctor_m56378 (ExecutionContext_t8032 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
 ExecutionContext_t8032 * ExecutionContext_Capture_m56379 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext_GetObjectData_m56380 (ExecutionContext_t8032 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
 SecurityContext_t8166 * ExecutionContext_get_SecurityContext_m56381 (ExecutionContext_t8032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
 void ExecutionContext_set_SecurityContext_m56382 (ExecutionContext_t8032 * __this, SecurityContext_t8166 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
 bool ExecutionContext_get_FlowSuppressed_m56383 (ExecutionContext_t8032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
 bool ExecutionContext_IsFlowSuppressed_m56384 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
