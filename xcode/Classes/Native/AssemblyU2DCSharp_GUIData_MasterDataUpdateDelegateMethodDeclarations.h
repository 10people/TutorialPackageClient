#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData/MasterDataUpdateDelegate
struct MasterDataUpdateDelegate_t4882;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GUIData/MasterDataUpdateDelegate::.ctor(System.Object,System.IntPtr)
 void MasterDataUpdateDelegate__ctor_m34651 (MasterDataUpdateDelegate_t4882 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterDataUpdateDelegate::Invoke()
 void MasterDataUpdateDelegate_Invoke_m34652 (MasterDataUpdateDelegate_t4882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GUIData/MasterDataUpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * MasterDataUpdateDelegate_BeginInvoke_m34653 (MasterDataUpdateDelegate_t4882 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData/MasterDataUpdateDelegate::EndInvoke(System.IAsyncResult)
 void MasterDataUpdateDelegate_EndInvoke_m34654 (MasterDataUpdateDelegate_t4882 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
