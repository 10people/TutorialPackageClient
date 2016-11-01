#pragma once
#include <stdint.h>
// System.Security.SecurityContext
struct SecurityContext_t8166;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ExecutionContext
struct ExecutionContext_t8032  : public Object_t
{
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t8166 * ____sc;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture;
};
