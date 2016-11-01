#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t7208;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t5717;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
 void BindIPEndPoint__ctor_m51015 (BindIPEndPoint_t7208 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
 IPEndPoint_t5717 * BindIPEndPoint_Invoke_m51016 (BindIPEndPoint_t7208 * __this, ServicePoint_t6620 * ___servicePoint, IPEndPoint_t5717 * ___remoteEndPoint, int32_t ___retryCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
 Object_t * BindIPEndPoint_BeginInvoke_m51017 (BindIPEndPoint_t7208 * __this, ServicePoint_t6620 * ___servicePoint, IPEndPoint_t5717 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
 IPEndPoint_t5717 * BindIPEndPoint_EndInvoke_m51018 (BindIPEndPoint_t7208 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
