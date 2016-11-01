#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/EvolutionDataDelegate
struct EvolutionDataDelegate_t4854;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/EvolutionDataDelegate::.ctor(System.Object,System.IntPtr)
 void EvolutionDataDelegate__ctor_m34504 (EvolutionDataDelegate_t4854 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/EvolutionDataDelegate::Invoke()
 void EvolutionDataDelegate_Invoke_m34505 (EvolutionDataDelegate_t4854 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/EvolutionDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * EvolutionDataDelegate_BeginInvoke_m34506 (EvolutionDataDelegate_t4854 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/EvolutionDataDelegate::EndInvoke(System.IAsyncResult)
 void EvolutionDataDelegate_EndInvoke_m34507 (EvolutionDataDelegate_t4854 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
