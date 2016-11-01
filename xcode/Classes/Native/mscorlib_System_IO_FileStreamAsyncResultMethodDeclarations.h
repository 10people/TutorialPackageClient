#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t7912;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IAsyncResult
struct IAsyncResult_t14;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void FileStreamAsyncResult__ctor_m54598 (FileStreamAsyncResult_t7912 * __this, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
 void FileStreamAsyncResult_CBWrapper_m54599 (Object_t * __this/* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
 Object_t * FileStreamAsyncResult_get_AsyncState_m54600 (FileStreamAsyncResult_t7912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * FileStreamAsyncResult_get_AsyncWaitHandle_m54601 (FileStreamAsyncResult_t7912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
 bool FileStreamAsyncResult_get_IsCompleted_m54602 (FileStreamAsyncResult_t7912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
