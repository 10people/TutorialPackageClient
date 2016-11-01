#pragma once
#include <stdint.h>
// System.Reflection.MonoMethod
struct MonoMethod_t7971;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t8042;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t972;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t8033  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t7971 * ___method;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t142* ___args;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t1033* ___arg_types;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t8042 * ___ctx;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t972 * ___exc;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t1042* ___methodSignature;
};
