#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.NetworkStream
struct NetworkStream_t7134;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
 void NetworkStream__ctor_m49563 (NetworkStream_t7134 * __this, Socket_t4375 * ___socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
 void NetworkStream__ctor_m49564 (NetworkStream_t7134 * __this, Socket_t4375 * ___socket, bool ___owns_socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
 void NetworkStream__ctor_m49565 (NetworkStream_t7134 * __this, Socket_t4375 * ___socket, int32_t ___access, bool ___owns_socket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
 void NetworkStream_System_IDisposable_Dispose_m49566 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
 bool NetworkStream_get_CanRead_m49567 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
 bool NetworkStream_get_CanSeek_m49568 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
 bool NetworkStream_get_CanWrite_m49569 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
 int64_t NetworkStream_get_Length_m49570 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
 int64_t NetworkStream_get_Position_m49571 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
 void NetworkStream_set_Position_m49572 (NetworkStream_t7134 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
 int32_t NetworkStream_get_ReadTimeout_m49573 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
 int32_t NetworkStream_get_WriteTimeout_m49574 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * NetworkStream_BeginRead_m49575 (NetworkStream_t7134 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * NetworkStream_BeginWrite_m49576 (NetworkStream_t7134 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
 void NetworkStream_Finalize_m49577 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
 void NetworkStream_Dispose_m49578 (NetworkStream_t7134 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
 int32_t NetworkStream_EndRead_m49579 (NetworkStream_t7134 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
 void NetworkStream_EndWrite_m49580 (NetworkStream_t7134 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
 void NetworkStream_Flush_m49581 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t NetworkStream_Read_m49582 (NetworkStream_t7134 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t NetworkStream_Seek_m49583 (NetworkStream_t7134 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
 void NetworkStream_SetLength_m49584 (NetworkStream_t7134 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
 void NetworkStream_Write_m49585 (NetworkStream_t7134 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
 void NetworkStream_CheckDisposed_m49586 (NetworkStream_t7134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
