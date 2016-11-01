#pragma once
#include <stdint.h>
// System.AppDomain
struct AppDomain_t8169;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.Security.PermissionSet
struct PermissionSet_t7953;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.SecurityFrame
struct SecurityFrame_t8171 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t8169 * ____domain;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t1087 * ____method;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t7953 * ____assert;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t7953 * ____deny;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t7953 * ____permitonly;
};
