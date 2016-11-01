#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MUISelectPerson/SelectDelegate
struct SelectDelegate_t5200;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MUISelectPerson/SelectDelegate::.ctor(System.Object,System.IntPtr)
 void SelectDelegate__ctor_m37127 (SelectDelegate_t5200 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUISelectPerson/SelectDelegate::Invoke(System.Int32)
 void SelectDelegate_Invoke_m37128 (SelectDelegate_t5200 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MUISelectPerson/SelectDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * SelectDelegate_BeginInvoke_m37129 (SelectDelegate_t5200 * __this, int32_t ___index, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MUISelectPerson/SelectDelegate::EndInvoke(System.IAsyncResult)
 void SelectDelegate_EndInvoke_m37130 (SelectDelegate_t5200 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
