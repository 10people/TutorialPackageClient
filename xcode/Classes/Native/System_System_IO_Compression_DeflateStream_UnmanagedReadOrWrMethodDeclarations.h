#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t7120;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
 void UnmanagedReadOrWrite__ctor_m49469 (UnmanagedReadOrWrite_t7120 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
 int32_t UnmanagedReadOrWrite_Invoke_m49470 (UnmanagedReadOrWrite_t7120 * __this, IntPtr_t24 ___buffer, int32_t ___length, IntPtr_t24 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
 Object_t * UnmanagedReadOrWrite_BeginInvoke_m49471 (UnmanagedReadOrWrite_t7120 * __this, IntPtr_t24 ___buffer, int32_t ___length, IntPtr_t24 ___data, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
 int32_t UnmanagedReadOrWrite_EndInvoke_m49472 (UnmanagedReadOrWrite_t7120 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
