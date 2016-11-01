#pragma once
#include <stdint.h>
// System.WeakReference
struct WeakReference_t7425;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t8061  : public Identity_t8060
{
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t7425 * ____proxyReference;
};
