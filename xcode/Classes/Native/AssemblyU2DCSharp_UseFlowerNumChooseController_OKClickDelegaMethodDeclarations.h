#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UseFlowerNumChooseController/OKClickDelegate
struct OKClickDelegate_t1850;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UseFlowerNumChooseController/OKClickDelegate::.ctor(System.Object,System.IntPtr)
 void OKClickDelegate__ctor_m12224 (OKClickDelegate_t1850 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UseFlowerNumChooseController/OKClickDelegate::Invoke(System.Int32)
 void OKClickDelegate_Invoke_m12225 (OKClickDelegate_t1850 * __this, int32_t ___curNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UseFlowerNumChooseController/OKClickDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * OKClickDelegate_BeginInvoke_m12226 (OKClickDelegate_t1850 * __this, int32_t ___curNum, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UseFlowerNumChooseController/OKClickDelegate::EndInvoke(System.IAsyncResult)
 void OKClickDelegate_EndInvoke_m12227 (OKClickDelegate_t1850 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
