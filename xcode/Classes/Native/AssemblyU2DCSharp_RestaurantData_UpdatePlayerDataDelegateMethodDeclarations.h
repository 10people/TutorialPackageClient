#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RestaurantData/UpdatePlayerDataDelegate
struct UpdatePlayerDataDelegate_t4963;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void RestaurantData/UpdatePlayerDataDelegate::.ctor(System.Object,System.IntPtr)
 void UpdatePlayerDataDelegate__ctor_m35568 (UpdatePlayerDataDelegate_t4963 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData/UpdatePlayerDataDelegate::Invoke()
 void UpdatePlayerDataDelegate_Invoke_m35569 (UpdatePlayerDataDelegate_t4963 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult RestaurantData/UpdatePlayerDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UpdatePlayerDataDelegate_BeginInvoke_m35570 (UpdatePlayerDataDelegate_t4963 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantData/UpdatePlayerDataDelegate::EndInvoke(System.IAsyncResult)
 void UpdatePlayerDataDelegate_EndInvoke_m35571 (UpdatePlayerDataDelegate_t4963 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
