#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionStream
struct WebConnectionStream_t7197;
// System.Net.WebConnection
struct WebConnection_t7201;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
 void WebConnectionStream__ctor_m50270 (WebConnectionStream_t7197 * __this, WebConnection_t7201 * ___cnc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
 void WebConnectionStream__ctor_m50271 (WebConnectionStream_t7197 * __this, WebConnection_t7201 * ___cnc, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
 void WebConnectionStream__cctor_m50272 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
 bool WebConnectionStream_IsNtlmAuth_m50273 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
 void WebConnectionStream_CheckResponseInBuffer_m50274 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
 WebConnection_t7201 * WebConnectionStream_get_Connection_m50275 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
 int32_t WebConnectionStream_get_ReadTimeout_m50276 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
 int32_t WebConnectionStream_get_WriteTimeout_m50277 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
 bool WebConnectionStream_get_CompleteRequestWritten_m50278 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
 void WebConnectionStream_set_SendChunked_m50279 (WebConnectionStream_t7197 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
 void WebConnectionStream_set_ReadBuffer_m50280 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
 void WebConnectionStream_set_ReadBufferOffset_m50281 (WebConnectionStream_t7197 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
 void WebConnectionStream_set_ReadBufferSize_m50282 (WebConnectionStream_t7197 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
 ByteU5BU5D_t1033* WebConnectionStream_get_WriteBuffer_m50283 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
 int32_t WebConnectionStream_get_WriteBufferLength_m50284 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
 void WebConnectionStream_ForceCompletion_m50285 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
 void WebConnectionStream_CheckComplete_m50286 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
 void WebConnectionStream_ReadAll_m50287 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
 void WebConnectionStream_WriteCallbackWrapper_m50288 (WebConnectionStream_t7197 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
 void WebConnectionStream_ReadCallbackWrapper_m50289 (WebConnectionStream_t7197 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
 int32_t WebConnectionStream_Read_m50290 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_BeginRead_m50291 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
 int32_t WebConnectionStream_EndRead_m50292 (WebConnectionStream_t7197 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
 void WebConnectionStream_WriteRequestAsyncCB_m50293 (WebConnectionStream_t7197 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_BeginWrite_m50294 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
 void WebConnectionStream_CheckWriteOverflow_m50295 (WebConnectionStream_t7197 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
 void WebConnectionStream_EndWrite_m50296 (WebConnectionStream_t7197 * __this, Object_t * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
 void WebConnectionStream_Write_m50297 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
 void WebConnectionStream_Flush_m50298 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
 void WebConnectionStream_SetHeaders_m50299 (WebConnectionStream_t7197 * __this, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
 bool WebConnectionStream_get_RequestWritten_m50300 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
 Object_t * WebConnectionStream_WriteRequestAsync_m50301 (WebConnectionStream_t7197 * __this, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
 void WebConnectionStream_WriteHeaders_m50302 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
 void WebConnectionStream_WriteRequest_m50303 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
 void WebConnectionStream_InternalClose_m50304 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
 void WebConnectionStream_Close_m50305 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
 void WebConnectionStream_KillBuffer_m50306 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t WebConnectionStream_Seek_m50307 (WebConnectionStream_t7197 * __this, int64_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
 void WebConnectionStream_SetLength_m50308 (WebConnectionStream_t7197 * __this, int64_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
 bool WebConnectionStream_get_CanSeek_m50309 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
 bool WebConnectionStream_get_CanRead_m50310 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
 bool WebConnectionStream_get_CanWrite_m50311 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
 int64_t WebConnectionStream_get_Length_m50312 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
 int64_t WebConnectionStream_get_Position_m50313 (WebConnectionStream_t7197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
 void WebConnectionStream_set_Position_m50314 (WebConnectionStream_t7197 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
