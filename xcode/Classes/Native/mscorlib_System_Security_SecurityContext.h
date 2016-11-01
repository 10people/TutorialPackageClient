#pragma once
#include <stdint.h>
// System.Threading.CompressedStack
struct CompressedStack_t8165;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.SecurityContext
struct SecurityContext_t8166  : public Object_t
{
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t24 ____winid;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t8165 * ____stack;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow;
};
