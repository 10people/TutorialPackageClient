#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Sockets.Socket/Worker
struct Worker_t7142;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t7140;

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
 void Worker__ctor_m49602 (Worker_t7142 * __this, SocketAsyncResult_t7140 * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
 void Worker__ctor_m49603 (Worker_t7142 * __this, SocketAsyncResult_t7140 * ___ares, bool ___requireSocketSecurity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
 void Worker_Receive_m49604 (Worker_t7142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
 void Worker_ReceiveFrom_m49605 (Worker_t7142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
 void Worker_UpdateSendValues_m49606 (Worker_t7142 * __this, int32_t ___last_sent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
 void Worker_Send_m49607 (Worker_t7142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
 void Worker_SendTo_m49608 (Worker_t7142 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
