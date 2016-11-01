#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t8041;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t8042  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t4372 * ____data;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t8041 * ____remotingData;
};
