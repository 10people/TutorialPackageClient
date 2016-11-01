#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CompressedStack
struct CompressedStack_t8165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
 void CompressedStack__ctor_m56368 (CompressedStack_t8165 * __this, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
 void CompressedStack__ctor_m56369 (CompressedStack_t8165 * __this, CompressedStack_t8165 * ___cs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
 CompressedStack_t8165 * CompressedStack_CreateCopy_m56370 (CompressedStack_t8165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
 CompressedStack_t8165 * CompressedStack_Capture_m56371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void CompressedStack_GetObjectData_m56372 (CompressedStack_t8165 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
 bool CompressedStack_IsEmpty_m56373 (CompressedStack_t8165 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
