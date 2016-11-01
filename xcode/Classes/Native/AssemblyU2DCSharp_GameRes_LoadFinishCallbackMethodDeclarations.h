#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.LoadFinishCallback
struct LoadFinishCallback_t2169;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GameRes.LoadedObjData
#include "AssemblyU2DCSharp_GameRes_LoadedObjData.h"
// GameRes.LoadCompleteCallBackParameter
#include "AssemblyU2DCSharp_GameRes_LoadCompleteCallBackParameter.h"

// System.Void GameRes.LoadFinishCallback::.ctor(System.Object,System.IntPtr)
 void LoadFinishCallback__ctor_m38639 (LoadFinishCallback_t2169 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadFinishCallback::Invoke(GameRes.LoadedObjData,GameRes.LoadCompleteCallBackParameter)
 void LoadFinishCallback_Invoke_m38640 (LoadFinishCallback_t2169 * __this, LoadedObjData_t2119  ___loadedObject, LoadCompleteCallBackParameter_t2120  ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameRes.LoadFinishCallback::BeginInvoke(GameRes.LoadedObjData,GameRes.LoadCompleteCallBackParameter,System.AsyncCallback,System.Object)
 Object_t * LoadFinishCallback_BeginInvoke_m38641 (LoadFinishCallback_t2169 * __this, LoadedObjData_t2119  ___loadedObject, LoadCompleteCallBackParameter_t2120  ___parameter, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.LoadFinishCallback::EndInvoke(System.IAsyncResult)
 void LoadFinishCallback_EndInvoke_m38642 (LoadFinishCallback_t2169 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
