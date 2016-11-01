#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t8062;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t8061;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
 void RemotingProxy__ctor_m55520 (RemotingProxy_t8062 * __this, Type_t * ___type, ClientIdentity_t8061 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
 void RemotingProxy__ctor_m55521 (RemotingProxy_t8062 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t142* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
 void RemotingProxy__cctor_m55522 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
 String_t* RemotingProxy_get_TypeName_m55523 (RemotingProxy_t8062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
 void RemotingProxy_Finalize_m55524 (RemotingProxy_t8062 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
