#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Compression.DeflateStream
struct DeflateStream_t7123;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t7120;
// System.IO.Compression.CompressionMode
#include "System_System_IO_Compression_CompressionMode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
 void DeflateStream__ctor_m49481 (DeflateStream_t7123 * __this, Stream_t1038 * ___compressedStream, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
 void DeflateStream__ctor_m49482 (DeflateStream_t7123 * __this, Stream_t1038 * ___compressedStream, int32_t ___mode, bool ___leaveOpen, bool ___gzip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
 void DeflateStream_Dispose_m49483 (DeflateStream_t7123 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
 int32_t DeflateStream_UnmanagedRead_m49484 (Object_t * __this/* static, unused */, IntPtr_t24 ___buffer, int32_t ___length, IntPtr_t24 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
 int32_t DeflateStream_UnmanagedRead_m49485 (DeflateStream_t7123 * __this, IntPtr_t24 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
 int32_t DeflateStream_UnmanagedWrite_m49486 (Object_t * __this/* static, unused */, IntPtr_t24 ___buffer, int32_t ___length, IntPtr_t24 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
 int32_t DeflateStream_UnmanagedWrite_m49487 (DeflateStream_t7123 * __this, IntPtr_t24 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
 int32_t DeflateStream_ReadInternal_m49488 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t DeflateStream_Read_m49489 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___dest, int32_t ___dest_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
 void DeflateStream_WriteInternal_m49490 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___array, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
 void DeflateStream_Write_m49491 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___src, int32_t ___src_offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
 void DeflateStream_CheckResult_m49492 (Object_t * __this/* static, unused */, int32_t ___result, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
 void DeflateStream_Flush_m49493 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * DeflateStream_BeginRead_m49494 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t15 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * DeflateStream_BeginWrite_m49495 (DeflateStream_t7123 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t15 * ___cback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
 int32_t DeflateStream_EndRead_m49496 (DeflateStream_t7123 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
 void DeflateStream_EndWrite_m49497 (DeflateStream_t7123 * __this, Object_t * ___async_result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t DeflateStream_Seek_m49498 (DeflateStream_t7123 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
 void DeflateStream_SetLength_m49499 (DeflateStream_t7123 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
 bool DeflateStream_get_CanRead_m49500 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
 bool DeflateStream_get_CanSeek_m49501 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
 bool DeflateStream_get_CanWrite_m49502 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
 int64_t DeflateStream_get_Length_m49503 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
 int64_t DeflateStream_get_Position_m49504 (DeflateStream_t7123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
 void DeflateStream_set_Position_m49505 (DeflateStream_t7123 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
 IntPtr_t24 DeflateStream_CreateZStream_m49506 (Object_t * __this/* static, unused */, int32_t ___compress, bool ___gzip, UnmanagedReadOrWrite_t7120 * ___feeder, IntPtr_t24 ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
 int32_t DeflateStream_CloseZStream_m49507 (Object_t * __this/* static, unused */, IntPtr_t24 ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
 int32_t DeflateStream_Flush_m49508 (Object_t * __this/* static, unused */, IntPtr_t24 ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
 int32_t DeflateStream_ReadZStream_m49509 (Object_t * __this/* static, unused */, IntPtr_t24 ___stream, IntPtr_t24 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
 int32_t DeflateStream_WriteZStream_m49510 (Object_t * __this/* static, unused */, IntPtr_t24 ___stream, IntPtr_t24 ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
