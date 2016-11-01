#pragma once
#include <stdint.h>
// System.Reflection.TypeFilter
struct TypeFilter_t7966;
// System.Reflection.Assembly
struct Assembly_t7067;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Module
struct Module_t7743  : public Object_t
{
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t24 ____impl;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t7067 * ___assembly;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname;
	// System.String System.Reflection.Module::name
	String_t* ___name;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token;
};
struct Module_t7743_StaticFields{
	// System.Reflection.BindingFlags System.Reflection.Module::defaultBindingFlags
	int32_t ___defaultBindingFlags;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t7966 * ___FilterTypeName;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t7966 * ___FilterTypeNameIgnoreCase;
};
