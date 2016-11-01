#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t6661;
// System.Collections.Stack
struct Stack_t6658;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t6659  : public Object_t
{
	// System.Object Mono.Xml.Schema.XsdValidationContext::xsi_type
	Object_t * ___xsi_type;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationContext::State
	XsdValidationState_t6661 * ___State;
	// System.Collections.Stack Mono.Xml.Schema.XsdValidationContext::element_stack
	Stack_t6658 * ___element_stack;
};
