#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t7181;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.Exception
struct Exception_t972;
// System.Net.FtpWebResponse
struct FtpWebResponse_t7180;
// System.IO.Stream
struct Stream_t1038;
// System.AsyncCallback
struct AsyncCallback_t15;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FtpAsyncResult__ctor_m49894 (FtpAsyncResult_t7181 * __this, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
 Object_t * FtpAsyncResult_get_AsyncState_m49895 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * FtpAsyncResult_get_AsyncWaitHandle_m49896 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
 bool FtpAsyncResult_get_IsCompleted_m49897 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
 bool FtpAsyncResult_get_GotException_m49898 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
 Exception_t972 * FtpAsyncResult_get_Exception_m49899 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
 FtpWebResponse_t7180 * FtpAsyncResult_get_Response_m49900 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
 void FtpAsyncResult_set_Stream_m49901 (FtpAsyncResult_t7181 * __this, Stream_t1038 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
 bool FtpAsyncResult_WaitUntilComplete_m49902 (FtpAsyncResult_t7181 * __this, int32_t ___timeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
 void FtpAsyncResult_SetCompleted_m49903 (FtpAsyncResult_t7181 * __this, bool ___synch, Exception_t972 * ___exc, FtpWebResponse_t7180 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
 void FtpAsyncResult_SetCompleted_m49904 (FtpAsyncResult_t7181 * __this, bool ___synch, FtpWebResponse_t7180 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
 void FtpAsyncResult_SetCompleted_m49905 (FtpAsyncResult_t7181 * __this, bool ___synch, Exception_t972 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
 void FtpAsyncResult_DoCallback_m49906 (FtpAsyncResult_t7181 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
