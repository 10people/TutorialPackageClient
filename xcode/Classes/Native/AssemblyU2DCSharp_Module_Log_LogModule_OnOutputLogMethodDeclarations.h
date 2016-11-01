#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Module.Log.LogModule/OnOutputLog
struct OnOutputLog_t1160;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Module.Log.LogModule/OnOutputLog::.ctor(System.Object,System.IntPtr)
 void OnOutputLog__ctor_m6925 (OnOutputLog_t1160 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule/OnOutputLog::Invoke(System.String)
 void OnOutputLog_Invoke_m6926 (OnOutputLog_t1160 * __this, String_t* ____msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Module.Log.LogModule/OnOutputLog::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * OnOutputLog_BeginInvoke_m6927 (OnOutputLog_t1160 * __this, String_t* ____msg, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Module.Log.LogModule/OnOutputLog::EndInvoke(System.IAsyncResult)
 void OnOutputLog_EndInvoke_m6928 (OnOutputLog_t1160 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
