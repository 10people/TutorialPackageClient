#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/MasterSelectChangeDelegate
struct MasterSelectChangeDelegate_t4885;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/MasterSelectChangeDelegate::.ctor(System.Object,System.IntPtr)
 void MasterSelectChangeDelegate__ctor_m34663 (MasterSelectChangeDelegate_t4885 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterSelectChangeDelegate::Invoke(System.UInt64)
 void MasterSelectChangeDelegate_Invoke_m34664 (MasterSelectChangeDelegate_t4885 * __this, uint64_t ___selectGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/MasterSelectChangeDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
 Object_t * MasterSelectChangeDelegate_BeginInvoke_m34665 (MasterSelectChangeDelegate_t4885 * __this, uint64_t ___selectGuid, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterSelectChangeDelegate::EndInvoke(System.IAsyncResult)
 void MasterSelectChangeDelegate_EndInvoke_m34666 (MasterSelectChangeDelegate_t4885 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
