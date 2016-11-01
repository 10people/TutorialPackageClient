#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t8054;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t8042;
// System.Reflection.MethodBase
struct MethodBase_t5498;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.Exception
struct Exception_t972;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t8055;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m55493 (ReturnMessage_t8054 * __this, Object_t * ___ret, ObjectU5BU5D_t142* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t8042 * ___callCtx, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
 void ReturnMessage__ctor_m55494 (ReturnMessage_t8054 * __this, Exception_t972 * ___e, Object_t * ___mcm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m55495 (ReturnMessage_t8054 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
 ObjectU5BU5D_t142* ReturnMessage_get_Args_m55496 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
 LogicalCallContext_t8042 * ReturnMessage_get_LogicalCallContext_m55497 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
 MethodBase_t5498 * ReturnMessage_get_MethodBase_m55498 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
 String_t* ReturnMessage_get_MethodName_m55499 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
 Object_t * ReturnMessage_get_MethodSignature_m55500 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
 Object_t * ReturnMessage_get_Properties_m55501 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
 String_t* ReturnMessage_get_TypeName_m55502 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
 String_t* ReturnMessage_get_Uri_m55503 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
 void ReturnMessage_set_Uri_m55504 (ReturnMessage_t8054 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
 Exception_t972 * ReturnMessage_get_Exception_m55505 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
 ObjectU5BU5D_t142* ReturnMessage_get_OutArgs_m55506 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
 Object_t * ReturnMessage_get_ReturnValue_m55507 (ReturnMessage_t8054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
