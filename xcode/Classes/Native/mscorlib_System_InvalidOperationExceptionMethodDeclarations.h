#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t5468;
// System.String
struct String_t;
// System.Exception
struct Exception_t972;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
 void InvalidOperationException__ctor_m49197 (InvalidOperationException_t5468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
 void InvalidOperationException__ctor_m38738 (InvalidOperationException_t5468 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
 void InvalidOperationException__ctor_m49111 (InvalidOperationException_t5468 * __this, String_t* ___message, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void InvalidOperationException__ctor_m51336 (InvalidOperationException_t5468 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
