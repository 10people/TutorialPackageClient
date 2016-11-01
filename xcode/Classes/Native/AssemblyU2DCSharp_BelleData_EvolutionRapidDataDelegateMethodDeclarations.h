#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/EvolutionRapidDataDelegate
struct EvolutionRapidDataDelegate_t4855;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/EvolutionRapidDataDelegate::.ctor(System.Object,System.IntPtr)
 void EvolutionRapidDataDelegate__ctor_m34508 (EvolutionRapidDataDelegate_t4855 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/EvolutionRapidDataDelegate::Invoke()
 void EvolutionRapidDataDelegate_Invoke_m34509 (EvolutionRapidDataDelegate_t4855 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/EvolutionRapidDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * EvolutionRapidDataDelegate_BeginInvoke_m34510 (EvolutionRapidDataDelegate_t4855 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/EvolutionRapidDataDelegate::EndInvoke(System.IAsyncResult)
 void EvolutionRapidDataDelegate_EndInvoke_m34511 (EvolutionRapidDataDelegate_t4855 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
