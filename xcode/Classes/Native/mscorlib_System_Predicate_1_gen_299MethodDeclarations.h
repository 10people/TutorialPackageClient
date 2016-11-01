#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ThirdPersonCamera/CameraRockInfo>
struct Predicate_1_t21059;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ThirdPersonCamera/CameraRockInfo
#include "AssemblyU2DCSharp_ThirdPersonCamera_CameraRockInfo.h"

// System.Void System.Predicate`1<ThirdPersonCamera/CameraRockInfo>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m153539 (Predicate_1_t21059 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<ThirdPersonCamera/CameraRockInfo>::Invoke(T)
 bool Predicate_1_Invoke_m153540 (Predicate_1_t21059 * __this, CameraRockInfo_t4584  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<ThirdPersonCamera/CameraRockInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m153541 (Predicate_1_t21059 * __this, CameraRockInfo_t4584  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<ThirdPersonCamera/CameraRockInfo>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m153542 (Predicate_1_t21059 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
