#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.Marshal
struct Marshal_t5611;
// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Char[]
struct CharU5BU5D_t1016;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
 void Marshal__cctor_m55307 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
 IntPtr_t24 Marshal_AllocHGlobal_m55308 (Object_t * __this/* static, unused */, IntPtr_t24 ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
 IntPtr_t24 Marshal_AllocHGlobal_m39693 (Object_t * __this/* static, unused */, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
 void Marshal_copy_to_unmanaged_m55309 (Object_t * __this/* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t24 ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
 void Marshal_copy_from_unmanaged_m55310 (Object_t * __this/* static, unused */, IntPtr_t24 ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
 void Marshal_Copy_m51241 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___source, int32_t ___startIndex, IntPtr_t24 ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
 void Marshal_Copy_m39694 (Object_t * __this/* static, unused */, IntPtr_t24 ___source, ByteU5BU5D_t1033* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
 void Marshal_Copy_m55311 (Object_t * __this/* static, unused */, IntPtr_t24 ___source, CharU5BU5D_t1016* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
 int32_t Marshal_GetLastWin32Error_m51228 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
