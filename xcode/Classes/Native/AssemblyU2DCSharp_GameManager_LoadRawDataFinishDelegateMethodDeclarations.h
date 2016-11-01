#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameManager/LoadRawDataFinishDelegate
struct LoadRawDataFinishDelegate_t2171;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameManager/LoadRawDataFinishDelegate::.ctor(System.Object,System.IntPtr)
 void LoadRawDataFinishDelegate__ctor_m14594 (LoadRawDataFinishDelegate_t2171 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/LoadRawDataFinishDelegate::Invoke(System.Byte[])
 void LoadRawDataFinishDelegate_Invoke_m14595 (LoadRawDataFinishDelegate_t2171 * __this, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameManager/LoadRawDataFinishDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
 Object_t * LoadRawDataFinishDelegate_BeginInvoke_m14596 (LoadRawDataFinishDelegate_t2171 * __this, ByteU5BU5D_t1033* ___bytes, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/LoadRawDataFinishDelegate::EndInvoke(System.IAsyncResult)
 void LoadRawDataFinishDelegate_EndInvoke_m14597 (LoadRawDataFinishDelegate_t2171 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
