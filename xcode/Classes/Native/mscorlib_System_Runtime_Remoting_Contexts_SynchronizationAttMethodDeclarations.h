#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t8029;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t8018;
// System.Runtime.Remoting.Contexts.Context
struct Context_t8019;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
 void SynchronizationAttribute__ctor_m55365 (SynchronizationAttribute_t8029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
 void SynchronizationAttribute__ctor_m55366 (SynchronizationAttribute_t8029 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
 void SynchronizationAttribute_set_Locked_m55367 (SynchronizationAttribute_t8029 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
 void SynchronizationAttribute_ReleaseLock_m55368 (SynchronizationAttribute_t8029 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void SynchronizationAttribute_GetPropertiesForNewContext_m55369 (SynchronizationAttribute_t8029 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool SynchronizationAttribute_IsContextOK_m55370 (SynchronizationAttribute_t8029 * __this, Context_t8019 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
 void SynchronizationAttribute_ExitContext_m55371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
 void SynchronizationAttribute_EnterContext_m55372 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
