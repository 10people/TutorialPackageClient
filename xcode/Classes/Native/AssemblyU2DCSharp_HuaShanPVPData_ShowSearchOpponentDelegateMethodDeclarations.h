#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData/ShowSearchOpponentDelegate
struct ShowSearchOpponentDelegate_t4895;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void HuaShanPVPData/ShowSearchOpponentDelegate::.ctor(System.Object,System.IntPtr)
 void ShowSearchOpponentDelegate__ctor_m34709 (ShowSearchOpponentDelegate_t4895 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData/ShowSearchOpponentDelegate::Invoke(System.Int32,System.Int32)
 void ShowSearchOpponentDelegate_Invoke_m34710 (ShowSearchOpponentDelegate_t4895 * __this, int32_t ___sec, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult HuaShanPVPData/ShowSearchOpponentDelegate::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * ShowSearchOpponentDelegate_BeginInvoke_m34711 (ShowSearchOpponentDelegate_t4895 * __this, int32_t ___sec, int32_t ___s, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData/ShowSearchOpponentDelegate::EndInvoke(System.IAsyncResult)
 void ShowSearchOpponentDelegate_EndInvoke_m34712 (ShowSearchOpponentDelegate_t4895 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
