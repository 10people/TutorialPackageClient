#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<ThirdPersonCamera/CameraRockInfo>
struct Comparison_1_t21061;
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

// System.Void System.Comparison`1<ThirdPersonCamera/CameraRockInfo>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m153549 (Comparison_1_t21061 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<ThirdPersonCamera/CameraRockInfo>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m153550 (Comparison_1_t21061 * __this, CameraRockInfo_t4584  ___x, CameraRockInfo_t4584  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<ThirdPersonCamera/CameraRockInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m153551 (Comparison_1_t21061 * __this, CameraRockInfo_t4584  ___x, CameraRockInfo_t4584  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<ThirdPersonCamera/CameraRockInfo>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m153552 (Comparison_1_t21061 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
