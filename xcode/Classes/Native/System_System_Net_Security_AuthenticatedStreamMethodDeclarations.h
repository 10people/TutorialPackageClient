#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t7126;
// System.IO.Stream
struct Stream_t1038;

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
 void AuthenticatedStream__ctor_m49529 (AuthenticatedStream_t7126 * __this, Stream_t1038 * ___innerStream, bool ___leaveInnerStreamOpen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
 Stream_t1038 * AuthenticatedStream_get_InnerStream_m49530 (AuthenticatedStream_t7126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
 bool AuthenticatedStream_get_LeaveInnerStreamOpen_m49531 (AuthenticatedStream_t7126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
 void AuthenticatedStream_Dispose_m49532 (AuthenticatedStream_t7126 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
