#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t7140;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Collections.Queue
struct Queue_t6898;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t7141;
// System.Net.Sockets.Socket/Worker
struct Worker_t7142;
// System.Exception
struct Exception_t972;
// System.Net.Sockets.SocketError
#include "System_System_Net_Sockets_SocketError.h"
// System.Net.Sockets.Socket/SocketOperation
#include "System_System_Net_Sockets_Socket_SocketOperation.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
 void SocketAsyncResult__ctor_m49587 (SocketAsyncResult_t7140 * __this, Socket_t4375 * ___sock, Object_t * ___state, AsyncCallback_t15 * ___callback, int32_t ___operation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
 void SocketAsyncResult_CheckIfThrowDelayedException_m49588 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
 void SocketAsyncResult_CompleteAllOnDispose_m49589 (SocketAsyncResult_t7140 * __this, Queue_t6898 * ___queue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
 void SocketAsyncResult_CompleteDisposed_m49590 (SocketAsyncResult_t7140 * __this, Object_t * ___unused, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
 void SocketAsyncResult_Complete_m49591 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
 SocketAsyncCall_t7141 * SocketAsyncResult_GetDelegate_m49592 (SocketAsyncResult_t7140 * __this, Worker_t7142 * ___worker, int32_t ___op, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
 void SocketAsyncResult_Complete_m49593 (SocketAsyncResult_t7140 * __this, int32_t ___total, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
 void SocketAsyncResult_Complete_m49594 (SocketAsyncResult_t7140 * __this, Exception_t972 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
 Object_t * SocketAsyncResult_get_AsyncState_m49595 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * SocketAsyncResult_get_AsyncWaitHandle_m49596 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
 bool SocketAsyncResult_get_IsCompleted_m49597 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
 void SocketAsyncResult_set_IsCompleted_m49598 (SocketAsyncResult_t7140 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
 int32_t SocketAsyncResult_get_Total_m49599 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
 void SocketAsyncResult_set_Total_m49600 (SocketAsyncResult_t7140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
 int32_t SocketAsyncResult_get_ErrorCode_m49601 (SocketAsyncResult_t7140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
