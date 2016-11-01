#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t7051;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.FromBase64TransformMode
#include "mscorlib_System_Security_Cryptography_FromBase64TransformMod.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
 void FromBase64Transform__ctor_m49012 (FromBase64Transform_t7051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
 void FromBase64Transform__ctor_m55798 (FromBase64Transform_t7051 * __this, int32_t ___whitespaces, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
 void FromBase64Transform_System_IDisposable_Dispose_m55799 (FromBase64Transform_t7051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
 void FromBase64Transform_Finalize_m55800 (FromBase64Transform_t7051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
 bool FromBase64Transform_get_CanReuseTransform_m55801 (FromBase64Transform_t7051 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
 void FromBase64Transform_Dispose_m55802 (FromBase64Transform_t7051 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
 uint8_t FromBase64Transform_lookup_m55803 (FromBase64Transform_t7051 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
 int32_t FromBase64Transform_ProcessBlock_m55804 (FromBase64Transform_t7051 * __this, ByteU5BU5D_t1033* ___output, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
 void FromBase64Transform_CheckInputParameters_m55805 (FromBase64Transform_t7051 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t FromBase64Transform_TransformBlock_m55806 (FromBase64Transform_t7051 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1033* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t1033* FromBase64Transform_TransformFinalBlock_m49013 (FromBase64Transform_t7051 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
