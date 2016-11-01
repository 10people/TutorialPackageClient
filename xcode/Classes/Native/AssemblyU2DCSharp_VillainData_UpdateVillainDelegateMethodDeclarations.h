#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VillainData/UpdateVillainDelegate
struct UpdateVillainDelegate_t4983;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void VillainData/UpdateVillainDelegate::.ctor(System.Object,System.IntPtr)
 void UpdateVillainDelegate__ctor_m35689 (UpdateVillainDelegate_t4983 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VillainData/UpdateVillainDelegate::Invoke()
 void UpdateVillainDelegate_Invoke_m35690 (UpdateVillainDelegate_t4983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult VillainData/UpdateVillainDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UpdateVillainDelegate_BeginInvoke_m35691 (UpdateVillainDelegate_t4983 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VillainData/UpdateVillainDelegate::EndInvoke(System.IAsyncResult)
 void UpdateVillainDelegate_EndInvoke_m35692 (UpdateVillainDelegate_t4983 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
