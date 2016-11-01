#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinData/ShowSearchOpponentDelegate
struct ShowSearchOpponentDelegate_t4993;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void WuLinData/ShowSearchOpponentDelegate::.ctor(System.Object,System.IntPtr)
 void ShowSearchOpponentDelegate__ctor_m35734 (ShowSearchOpponentDelegate_t4993 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowSearchOpponentDelegate::Invoke(System.Int32,System.Int32)
 void ShowSearchOpponentDelegate_Invoke_m35735 (ShowSearchOpponentDelegate_t4993 * __this, int32_t ___sec, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WuLinData/ShowSearchOpponentDelegate::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ShowSearchOpponentDelegate_BeginInvoke_m35736 (ShowSearchOpponentDelegate_t4993 * __this, int32_t ___sec, int32_t ___s, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowSearchOpponentDelegate::EndInvoke(System.IAsyncResult)
 void ShowSearchOpponentDelegate_EndInvoke_m35737 (ShowSearchOpponentDelegate_t4993 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
