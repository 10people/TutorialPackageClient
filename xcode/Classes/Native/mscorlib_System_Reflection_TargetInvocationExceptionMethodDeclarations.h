#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t7068;
// System.Exception
struct Exception_t972;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
 void TargetInvocationException__ctor_m55280 (TargetInvocationException_t7068 * __this, Exception_t972 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TargetInvocationException__ctor_m55281 (TargetInvocationException_t7068 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
