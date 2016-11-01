#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t1087;
// System.DelegateData
struct DelegateData_t7734;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Delegate
struct Delegate_t959  : public Object_t
{
	// System.IntPtr System.Delegate::method_ptr
	void (*___method_ptr)();
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t24 ___invoke_impl;
	// System.Object System.Delegate::m_target
	Object_t * ___m_target;
	// System.IntPtr System.Delegate::method
	IntPtr_t24 ___method;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t24 ___delegate_trampoline;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t24 ___method_code;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t1087 * ___method_info;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t1087 * ___original_method_info;
	// System.DelegateData System.Delegate::data
	DelegateData_t7734 * ___data;
};
