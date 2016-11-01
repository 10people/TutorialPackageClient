#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t6556;

// System.Void Mono.Security.Protocol.Tls.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32)
 void ValidationResult__ctor_m45379 (ValidationResult_t6556 * __this, bool ___trusted, bool ___user_denied, int32_t ___error_code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::get_Trusted()
 bool ValidationResult_get_Trusted_m45380 (ValidationResult_t6556 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::get_ErrorCode()
 int32_t ValidationResult_get_ErrorCode_m45381 (ValidationResult_t6556 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
