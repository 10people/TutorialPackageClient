#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t7533;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
 void PCMSetPositionCallback__ctor_m51759 (PCMSetPositionCallback_t7533 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
 void PCMSetPositionCallback_Invoke_m51760 (PCMSetPositionCallback_t7533 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * PCMSetPositionCallback_BeginInvoke_m51761 (PCMSetPositionCallback_t7533 * __this, int32_t ___position, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
 void PCMSetPositionCallback_EndInvoke_m51762 (PCMSetPositionCallback_t7533 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
