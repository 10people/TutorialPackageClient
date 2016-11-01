#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t6547;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t972;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.AsyncCallback
struct AsyncCallback_t15;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m45312 (ReceiveRecordAsyncResult_t6547 * __this, AsyncCallback_t15 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1033* ___initialBuffer, Stream_t1038 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t1038 * ReceiveRecordAsyncResult_get_Record_m45313 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t1033* ReceiveRecordAsyncResult_get_ResultingBuffer_m45314 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t1033* ReceiveRecordAsyncResult_get_InitialBuffer_m45315 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m45316 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t972 * ReceiveRecordAsyncResult_get_AsyncException_m45317 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m45318 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m45319 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m45320 (ReceiveRecordAsyncResult_t6547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m45321 (ReceiveRecordAsyncResult_t6547 * __this, Exception_t972 * ___ex, ByteU5BU5D_t1033* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m45322 (ReceiveRecordAsyncResult_t6547 * __this, Exception_t972 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m45323 (ReceiveRecordAsyncResult_t6547 * __this, ByteU5BU5D_t1033* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
